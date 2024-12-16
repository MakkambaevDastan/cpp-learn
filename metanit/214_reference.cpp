#include <iostream>

int main() {
    int number{5};
    int &refNumber{number};
    std::cout << refNumber << std::endl; // 5
    refNumber = 20;
    std::cout << number << std::endl; // 20

    // const int number{5};
    // const int &refNumber{number};
    // std::cout << refNumber << std::endl; // 5
    // //refNumber = 20; изменять значение по ссылке нельзя

    // const int number {5};
    // int &refNumber {number}; // ошибка

    // int number{5};
    // const int &refNumber{number};
    // std::cout << refNumber << std::endl; // 5
    // //refNumber = 20; изменять значение по ссылке на константу нельзя
    // // но мы можем изменить саму переменную
    // number = 20;
    // std::cout << refNumber << std::endl; // 20

    int numbers[]{1, 2, 3, 4, 5};
    // меняем число на его квадрат
    for (int n: numbers) {
        n = n * n;
    }
    // смотрим результат
    for (int n: numbers) {
        std::cout << n << "\t";
    }
    std::cout << std::endl;

    for (int &n: numbers) {
        n = n * n;
    }
    // смотрим результат
    for (int n: numbers) {
        std::cout << n << "\t";
    }
    std::cout << std::endl;

    for (const int &n: numbers) {
        std::cout << n << "\t";
    }
    std::cout << std::endl;
}
