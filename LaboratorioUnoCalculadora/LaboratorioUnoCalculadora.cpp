#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main(){
string entrada;
double numeroUno, numeroDos, resultado;
char operador;
size_t posicion = string::npos; //para indicar un error y size_t es para almacenar índices
cout<<"Ingrese una operacion de dos numeros (por ejemplo:19+2)";
cin>>entrada;
for (size_t i =0; i< entrada.length(); ++i){
    if (entrada[i] == '+' || entrada[i] =='-' || entrada[i] =='*' || entrada[i] =='/'){
        operador = entrada[i];
        posicion = i;
        break;
    }
}
if (posicion == string::npos){
    cout<<"No ingreso un operador valido."<<endl;
    return 1;
}
numeroUno = atof(entrada.substr(0, posicion).c_str());//atof = ASCII a float, aunque convierte en double, algo confuso la verdad
numeroDos = atof(entrada.substr(posicion +1).c_str());//c_str() hace a la cadena compatible con funciones más antiguas de C
switch (operador){
case '+':
    resultado = numeroUno+numeroDos;
    cout<<"Resultado: "<<resultado<<endl;
    break;
case '-':
    resultado = numeroUno-numeroDos;
    cout<<"Resultado: "<<resultado<<endl;
    break;
case '*':
    resultado = numeroUno*numeroDos;
    cout<<"Resultado: "<<resultado<<endl;
    break;
case '/':
    if (numeroDos != 0){
        resultado = numeroUno/numeroDos;
        cout<<"Resultado: "<<resultado<<endl;
    }else{
        cout<<"Error: No se puede dividir por cero"<<endl;
    }
    break;
}
return 0;
}
