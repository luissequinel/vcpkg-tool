#include<iostream>
using namespace std;

int main(){

    string a = "Luis";
    cout << a << endl;
    cout << &a << endl;

    string *ptr = &a;

    cout << ptr << endl;
    cout << *ptr << endl;

    *ptr = "Afonso Sequinel";
    cout << a << endl;
    

}