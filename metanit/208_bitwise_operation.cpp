#include <iostream>

int main() {
    unsigned int number{0b0000'1100}; // 12
    std::cout << number << std::endl;

    unsigned int a = 2 << 2; // 10  на два разрядов влево = 1000 - 8
    unsigned int b = 16 >> 3; // 10000 на три разряда вправо = 10 - 2

    unsigned int x{3};
    unsigned int number1{7};
    unsigned int result{number1 << x}; // 7 * 2*2*2 = 56
    std::cout << "Result: " << result << std::endl;
    number1 = 26;
    result = number1 >> x; // 26 / (2*2*2) = 3
    std::cout << "Result: " << result << std::endl;

    int a1 = 5 | 2; // 101 | 010 = 111  - 7
    int b1 = 6 & 2; // 110 & 010 = 10  - 2
    int c1 = 5 ^ 2; // 101 ^ 010 = 111 - 7
    int d1 = ~9; // -10

    int value1{3}; // 0b0000'0011
    int value2{2}; // 0b0000'0010
    int value3{1}; // 0b0000'0001
    int result1{0b0000'0000};
    // сохраняем в result значения из value1
    result1 = result1 | value1; // 0b0000'0011
    // сдвигаем разряды в result на 2 разряда влево
    result1 = result1 << 2; // 0b0000'1100
    // сохраняем в result значения из value2
    result1 = result1 | value2; // 0b0000'1110
    // сдвигаем разряды в result на 2 разряда влево
    result1 = result1 << 2; // 0b0011'1000
    // сохраняем в result значения из value3
    result1 = result1 | value3; // 0b0011'1001
    std::cout << result1 << std::endl; // 57

    int result2{0b0011'1001};
    // обратное получение данных
    int newValue3 = result2 & 0b000'0011;
    // сдвигаем данные на 2 разряда вправо
    result2 = result2 >> 2;
    int newValue2 = result2 & 0b000'0011;
    // сдвигаем данные на 2 разряда вправо
    result2 = result2 >> 2;
    int newValue1 = result2 & 0b000'0011;
    std::cout << newValue1 << std::endl; // 3
    std::cout << newValue2 << std::endl; // 2
    std::cout << newValue3 << std::endl; // 1

    int result3{0b0011'1001};
    int recreatedValue1 = (result3 & 0b0011'0000) >> 4;
    std::cout << recreatedValue1 << std::endl;

    int value4{3}; // 0b0000'0011
    int value5{2}; // 0b0000'0010
    int value6{1}; // 0b0000'0001
    int result4{0b0000'0000};
    // сохраняем в result значения из value1
    result4 = result4 | (value4 << 4);
    // сохраняем в result значения из value2
    result4 = result4 | (value5 << 2);
    // сохраняем в result значения из value3
    result4 = result4 | value6; // 0b0011'1001
    std::cout << result4 << std::endl; // 57

    int a2{}, b2{}, c2{};
    a2 = b2 = c2 = 34;

    int a3{5};
    a3 += 10; // 15
    a3 -= 3; // 12
    a3 *= 2; // 24
    a3 /= 6; // 4
    a3 <<= 4; // 64
    a3 >>= 2; // 16
    std::cout << "a3 = " << a3 << std::endl;
}
