#include <iostream>

int main() {
    bool isAlive(true);
    bool isDead(false);
    std::cout << "isAlive: " << isAlive << std::endl;
    std::cout << "isDead: " << isDead << std::endl;

    signed char num1{-64};
    unsigned char num2{64};
    short num3{-88};
    unsigned short num4{88};
    int num5{-1024};
    unsigned int num6{1024};
    long num7{-2048};
    unsigned long num8{2048};
    long long num9{-4096};
    unsigned long long num10{4096};
    std::cout << "num1 = " << num1 << std::endl;
    std::cout << "num2 = " << num2 << std::endl;
    std::cout << "num3 = " << num3 << std::endl;
    std::cout << "num4 = " << num4 << std::endl;
    std::cout << "num5 = " << num5 << std::endl;
    std::cout << "num6 = " << num6 << std::endl;
    std::cout << "num7 = " << num7 << std::endl;
    std::cout << "num8 = " << num8 << std::endl;
    std::cout << "num9 = " << num9 << std::endl;
    std::cout << "num10 = " << num10 << std::endl;

    int num{1'234'567'890};
    std::cout << "num = " << num << "\n"; // num = 1234567890

    // 0x or 0X число - шестнадцатеричное
    int num11{0x1A}; // 26 - в десятичной
    int num12{0xFF}; // 255 - в десятичной
    int num13{0xFFFFFF}; //16777215 - в десятичной

    // 0 число - восьмеричное, перед числом указывается ноль 0
    int num14{034}; // 26 - в десятичной
    int num15{0377}; // 255 - в десятичной

    // Бинарные литералы предваряются префиксом 0b или 0B:
    int num16{0b11010}; // 26 - в десятичной
    int num17{0b11111111}; // 255 - в десятичной

    // Все эти типы литералов также поддерживают суффиксы U/L/LL:
    unsigned int num18{0b11010U}; // 26 - в десятичной
    long num19{0377L}; // 255 - в десятичной
    unsigned long num20{0xFFFFFFULL}; //16777215 - в десятичной

    double dob1{10.45};
    double dob2{1}; // 1 - целочисленный литерал
    double dob3{1.}; //1. - литерал числа с плавающей точкой
    float flo1{10.56f}; // float
    long double dob4{10.56l}; // long double
    double dob5{5E3}; // 5E3  = 5000.0
    double dob6{2.5e-3}; // 2.5e-3  = 0.0025
    std::cout << "sizeof(dob6) =" << sizeof(dob6);

    char a1 {'A'}; // byte от -128 до 127, либо от 0 до 255
    char a2 {65};
    std::cout << "a1: " << a1 << std::endl;
    std::cout << "a2: " << a2 << std::endl;
    /*
     * wchar_t: представляет расширенный символ. На Windows занимает в памяти 2 байта (16 бит),
     * на Linux - 4 байта (32 бита). Может хранить любой значение из диапазона
     * от 0 до 65 535 (при 2 байтах), либо от 0 до 4 294 967 295 (для 4 байт)
     */
    wchar_t a3 {L'A'};
    wchar_t a4 {L'\x41'};
    char h = 'H';
    wchar_t i {L'i'};
    std::wcout << h << i <<'\n';
    /*
     * char8_t: представляет один символ в кодировке Unicode. Занимает в памяти 1 байт.
     * Может хранить любой значение из диапазона от 0 до 256
     */
    char8_t c{ u8'l' };
    /*
     * char16_t: представляет один символ в кодировке Unicode. Занимает в памяти 2 байта (16 бит).
     * Может хранить любой значение из диапазона от 0 до 65 535
     */
    char16_t d{ u'l' };
    /*
     * char32_t: представляет один символ в кодировке Unicode. Занимает в памяти 4 байта (32 бита).
     * Может хранить любой значение из диапазона от 0 до 4 294 967 295
     */
    char32_t e{ U'o' };

    auto number = 5;        // number имеет тип int
    auto sum {1234.56};    // sum имеет тип double
    auto distance {267UL};  // distance имеет тип unsigned lon
}
