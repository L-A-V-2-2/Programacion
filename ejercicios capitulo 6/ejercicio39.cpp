#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void mostrarMovimiento(int disco, int torreOrigen, int torreDestino) {
    cout << "Mover disco " << disco
         << " de la torre " << torreOrigen
         << " a la torre " << torreDestino << endl;
}

void moverDisco(vector<int> torres[], int from, int to) {
    int disco = torres[from].back();
    torres[from].pop_back();
    torres[to].push_back(disco);

    mostrarMovimiento(disco, from, to);
}

int discoTope(const vector<int>& torre) {
    if (!torre.empty()) {
        return torre.back();
    }
    return 999999999;
}

int siguienteTorre(int torreActual, bool esImpar) {
    if (esImpar) {
        return (torreActual + 2) % 3;
    } else {
        return (torreActual + 1) % 3;
    }
}

void torresHanoiIterativo(int numDiscos) {
    vector<int> torres[3];


    for (int disco = numDiscos; disco >= 1; disco--) {
        torres[0].push_back(disco);
    }

    int totalMovimientos = (1 << numDiscos) - 1;

    bool esImpar = (numDiscos % 2 == 1);


    int torreDiscoPequeno = 0;

    for (int movimiento = 1; movimiento <= totalMovimientos; movimiento++) {
        if (movimiento % 2 == 1) {
            int torreSiguiente = siguienteTorre(torreDiscoPequeno, esImpar);

            moverDisco(torres, torreDiscoPequeno, torreSiguiente);

            torreDiscoPequeno = torreSiguiente;
        }
        else {

            int otra1 = (torreDiscoPequeno + 1) % 3;
            int otra2 = (torreDiscoPequeno + 2) % 3;

            int top1 = discoTope(torres[otra1]);
            int top2 = discoTope(torres[otra2]);

            if (top1 < top2) {

                moverDisco(torres, otra1, otra2);
            } else {
                moverDisco(torres, otra2, otra1);
            }
        }
    }
}

int main() {
    int n;
    cout << "Ingrese el numero de discos: ";
    cin >> n;

    torresHanoiIterativo(n);

    return 0;
}
