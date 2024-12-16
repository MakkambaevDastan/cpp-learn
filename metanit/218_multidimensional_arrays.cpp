#include <iostream>

int main() {
    int nums[3][2]
    {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    // получаем значение элемента
    int n = nums[1][0]; // вторая строка, первый столбец
    std::cout << "n =" << n << std::endl; // n = 3

    std::cout << "nums[2][1] = " << nums[2][1] << std::endl; // nums[2][1] = 6
    // изменяем значение элемента
    nums[2][1] = 123; // третья строка, второй столбец
    std::cout << "nums[2][1] = " << nums[2][1] << std::endl; // nums[2][1] = 123

    const int rows = 3, columns = 2;
    int numbers[rows][columns]{{1, 2}, {3, 4}, {5, 6}};
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cout << numbers[i][j] << "\t";
        }
        std::cout << std::endl;
    }

    for (auto &subnumbers: numbers) {
        for (int number: subnumbers) {
            std::cout << number << "\t";
        }
        std::cout << std::endl;
    }
}
