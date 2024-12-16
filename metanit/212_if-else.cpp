#include <iostream>

int main() {
    int a{8};
    if (a == 8) {
        std::cout << "a == 8" << std::endl;
    }
    int n{21};
    if (n > 22) {
        std::cout << "n > 22" << std::endl;
    } else if (n < 22) {
        std::cout << "n < 22" << std::endl;
    } else {
        std::cout << "n == 22" << std::endl;
    }
    int a1{8};
    // a1 = true
    if (a1) std::cout << "a1 = true" << std::endl;
    else std::cout << "a1 = false" << std::endl;

    int b1{};
    // b1 = false
    if (b1) std::cout << "b1 = true" << std::endl;
    else std::cout << "b1= false" << std::endl;

    int a2{5};
    int b2{3};

    if (int c2{a2 - b2}; a2 > b2) {
        std::cout << "a2=" << a2 << "; c2=" << c2 << std::endl;
    } else {
        std::cout << "b2=" << b2 << "; c2=" << c2 << std::endl;
    }
    if (int rem{a2 % b2}; rem == 0) {
        std::cout << "a2 divisible by b2" << std::endl;
    } else {
        std::cout << "remaining of a2 / b2 = " << rem << std::endl;
    }
    int c = a2 > b2 ? a2 - b2 : a2 + b2;
    a2 > b2 ? std::cout << a2 - b2 : std::cout << a2 + b2;
    std::cout << (a2 < b2 ? "a2 is less than b2" : (a2 == b2 ? "a2 is equal to b2" : "a2 is greater than b2"));
}
