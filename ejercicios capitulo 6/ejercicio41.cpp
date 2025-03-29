#include <iostream>

int maximoComunDivisor(int x, int y) {
    if (y == 0)
        return x;
    return maximoComunDivisor(y, x % y);
}

int main() {
    int x, y;
    std::cout << "Ingrese dos numeros: ";
    std::cin >> x >> y;

    if (x < y) std::swap(x, y);

    std::cout << "El MCD de " << x << " y " << y << " es: " << maximoComunDivisor(x, y) << std::endl;
    return 0;
}

