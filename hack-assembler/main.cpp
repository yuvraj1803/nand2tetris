//
// Created by Yuvraj Sakshith on 25/11/22.
//

#include <iostream>
#include <fstream>
#include "parser.h"
#include "symbol_table.h"
#include "translator.h"

using namespace std;

int main(int argc, char * argv[]){
    if(argc != 2){
        cout << "input format: ./hack-assembler <file-name>" << '\n';
        exit(1);
    }
    vector<string> args;
    for(int i=0;i<argc;i++){
        args.push_back((string) argv[i]);
    }
    string file = args[1];
    parser p(file);
//    p.displayCode();
    if(p.fileError){
        cout << "error opening the file\neither file doesnt exist or doesnt have read permissions" << '\n';
        exit(1);
    }
    string outfile = file.substr(0,file.size()-4);
    outfile += ".hack";
    vector<string> mc = p.machineCode;
    ofstream of(outfile);
    for(const auto& i:mc) of << i << '\n';
    of.close();

    exit(0);
}
