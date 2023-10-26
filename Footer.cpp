#include <iostream>
int width,mark,a;

int main()
{
    setlocale(LC_ALL, "Russian");

    std::cout << "Введите общую длину колонтитула:";
    std::cin >> width;
    std::cout << "Кол-во восклицательных знаков: ";
    std::cin >> mark;

    if (width >= mark) {
        for (int a = 0; a < (width - mark) / 2; a++) {
            std::cout << " - ";
        }
        for (int a = 0; a < mark; a++) {
            std::cout << " ! ";
        }
        for (int a = 0; a < (width - mark) / 2 + (width % 2 != 0); a++) {
            std::cout << " - ";
        }
    }
}
