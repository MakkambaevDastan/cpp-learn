#include <iostream>

int main()
{
    int a {8};
    int b {11};
    bool c {a == b};    // false
    bool d {a != b};    // true
    std::cout << "c = " << c << std::endl;  // c = 0
    std::cout << "d = " << d << std::endl;  // d = 1

    int a1 {8};
    int b1 {11};
    bool c1 {a1 == b1};    // false
    bool d1 {a1 != b1};    // true
    std::cout << "c1 = " << std::boolalpha << c1 << std::endl;  // c = false
    std::cout << "d1 = " << std::boolalpha << d1 << std::endl;  // d = true

    int a2 {5};
    int b2 {8};
    bool result1 = a2 ==5 && b2 > 8;  // если и a ==5, и b > 8
    bool result2 = a2 ==5 || b2 > 8;  // если или a ==5, или b > 8 (или оба варианты истины)
    bool result3 = a2 ==5 ^ b2 > 8;  // если оба операнда возвращают разные значения

    std::cout << "(a2 ==5 && b2 > 8) - " << std::boolalpha << result1 << std::endl;
    std::cout << "(a2 ==5 || b2 > 8) - " << std::boolalpha << result2 << std::endl;
    std::cout << "(a2 ==5 ^ b2 > 8) - " << std::boolalpha << result3 << std::endl;
}