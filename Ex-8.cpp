#include <iostream>
using namespace std;

int main() {
    int voto;
    int c1 = 0, c2 = 0, nulo = 0, branco = 0, total = 0;

    cout << "Digite os votos (0 para encerrar):" << endl;

    cin >> voto;

    while (voto != 0) {
        if (voto == 1) {
            c1++;
        } 
        else if (voto == 2) {
            c2++;
        } 
        else if (voto == 3) {
            nulo++;
        } 
        else if (voto == 4) {
            branco++;
        }

        total++;
        cin >> voto;
    }

    // Evitar divisão por zero
    if (total > 0) {
        cout << "Candidato 1: " << (c1 * 100.0 / total) << "%" << endl;
        cout << "Candidato 2: " << (c2 * 100.0 / total) << "%" << endl;
        cout << "Nulos: " << (nulo * 100.0 / total) << "%" << endl;
        cout << "Brancos: " << (branco * 100.0 / total) << "%" << endl;
    } else {
        cout << "Nenhum voto computado." << endl;
    }

    return 0;
}
