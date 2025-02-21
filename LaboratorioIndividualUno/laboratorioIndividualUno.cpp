#include <iostream>
#include <string>
#include <vector>
#include <random>
#include <iomanip>
using namespace std;

int main() {
    char repetir;
    do {
        vector<string> candidatos;
        string candidato;
        int anchoColumna = 12;

        do {
            cout << "Ingrese el nombre de un candidato (ingrese \"none\" para terminar con la Adicion de candidatos): ";
            cin >> candidato;
            if (candidato != "none" && candidato != "None" && candidato != "NONE") {
                candidatos.push_back(candidato);
            }
        } while (candidato != "none" && candidato != "None" && candidato != "NONE");

        int numeroCandidatos = candidatos.size();
        vector<vector<int>> votos(5, vector<int>(numeroCandidatos, 0));
        vector<int> totalVotos(numeroCandidatos, 0);
        random_device rd;
        mt19937 gen(rd());

        for (int i = 0; i < 5; i++) {
            vector<int> distribuciones(numeroCandidatos, 0);
            int suma = 50;
            for (int j = 0; j < numeroCandidatos - 1; j++) {
                uniform_int_distribution<int> dist(0, suma);
                distribuciones[j] = dist(gen);
                suma -= distribuciones[j];
            }
            distribuciones[numeroCandidatos - 1] = suma;
            votos[i] = distribuciones;

            for (int j = 0; j < numeroCandidatos; j++) {
                totalVotos[j] += votos[i][j];
            }
        }

        cout << "\nResultados de votacion:\n";
        cout << setw(anchoColumna) << "Candidatos:";
        for (const string& nombre : candidatos) {
            cout << setw(anchoColumna) << nombre;
        }
        cout << endl;

        for (int i = 0; i < 3; i++) {
            cout << setw(anchoColumna) << "Votos " + to_string(i + 1) + ":";
            for (int j = 0; j < numeroCandidatos; j++) {
                cout << setw(anchoColumna) << votos[i][j];
            }
            cout << endl;
        }

        int maxVotos = totalVotos[0], minVotos = totalVotos[0];
        string ganador = candidatos[0], perdedor = candidatos[0];

        for (int i = 1; i < numeroCandidatos; i++) {
            if (totalVotos[i] > maxVotos) {
                maxVotos = totalVotos[i];
                ganador = candidatos[i];
            }
            if (totalVotos[i] < minVotos) {
                minVotos = totalVotos[i];
                perdedor = candidatos[i];
            }
        }

        cout << "\nGanador definitivo: " << ganador << " con " << maxVotos << " votos." << endl;
        cout << "Perdedor: " << perdedor << " con " << minVotos << " votos." << endl;

        cout << "\n¿Desea ejecutar nuevamente el programa? (s/n): ";
        cin >> repetir;
    } while (repetir == 's' || repetir == 'S');

    return 0;
}

