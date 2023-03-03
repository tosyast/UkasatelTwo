#include <iostream>
#include <vector>
#include <algorithm> //для функций сортировки
#include <random> //для генерации случайных чисел
#include <windows.h>
#include <string>
using namespace std;

//функция для вывода вектора на экран
void printVector(vector<int> vec) {
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << " ";
    }
    cout << endl;
}

//функция для сортировки вектора по возрастанию
void sortAscending(vector<int>& vec) {
    sort(vec.begin(), vec.end());
}

//функция для сортировки вектора по убыванию
void sortDescending(vector<int>& vec) {
    sort(vec.begin(), vec.end(), greater<int>());
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int size;
    cout << "Введите размер вектора: ";
    cin >> size;

    vector<int> vec(size);

    //генерация случайных чисел для заполнения вектора
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(1, 100);

    for (int i = 0; i < size; i++) {
        vec[i] = dis(gen);
    }

    cout << "Сгеренированный вектор: ";
    printVector(vec);
    cout << "\n";
    sortAscending(vec);
    cout << "Сортировка по возрастанию: " ;
    printVector(vec);
    cout << "\n";
    cout << "Сортировка по убыванию: ";
    sortDescending(vec);
    printVector(vec);

    return 0;
}
