#include <iostream>

using namespace std;

int misterio(int, int);

int main() {
    int x = 0;
    int y = 0;

    cout << "Escriba dos enteros: ";
    cin >> x >> y;
    cout << "El resultado es " << misterio(x, y) << endl;

    return 0;
}

int misterio(int a, int b) {
    if (b == 0)
        return 0;
    else if (b > 0)
        return a + misterio(a, b - 1);
    else
        return -misterio(a, -b);
}

