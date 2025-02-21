//Este programa permite ingresar notas de 5 estudiantes, calcula sus notas finales y su promedio final
//Luis Valenzuela febrero de 2025
#include <iostream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;

int main(){
    vector<int> notasPrimerAlumno;
    vector<int> notasSegundoAlumno;
    vector<int> notasTercerAlumno;
    vector<int> notasCuartoAlumno;
    vector<int> notasQuintoAlumno;
    int notaPrimerAlumno;
    int notaSegundoAlumno;
    int notaTercerAlumno;
    int notaCuartoAlumno;
    int notaQuintoAlumno;
    int totalPrimerAlumno;
    int totalSegundoAlumno;
    int totalTercerAlumno;
    int totalCuartoAlumno;
    int totalQuintoAlumno;
    int promedioPrimerAlumno;
    int promedioSegundoAlumno;
    int promedioTercerAlumno;
    int promedioCuartoAlumno;
    int promedioQuintoAlumno;

    cout << "Ingrese la nota sobre 20 puntos del primer parcial del alumno 1: ";
    cin >> notaPrimerAlumno;
    notasPrimerAlumno.push_back(notaPrimerAlumno);
    cout << "Ingrese la nota sobre 25 puntos del segundo parcial del alumno 1: ";
    cin >> notaPrimerAlumno;
    notasPrimerAlumno.push_back(notaPrimerAlumno);
    cout << "Ingrese la nota sobre 20 puntos de las actividades del alumno 1: ";
    cin >> notaPrimerAlumno;
    notasPrimerAlumno.push_back(notaPrimerAlumno);
    cout << "Ingrese la nota sobre 35 puntos del examen final del alumno 1: ";
    cin >> notaPrimerAlumno;
    notasPrimerAlumno.push_back(notaPrimerAlumno);
    cout << endl;

    cout << "Ingrese la nota sobre 20 puntos del primer parcial del alumno 2: ";
    cin >> notaSegundoAlumno;
    notasSegundoAlumno.push_back(notaSegundoAlumno);
    cout << "Ingrese la nota sobre 25 puntos del segundo parcial del alumno 2: ";
    cin >> notaSegundoAlumno;
    notasSegundoAlumno.push_back(notaSegundoAlumno);
    cout << "Ingrese la nota sobre 20 puntos de las actividades del alumno 2: ";
    cin >> notaSegundoAlumno;
    notasSegundoAlumno.push_back(notaSegundoAlumno);
    cout << "Ingrese la nota sobre 35 puntos del examen final del alumno 2: ";
    cin >> notaSegundoAlumno;
    notasSegundoAlumno.push_back(notaSegundoAlumno);
    cout << endl;

    cout << "Ingrese la nota sobre 20 puntos del primer parcial del alumno 3: ";
    cin >> notaTercerAlumno;
    notasTercerAlumno.push_back(notaTercerAlumno);
    cout << "Ingrese la nota sobre 25 puntos del segundo parcial del alumno 3: ";
    cin >> notaTercerAlumno;
    notasTercerAlumno.push_back(notaTercerAlumno);
    cout << "Ingrese la nota sobre 20 puntos de las actividades del alumno 3: ";
    cin >> notaTercerAlumno;
    notasTercerAlumno.push_back(notaTercerAlumno);
    cout << "Ingrese la nota sobre 35 puntos del examen final del alumno 3: ";
    cin >> notaTercerAlumno;
    notasTercerAlumno.push_back(notaTercerAlumno);
    cout << endl;

    cout << "Ingrese la nota sobre 20 puntos del primer parcial del alumno 4: ";
    cin >> notaCuartoAlumno;
    notasCuartoAlumno.push_back(notaCuartoAlumno);
    cout << "Ingrese la nota sobre 25 puntos del segundo parcial del alumno 4: ";
    cin >> notaCuartoAlumno;
    notasCuartoAlumno.push_back(notaCuartoAlumno);
    cout << "Ingrese la nota sobre 20 puntos de las actividades del alumno 4: ";
    cin >> notaCuartoAlumno;
    notasCuartoAlumno.push_back(notaCuartoAlumno);
    cout << "Ingrese la nota sobre 35 puntos del examen final del alumno 4: ";
    cin >> notaCuartoAlumno;
    notasCuartoAlumno.push_back(notaCuartoAlumno);
    cout << endl;

    cout << "Ingrese la nota sobre 20 puntos del primer parcial del alumno 5: ";
    cin >> notaQuintoAlumno;
    notasQuintoAlumno.push_back(notaQuintoAlumno);
    cout << "Ingrese la nota sobre 25 puntos del segundo parcial del alumno 5: ";
    cin >> notaQuintoAlumno;
    notasQuintoAlumno.push_back(notaQuintoAlumno);
    cout << "Ingrese la nota sobre 20 puntos de las actividades del alumno 5: ";
    cin >> notaQuintoAlumno;
    notasQuintoAlumno.push_back(notaQuintoAlumno);
    cout << "Ingrese la nota sobre 35 puntos del examen final del alumno 5: ";
    cin >> notaQuintoAlumno;
    notasQuintoAlumno.push_back(notaQuintoAlumno);
    cout << endl;

    cout << "Notas finales:" << endl;
    totalPrimerAlumno = notasPrimerAlumno[0] + notasPrimerAlumno[1] + notasPrimerAlumno[2] + notasPrimerAlumno[3];
    totalSegundoAlumno = notasSegundoAlumno[0] + notasSegundoAlumno[1] + notasSegundoAlumno[2] + notasSegundoAlumno[3];
    totalTercerAlumno = notasTercerAlumno[0] + notasTercerAlumno[1] + notasTercerAlumno[2] + notasTercerAlumno[3];
    totalCuartoAlumno = notasCuartoAlumno[0] + notasCuartoAlumno[1] + notasCuartoAlumno[2] + notasCuartoAlumno[3];
    totalQuintoAlumno = notasQuintoAlumno[0] + notasQuintoAlumno[1] + notasQuintoAlumno[2] + notasQuintoAlumno[3];
    cout << "Alumno 1: " + to_string(totalPrimerAlumno)<< endl;
    cout << "Alumno 2: " + to_string(totalSegundoAlumno)<< endl;
    cout << "Alumno 3: " + to_string(totalTercerAlumno)<< endl;
    cout << "Alumno 4: " + to_string(totalCuartoAlumno)<< endl;
    cout << "Alumno 5: " + to_string(totalQuintoAlumno)<< endl;

    cout << "Promedios finales:" << endl;
    promedioPrimerAlumno = totalPrimerAlumno/4;
    promedioSegundoAlumno = totalSegundoAlumno/4;
    promedioTercerAlumno = totalTercerAlumno/4;
    promedioCuartoAlumno = totalCuartoAlumno/4;
    promedioQuintoAlumno = totalQuintoAlumno/4;
    cout << "Alumno 1: " + to_string(promedioPrimerAlumno)<< endl;
    cout << "Alumno 2: " + to_string(promedioSegundoAlumno)<< endl;
    cout << "Alumno 3: " + to_string(promedioTercerAlumno)<< endl;
    cout << "Alumno 4: " + to_string(promedioCuartoAlumno)<< endl;
    cout << "Alumno 5: " + to_string(promedioQuintoAlumno)<< endl;
}
