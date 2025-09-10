#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){

    string names[4];

    names[0]="Loane";
    names[1]="Miguel";
    names[2]="Luis";
    names[3]="Cocada";

    int n;
    for(n=0;n<=3;n++){
        cout << names[n] << " mem: " << &names[n] << endl;
    }
    
    return 0;
}