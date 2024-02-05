#include <iostream>
#include <cmath>
#include <cassert>

using namespace std;

void getEquationCoefficients(double& a, double& b, double& c) {
    cout << "Введите коэффициенты уравнения ax + by + c = 0" << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
}

void checkIntersection(double a1, double b1, double c1, double a2, double b2, double c2) {
    assert(a1 != 0 && a2 != 0); // Проверка, что коэффициенты при x не равны нулю

    double determinant = a1 * b2 - a2 * b1;

    if (determinant != 0) {
        cout << "Прямые пересекаются" << endl;
    }
    else if (c1 == c2) {
        cout << "Прямые совпадают" << endl;
    }
    else {
        cout << "Прямые параллельны" << endl;
    }
}
int main() {
    setlocale(LC_ALL, "Ru");
    double a1, b1, c1, a2, b2, c2;

    try {
        getEquationCoefficients(a1, b1, c1);
        getEquationCoefficients(a2, b2, c2);
        checkIntersection(a1, b1, c1, a2, b2, c2);
    }
    catch (const exception& ex) {
        cout << "Ошибка: " << ex.what() << endl;
    }
    catch (...) {
        cout << "Ошибка: непредвиденная ошибка" << endl;
    }

    return 0;
}
