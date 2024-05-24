#include <iostream>
#include <fstream>
#include <vector>
#include <utility>

using std::vector;
using std::pair;
using std::ifstream;
using std::cout;
using std::cerr;

vector<pair<int, int>> input_from_txt() {
    vector<pair<int, int>> points;
    ifstream file("numbers.txt");
    if (!file) {
        cerr << "Не удалось открыть текстовый файл" << std::endl;
        return points;
    }

    int x, y;
    while (file >> x >> y) {
        points.push_back({ x, y });
    }
    file.close();

    return points;
}
