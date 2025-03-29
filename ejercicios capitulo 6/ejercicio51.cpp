#include <iostream>

using namespace std;

template <typename T>
T minimo(T a, T b) {
    return (a < b) ? a : b;
}

int main() {

    int numeroUno = 10, numeroDos = 20;
    cout << "Menor entre " << numeroUno << " y " << numeroDos << ": " << minimo(numeroUno, numeroDos) << endl;

    char charUno = 'a', charDos = 'z';
    cout << "Menor entre '" << charUno << "' y '" << charDos << "': " << minimo(charUno, charDos) << endl;

    double numeroTres = 5.67, numeroCuatro = 3.14;
    cout << "Menor entre " << numeroTres << " y " << numeroCuatro << ": " << minimo(numeroTres, numeroCuatro) << endl;

    return 0;
}
