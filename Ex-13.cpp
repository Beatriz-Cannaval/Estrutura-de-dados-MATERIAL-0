#include <iostream>
using namespace std;

int main() {
    float nota;
    cin >> nota;

    if (nota >= 6)
        cout << "Aprovado";
    else if (nota >= 4)
        cout << "Recuperacao";
    else
        cout << "Reprovado";

    return 0;
}
