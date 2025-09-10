#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n; // número de arrays internos
    cin >> n;

    vector<vector<int>> a(n);

    // Lendo os arrays internos
    for (int i = 0; i < n; i++) {
        int ki; // tamanho do array i
        cin >> ki;
        a[i].resize(ki);
        for (int j = 0; j < ki; j++) {
            cin >> a[i][j];
        }
    }

    int q; // número de consultas
    cin >> q;

    // Respondendo as consultas
    for (int k = 0; k < q; k++) {
        int i, j;
        cin >> i >> j;
        cout << a[i][j] << endl;
    }

    return 0;
}
