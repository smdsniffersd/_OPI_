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
/// ��������� ����� �� �������.
/// </summary>
/// <returns>���������� ������ ��� ����� �����, �������������� ���������� �����.</returns>
vector<pair<int, int>> input_from_console() {
    int n;
    cout << "������� ����� ���������� �����:" << endl;
    cin >> n;
    vector<pair<int, int>> points;
    points.reserve(n); // ��������� ������ �������, ����� �������� ������ �����������
    for (int i = 0; i < n; i++) {
        int x, y;
        cout << "������� x-���������� ��� ����� " << i + 1 << ": ";
        cin >> x;
        cout << "������� y-���������� ��� ����� " << i + 1 << ": ";
        cin >> y;
        points.emplace_back(x, y); // ��������� ����� � ����� �������
    }
    return points;
}