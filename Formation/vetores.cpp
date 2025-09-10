#include <iostream>
#include <vector>
using namespace std;

int main() {
    int i, j, k, n;
    int qtde_vetores, consultas_q;
    int tam_vetor;

    cin >> qtde_vetores >> consultas_q;
    

    vector<vector<int>> vetor_nums(qtde_vetores);
    
    for(i=0;i<qtde_vetores;i++){
        cin >> tam_vetor;
        vetor_nums[i].resize(tam_vetor);
        for(j=0;j<tam_vetor;j++){
            cin >> vetor_nums[i][j];
        }
    } 
    
    vector<vector<int>> consultas(consultas_q);
    for(k=0;k<consultas_q;k++){
        consultas[k].resize(2);
        for (n=0;n<2;n++){
            cin >> consultas[k][n];
        }    
    }

    for (int k = 0; k < consultas_q; k++) {
        int i = consultas[k][0]; // índice do vetor externo
        int j = consultas[k][1]; // índice dentro do vetor interno
        cout << vetor_nums[i][j] << endl;
    }

    return 0;
}
