#include <iostream>

using namespace std;

int main(int argc, char *argv[]){

    string prim_nome;
    cout<< "Digite o primeiro nome:";
    cin >> prim_nome;
    cout << prim_nome << endl;
    
    cin.ignore();
    cout << "Digite seu nome completo: ";
    string nome_usuario;
    getline(cin, nome_usuario);
    cout << nome_usuario << endl;
    

    
return 0;
}