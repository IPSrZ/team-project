// Командный проект. Лабораторная работа № 2.
// Техлид: Пичугин Д. И., вариант 86
// Участник: Burbah, вариант 66
#include <iostream>
using namespace std;

// Свои функции подключайте здесь после появления файлов:
 #include "pichugin.h"
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
            case 1: {
                double rub, rate;
                cout << "Введите сумму в рублях и курс (через пробел): ";
                if (!(cin >> rub >> rate)) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Ошибка ввода: нужны два числа через точку.\n";
                    break;
                }
                if (rate <= 0) {
                    cout << "Ошибка: курс должен быть больше 0.\n";
                } else {
                    cout << "Сумма в валюте = " << toForeign(rub, rate) << " ед. валюты\n";
                }
                break;
            }
            case 2: {
                double amount, rate;
                cout << "Введите сумму в валюте и курс (через пробел): ";
                if (!(cin >> amount >> rate)) {
                    cin.clear();
                    cin.ignore(10000, '\n');
                    cout << "Ошибка ввода: нужны два числа через точку.\n";
                    break;
                }
                if (rate <= 0) {
                    cout << "Ошибка: курс должен быть больше 0.\n";
                } else {
                    cout << "Сумма в рублях = " << toRub(amount, rate) << " руб.\n";
                }
                break;
            }
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
