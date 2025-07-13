#include <iostream>
#include <Windows.h>

#include "Counter.h"

int main()
{
	counter count;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    std::string answer;
    int initial_value = 1;

    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> answer;

    if (answer == "да") {
        std::cout << "Введите начальное значение счётчика: ";
        std::cin >> initial_value;
    }

    counter counter(initial_value);

    char command;
    while (true) {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;
        std::cin.ignore();

        switch (command) {
        case '+':
            counter.plus();
            break;
        case '-':
            counter.minus();
            break;
        case '=':
            std::cout << counter.getValue() << std::endl;
            break;
        case 'x':
            std::cout << "До свидания!" << std::endl;
            return 0;
        case 'х':
            std::cout << "До свидания!" << std::endl;
            return 0;
        default:
            std::cout << "Неизвестная команда!" << std::endl;
        }
    }

    return 0;
}
