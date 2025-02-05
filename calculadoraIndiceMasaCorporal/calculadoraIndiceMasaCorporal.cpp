#include <iostream>
#include <string>
using namespace std;
int main(){
    string peso;
    string altura;
    string unidadDeMedidaPeso, unidadDeMedidaAltura;
    double pesoMagnitud, alturaMagnitud, bmi;
    size_t posicionPeso = string::npos;
    size_t posicionAltura = string::npos;
    cout<<"Ingrese su peso en libras o kilogramos (ejemplo: \"110lb\" o \"50kg\")";
    cin>>peso;
    cout<<"Ingrese su altura en pulgadas si ingresó su peso en libras, ingrese su altura en metros si ingresó su peso en kilogramos (ejemplo: \"66in\" o \"1.70m\")";
    cin>>altura;
    for(size_t i = 0; i < peso.length();++i){
        if(i + 1 < peso.length() && peso[i] =='l' && peso[i+1] == 'b'){
            unidadDeMedidaPeso = "lb";
            posicionPeso = i;
            break;
        }else if(peso[i] =='k' && peso[i+1] == 'g'){
            unidadDeMedidaPeso = "kg";
            posicionPeso = i;
            break;
        }
    }
    if(posicionPeso == string::npos){
        cout<<"No ingresó una unidad de medida de peso valida."<<endl;
        return 1;
    }
    for(size_t i = 0; i < altura.length();++i){
        if(i + 1 < peso.length() && altura[i] =='i' && altura[i+1] == 'n'){
            unidadDeMedidaAltura = "in";
            posicionAltura = i;
            break;
        }else if(altura[i] =='m'){
            unidadDeMedidaAltura = "m";
            posicionAltura = i;
            break;
        }
    }
    if(posicionAltura == string::npos){
        cout<<"No ingresó una unidad de medida de altura valida."<<endl;
        return 1;
    }
    pesoMagnitud = stod(peso.substr(0, posicionPeso));//stod = string a double
    alturaMagnitud = stod(altura.substr(0, posicionAltura));

    if(unidadDeMedidaPeso == "lb" && unidadDeMedidaAltura == "in"){
        bmi =(pesoMagnitud * 703)/(alturaMagnitud * alturaMagnitud);
    }else if(unidadDeMedidaPeso == "kg" && unidadDeMedidaAltura == "m"){
        bmi =(pesoMagnitud)/(alturaMagnitud * alturaMagnitud);
    }else{
        cout<<"No ingresó unidades de medida compatibles."<<endl;
        return 1;
    }
    cout<<"Su indice de masa corporal es: "<<bmi<<endl;
    if(bmi<18.5){
        cout<<"Tiene bajo peso."<<endl;
    }else if(bmi >= 18.5 && bmi <= 24.9){
        cout<<"Tiene un peso normal."<<endl;
    }else if(29.9 < bmi < 25){
        cout<<"Tiene sobrepeso."<<endl;
    }else if(bmi >= 30){
        cout<<"Tiene obesidad."<<endl;
    }
    return 0;
}

