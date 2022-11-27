//
// Created by Yuvraj Sakshith on 25/11/22.
//

#include <iostream>
#include <fstream>

#include "Assembler.h"

using namespace std;

int main(int argc, char * argv[]){
    if(argc != 2){
        cout << "input format: hack-assembler <file-name>" << '\n';
        exit(1);
    }

    string file = argv[1];


    Assembler hack_assembler = *new Assembler(file);

    string outfile = file.substr(0,file.size()-4);
    outfile += ".hack";
    vector<string> mc = hack_assembler.machine_code;
    ofstream of(outfile);
    for(const auto& i:mc) of << i << '\n';
    of.close();

    exit(0);
}
