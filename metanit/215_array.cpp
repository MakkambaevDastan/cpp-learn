#include <iostream>

int main() {
    const int n = 4;
    int numbers[n]{1, 2, 3, 4};
    int first = numbers[0]; // получаем первый элемент
    std::cout << first << std::endl; // 1
    numbers[0] = 34; // изменяем значение элемента
    std::cout << numbers[0] << std::endl; // 34

    std::cout << "Length: " << sizeof(numbers) / sizeof(numbers[0]) << std::endl; // Length: 4

    for (int i = 0; i < n; i++) {
        std::cout << numbers[i] << std::endl;
    }

    int sum{};
    for (int i{}; i < std::size(numbers); sum += numbers[i++]);
    std::cout << "Sum: " << sum << std::endl; // Sum: 10

    for (int i: numbers) {
        std::cout << i << std::endl;
    }
}
