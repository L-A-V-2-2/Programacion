#include <iostream>
#include <stdlib.h>
#include <iomanip>

using namespace std;
//Declaraciòn de Constantes
const int NUMEROALUMNOS=5;
const int NUMEROMATERIAS=5;
const int NUMERONOTAS=4;
const int MAX_CALIFICACION=100;
const int MIN_CALIFICACION=0;
const int MAX_LONGITUD_CADENA=100;
//Declaraciòn de Prototipos de Funciòn
void LlamarCiclo();
void InicializarMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1]);
void LlenarMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1]);
float imprimirMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1]);
int busquedaAleatoriaDeNotas(int minimo, int maximo);


int main()
{
    LlamarCiclo();
    return 0;
}
void LlamarCiclo()
{
    float matrizFacultad_1[NUMEROALUMNOS][NUMERONOTAS+1];
    float matrizFacultad_2[NUMEROALUMNOS][NUMERONOTAS+1];
    float matrizFacultad_3[NUMEROALUMNOS][NUMERONOTAS+1];

    char opcion;
    bool repetir=true;

    float promedioFacultad_1;
    float promedioFacultad_2;
    float promedioFacultad_3;

    string alumnosFacultad[NUMEROALUMNOS]={"Carlos", "Luis", "Maria", "Pedro", "Mario"};

    do
    {
        promedioFacultad_1=0;
        promedioFacultad_2=0;
        promedioFacultad_3=0;
        cout << "*** Comparativo de Facultades ***" << endl << endl;
        InicializarMatriz(matrizFacultad_1);
        InicializarMatriz(matrizFacultad_2);
        InicializarMatriz(matrizFacultad_3);
        LlenarMatriz(matrizFacultad_1);
        LlenarMatriz(matrizFacultad_2);
        LlenarMatriz(matrizFacultad_3);
        promedioFacultad_1=imprimirMatriz(matrizFacultad_1);
        cout << "¿Desea repetir el proceso? (s/n): ";
        cin >> opcion;
        if(opcion == 'n' || opcion == 'N')
        {
            repetir = false;
        }

    } while (repetir);

}
void InicializarMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1])
{
    //Funciòn que permite inicializar la matriz de calculos
    int i,j;
    for(i=0; i < NUMEROALUMNOS; i++) //manipula las filas en la matriz
    {
        for(j=0; j<NUMERONOTAS; j++) //manipula las columnas en la matriz
        {
            matriz[i][j]= 0.00;
        }
    }
}
void LlenarMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1])
{
    //Funciòn que permite calcular aleatoriamente las notas de cada alumno en la matriz
    int i,j;
    for(i=0; i < NUMEROALUMNOS; i++) //manipula las filas en la matriz
    {
        float suma=0;
        int calificacionAlumno=0;
        for(j=0; j<=NUMERONOTAS; j++) //manipula las columnas en la matriz
        {
            if (j==0 || j==3) //primer parcial
            {
                calificacionAlumno = busquedaAleatoriaDeNotas(MIN_CALIFICACION, 20);
            }
            else if (j==1) //segundo parcial
            {
                calificacionAlumno = busquedaAleatoriaDeNotas(MIN_CALIFICACION, 25);
            }
            else if (j==2) //examen final
            {
                calificacionAlumno = busquedaAleatoriaDeNotas(MIN_CALIFICACION, 35);
            }
            suma+=(float)calificacionAlumno;
            matriz[i][j] = (float)calificacionAlumno;
            calificacionAlumno=0;
        }
        matriz[i][NUMERONOTAS]=suma;
    }
}
float imprimirMatriz(float matriz[NUMEROALUMNOS][NUMERONOTAS+1])
{
    int y, x;
    float promedioMayor = matriz[0][NUMERONOTAS];
    float promedioMenor = matriz[0][NUMERONOTAS];
    float totalGeneral = 0;
    float promedioGeneral = 0;

    cout << "(nota1)=>Primer Parcial (Nota2)=>Segundo Parcial (Nota3)=>Final (Nota4)=>Actividades" << endl;


    for (x = 0; x < NUMEROALUMNOS; x++)
    {
        cout << " | Alumno " << x + 1 << ": ";
        for (y = 0; y < NUMERONOTAS; y++)
        {
            cout << setw(4) << matriz[x][y] << " ";
        }
        cout << " | Total: " << matriz[x][NUMERONOTAS] << endl;

    }



    return promedioGeneral;
}

int busquedaAleatoriaDeNotas(int minimo, int maximo)
{
    return minimo + rand() % (maximo-minimo+1);
}
