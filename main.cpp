// Командный проект. Лабораторная работа № 2.
// Техлид: Пичугин Д. И., вариант 86
// Участник: Burbah, вариант 66
#include <iostream>
using namespace std;

// Свои функции подключайте здесь после появления файлов:
// #include "pichugin.h"
// #include "burbah.h"

int main() {
    int choice;

    do {
        cout << "\n=== Командный проект ===\n";
        cout << "1. (Пичугин) Рубли в валюту\n";
        cout << "2. (Пичугин) Валюта в рубли\n";
        cout << "3. (Burbah) Килограммы в фунты\n";
        cout << "4. (Burbah) Фунты в килограммы\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(10000, '\n');
            cout << "Ошибка ввода: нужно целое число.\n";
            choice = -1;
            continue;
        }

        switch (choice) {
            case 1:
                cout << "Пункт 1 пока не подключён. Дождитесь pichugin.cpp\n";
                break;
            case 2:
                cout << "Пункт 2 пока не подключён. Дождитесь pichugin.cpp\n";
                break;
            case 3:
                cout << "Пункт 3 пока не подключён. Дождитесь burbah.cpp\n";
                break;
            case 4:
                cout << "Пункт 4 пока не подключён. Дождитесь burbah.cpp\n";
                break;
            case 0:
                cout << "Работа завершена.\n";
                break;
            default:
                cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);

    return 0;
}
