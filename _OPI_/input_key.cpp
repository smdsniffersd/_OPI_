#include <iostream>
#include <vector>
#include <utility>
#include "input_key.h"

using std::pair;
using std::vector;
using std::cout;
using std::cin;
using std::endl;

/// <summary>
/// Считывает точки из консоли.
/// </summary>
/// <returns>Возвращает вектор пар целых чисел, представляющих координаты точек.</returns>
vector<pair<int, int>> input_from_console() {
    int n;
    cout << "Введите общее количество точек:" << endl;
    cin >> n;
    vector<pair<int, int>> points;
    points.reserve(n); // Выделение памяти заранее, чтобы избежать лишних копирований
    for (int i = 0; i < n; i++) {
        int x, y;
        cout << "Введите x-координату для точки " << i + 1 << ": ";
        cin >> x;
        cout << "Введите y-координату для точки " << i + 1 << ": ";
        cin >> y;
        points.emplace_back(x, y); // Добавляем точку в конец вектора
    }
    return points;
}