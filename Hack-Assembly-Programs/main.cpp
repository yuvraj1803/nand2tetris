//
// Created by Yuvraj Sakshith on 25/11/22.
//

#include <iostream>

using namespace std;

int main(int argc, char * argv[]){
    if(argc != 2){
        cout << "incorrect format. expected: hackasm file.asm";
        exit(1);
    }

    string file = argv[1];

}