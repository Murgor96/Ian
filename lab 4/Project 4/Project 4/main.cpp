/*Ian Sitienei
C++ Fall 2020
Due Oct 19 2020 at 11:45pm
Lab 4 Temprature output
Description:Design a program that inputes series of temprature values
*/


#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>

using namespace std;
int main()
{
    char filename[30];
    cout << "what is the name of the file you want to use?";
    int rain[24], i, j, stars;
    cin >> filename;
    ifstream inputFile;
    inputFile.open("TextFile.txt"); //open the file
    if (inputFile.fail()) //is the file the right one?
    {
        cout << "the file cannot be open please confirm \n";
        system("pause");
        return 1;
    }
    for (i = 0; i < 24; i++) {
        inputFile >> rain[i];
    }
    cout << "each * represents 3 degrees (scale is approximate)\n";
    cout << "hour\ntemp";
    cout << "-30";
    for (i = -20; i <= 120; i += 10)
        cout << setw(4) << i;
    cout << endl;
    for (i = 0; i < 24; i++) {
        cout << setw(5) << i + 1 << "|";
        stars = (int)ceil((rain[i] + 30) / 3);
        for (j = 0; j < stars; j++)
            cout << "*";
        cout << endl;
    }
    inputFile.close();
    system("pause");
    return 0;
}


