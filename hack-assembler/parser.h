//
// Created by Yuvraj Sakshith on 25/11/22.
//

#ifndef HACK_ASSEMBLER_PARSER_H
#define HACK_ASSEMBLER_PARSER_H

#include <string>
#include <vector>
#include <fstream>
#include "symbol_table.h"
#include "translator.h"

using namespace std;

class parser {
private:
    vector<string> parse();
    vector<string> code;

    string removeComments(string &line);
    string removeSpaces(string &line);
    string integerToBinaryString(int n);

    bool checkEmptyString(string &line);

public:
     explicit parser(const string& file);
     bool fileError = false;
     vector<string> machineCode;
     void displayCode();

};


#endif //HACK_ASSEMBLER_PARSER_H
