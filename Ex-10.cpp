#include <iostream>
using namespace std;

int main() {
    int idade, opiniao;

    int total = 0;
    int somaIdade = 0;

    int otimo = 0, bom = 0, regular = 0, ruim = 0;

    cout << "Digite a idade (negativa para encerrar): ";
    cin >> idade;

    while (idade >= 0) {
        cout << "Digite a opiniao (1-otimo, 2-bom, 3-regular, 4-ruim): ";
        cin >> opiniao;

        // Contagem das opinioes
        if (opiniao == 1) otimo++;
        else if (opiniao == 2) bom++;
        else if (opiniao == 3) regular++;
        else if (opiniao == 4) ruim++;

        total++;
        somaIdade += idade;

        cout << "Digite a idade (negativa para encerrar): ";
        cin >> idade;
    }

    if (total > 0) {
        cout << "\nTotal de pessoas: " << total << endl;
        cout << "Media de idade: " << (somaIdade * 1.0 / total) << endl;

        cout << "Otimo: " << (otimo * 100.0 / total) << "%" << endl;
        cout << "Bom: " << (bom * 100.0 / total) << "%" << endl;
        cout << "Regular: " << (regular * 100.0 / total) << "%" << endl;
        cout << "Ruim: " << (ruim * 100.0 / total) << "%" << endl;
    } 
    else {
        cout << "Nenhum dado informado." << endl;
    }

    return 0;
}
