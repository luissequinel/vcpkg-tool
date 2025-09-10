#include <iostream>

using namespace std;

int main (char argc, char const *argv[]){
    int age=23;
    cout << age << endl;
    const int age2 = age;
    age=38;
    //age3=99;    
    printf("Olá. Sua idade: ");
    cout << age << endl;
    cout << age2 << endl;
    //cout << age3 << endl;
    return 0;
}