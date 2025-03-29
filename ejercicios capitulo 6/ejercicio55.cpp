#include <iostream>
#include <string>

enum class TipoCuenta {
    ahorros,
    cheques,
    inversion
};

std::string tipoCuentaToString(TipoCuenta tipo) {
    switch(tipo) {
        case TipoCuenta::ahorros: return "Ahorros";
        case TipoCuenta::cheques: return "Cheques";
        case TipoCuenta::inversion: return "Inversion";
        default: return "Desconocido";
    }
}

int main() {
    TipoCuenta cuenta1 = TipoCuenta::ahorros;
    TipoCuenta cuenta2 = TipoCuenta::cheques;
    TipoCuenta cuenta3 = TipoCuenta::inversion;

    std::cout << "Cuenta 1: " << tipoCuentaToString(cuenta1) << std::endl;
    std::cout << "Cuenta 2: " << tipoCuentaToString(cuenta2) << std::endl;
    std::cout << "Cuenta 3: " << tipoCuentaToString(cuenta3) << std::endl;

}
