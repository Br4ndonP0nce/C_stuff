#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <clocale>
#include "conio.h"
#include "stdlib.h"
#include "ldl.h"
#include "regex"
#include <fstream>
using namespace std;
int count=0,usr,tests[10];
void test(){
    ifstream opfile;
    opfile.open("text.txt",ios::in);
    for(int i=0;i<10;i++){
     opfile>>tests[i];
    }
    for(int i=0;i<10;i++){
        cout<<tests[i];
    }
system("pause");
}
int main(){
    ofstream file;
    while(true) {
        file.open("text.txt", ios::out | ios::trunc);
        for (int i = 0; i < 10; i++) {
            cout << "insert number" << endl;
            cin >> usr;
            file << usr;
        }
        file.close();
        test();
    }

}
