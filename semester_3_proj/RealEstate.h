#ifndef REALESTATE_H
#define REALESTATE_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
#include <conio.h>
#include <iomanip>
#include <regex>

using namespace std;

class RealEstate
{
public:
    std::string file_path;
    RealEstate(string filename);

    // fetch a particular row in the csv file using the row index
    vector<string> fetchRow(int index);
    vector<string> fetchRow(vector<vector<string>> content, int index);

    // fetch all the rows of the csv data as an associative array(vector)
    vector<vector<string>> fetchAll();


    // fetch some rows of the csv data according to the value as an associative array(vector)
    vector<vector<string>> fetchWhere(int index, string value);
    vector<vector<string>> fetchWhere(string str_input);

    //find row by wide search
    vector<vector<string>>  findWhere(string input);

    // print all the data in the csv file
    void printAll(vector<vector<string>> content);

    //This function takes a string input, convert it to integer then format the integer into money(comma separated digit) and return it as a string
    //string moneyFormat(string str);
    template <typename T>
    T moneyFormat(T str);

    bool isValid(string type, const string& input);
};

#endif // REALESTATE_H
