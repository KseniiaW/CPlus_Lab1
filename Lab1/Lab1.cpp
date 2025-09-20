#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    system("chcp 1251");

    cout << "Введите координаты вершин пятиугольника (x y):" << endl;

    double x[5], y[5];
    for (int i = 0; i < 5; i++) {
        cout << "Вершина " << i + 1 << ": ";
        cin >> x[i] >> y[i];
    }

    // Формула площади Гаусса
    double area = 0;
    for (int i = 0; i < 5; i++) {
        int j = (i + 1) % 5;
        area += (x[i] * y[j] - x[j] * y[i]);
    }
    area = abs(area) / 2.0;

    cout << fixed << setprecision(2);
    cout << "\nРезультаты расчета:" << endl;
    cout << "Площадь пятиугольника: " << area << endl;

    cout << "\nВведенные координаты:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Вершина " << i + 1 << ": (" << x[i] << ", " << y[i] << ")" << endl;
    }

    return 0;
}