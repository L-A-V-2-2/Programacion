#include <iostream>
using namespace std;

int triplicarPorValor(int numero) {
    return numero * 3;
}

void triplicarPorReferencia(int &numero) {
    numero *= 3;
}

int main() {
    int cuenta = 5;

    int resultadoValor = triplicarPorValor(cuenta);
    cout << "Resultado usando paso por valor: " << resultadoValor << endl;
    cout << "Valor original despues de paso por valor: " << cuenta << endl;

    triplicarPorReferencia(cuenta);
    cout << "Valor despues de paso por referencia: " << cuenta << endl;

    return 0;
}

