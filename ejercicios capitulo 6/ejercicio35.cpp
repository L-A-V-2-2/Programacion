#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    int numeroSecreto = 1 + rand() % 1000;
    int intento;
    int contadorIntentos = 0;

    cout << "Bienvenido al juego de Adivina el Numero!" << endl;
    cout << "Estoy pensando en un numero entre 1 y 1000. Puedes adivinar cual es?" << endl;

    do {
        cout << "Ingrese su intento: ";
        cin >> intento;
        contadorIntentos++;

        if (intento < numeroSecreto) {
            cout << "Demasiado bajo. Intente de nuevo.\n";
        } else if (intento > numeroSecreto) {
            cout << "Demasiado alto. Intente de nuevo.\n";
        }

    } while (intento != numeroSecreto);

    cout << "Felicidades! Has adivinado el numero en " << contadorIntentos << " intentos." << endl;

    if (contadorIntentos <= 10) {
        cout << (contadorIntentos == 10 ? "Sabia usted el secreto!" : "O ya sabia usted el secreto, o tuvo suerte!") << endl;
    } else {
        cout << "Deberia haberlo hecho mejor!" << endl;
    }

}

