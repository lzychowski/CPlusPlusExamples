// sample program 

#include <iostream>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
    string fname, lname, money_string;
    double money_double;

    // read 3 lines from file
    // file should look like this:
    //
    // fname
    // lname
    // money in wallet
    //

    ifstream inputFile;
    inputFile.open("inputFile.txt");
    getline(inputFile, fname);
    getline(inputFile, lname);
    getline(inputFile, money_string);

    // convert from string to double

    money_double = atof(money_string.c_str());

    // write input values to a file
    // write calculated values to a file

    ofstream outputFile;
    outputFile.open("outputFile.out");

    outputFile << "Name: " << fname << " " << lname << endl;
    outputFile << showpoint << setprecision(2) << money_double << endl;

    outputFile.close();
}