#include <iostream>

int main() {
    char hello1[]{'h', 'e', 'l', 'l', 'o'};
    char hello2[]{'h', 'e', 'l', 'l', 'o', '\0'};
    char hello3[]{"hello"};

    std::cout << hello1 << std::endl;
    std::cout << hello2 << std::endl;
    std::cout << hello3 << std::endl;

    const int max_length{50}; // максимальная длина строки (включая нулевой байт \0)
    char langs[][max_length]
    {
        "C++", "C#", "Python", "Java",
        "Kotlin", "Go", "Dart", "PHP"
    };
    std::cout << langs[0] << std::endl; // C++
    std::cout << langs[1] << std::endl; // C#
    std::cout << langs[2] << std::endl; // Python

    for (auto lang: langs) {
        std::cout << lang << std::endl;
    }

    // максимальное количиство считываемых символов
    char text[max_length]{}; // массив для считывания строки
    std::cout << "Enter some text:" << std::endl;
    // считываем символы, включая пробелы
    std::cin.getline(text, max_length);
    std::cout << "You entered:\n" << text << std::endl;

    std::cout << "Enter some text:" << std::endl;
    std::cin.getline(text, max_length, '!');
    std::cout << "You entered:\n" << text << std::endl;
}
