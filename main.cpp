//
// Created by James Zammit on 19/05/2016.
//

#include <iostream>
#include "Token.h"
#include "Parse.h"
using namespace std;

int main() {
    Scan ltest;
    string s;
    cout << "input the code file: ";
    cin >> s;
    ltest.srcfile = s;
    ltest.outfile = "/Users/James/Open_Source/Debug/out.txt";
    ltest.getToken();
    Parse ptest(ltest.list_token, "/Users/James/Open_Source/Debug/asm.txt",
                "/Users/James/Open_Source/Debug/main.txt");
    ptest.test();
    return 0;
}

