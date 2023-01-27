#include <iostream>

using namespace std;


int main() {
    setlocale(LC_ALL, "Russian");
    double value = 0;
    string t;
    double x;
    double y;
    int select = 0;
    string entered;
    cout << "C++ Calculator.\n====================\nВведите первое число: ";

    while (!(cin >> x) || cin.get() != '\n')
    {
        cin.clear();
        cout << "Ошибка, повторите ввод: ";
        while (cin.get() != '\n');
    }
    cout << "Введите второе число: ";
    cout << t;
    while (!(cin >> y) || cin.get() != '\n')
    {
        cin.clear();
        cout << "Ошибка, повторите ввод:";
        while (cin.get() != '\n');
    }
    cout << "Выберите опреацию:\n1.Сложение\n2.Разность\n3.Умножение\n4.Деление\n5.Число Фиббоначи" << endl;

    while (select < 1 or select > 5) {
        
        while (!(cin >> select) || cin.get() != '\n')
        {
            cin.clear();
            cout << "Ошибка, повторите ввод:";
            while (cin.get() != '\n');
        }
    }
    cout << "====================\n";
    cout << "Результат: ";
    if (select == 1) {
        cout << x + y;
    }
    if (select == 2) {
        cout << x - y;
    }
    if (select == 3) {
        cout << x * y;
    }
    if (select == 4) {
        cout << x / y;
    }
    if (select == 5) {
        int num1 = 0;
        int num2 = 1;
        int num_temp;
        int num_next = 1;
        int n = x;
        if (n >= 1)
            cout << 0 << " ";
        if (n >= 2)
            cout << 1 << " ";
        for (int i = 0; i < n - 2; i++) {
            num_next = num1 + num2;
            cout << num_next << " ";
            num1 = num2;
            num2 = num_next;
        }
        cout << endl;
        return 0;
    }
}