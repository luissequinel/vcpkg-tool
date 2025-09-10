#include<iostream>
using namespace std;

int main(){

    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    //update(pa, pb);
    *pa = 8; // Ponteiro recebeu o valor 8. assim atualizou o valor dentro da memória
    cout << pa << " " << pb << endl;
    cout << a << " " << b << endl;
    cout << *pa << " " << *pb << endl;
    cout << &a << " " << &b << endl;
    cout << &pa << " " << &pb << endl;
    return 0;

}