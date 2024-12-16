#include <iostream>

int main() {
    int *p;
    std::cout << p << std::endl;

    int *pint{};
    double *pdouble{};
    std::cout << "*pint size: " << sizeof(pint) << std::endl;
    std::cout << "*pdouble size: " << sizeof(pdouble) << std::endl;

    int number{25};
    int *pnumber{&number}; // указатель pnumber хранит адрес переменной number
    std::cout << "number addr: " << pnumber << std::endl;
    std::cout << "pnumber addr: " << &number << std::endl;
    std::cout << "number value: " << *pnumber << std::endl;

    int n1{25};
    int *pn1{&n1}; // указатель pn1 хранит адрес переменной n1
    int n2{*pn1}; // n2 получает значение, которое хранится по адресу в pn1
    std::cout << "n2 = " << n2 << std::endl; // n2=25

    int a{10};
    int *pa{&a}; // хранит адрес переменной a
    std::cout << "*pa = " << *pa << std::endl; // *pa = 10
    std::cout << "a = " << a << std::endl; // a = 10
    *pa = 25; // меняем значение по адресу в указателе
    std::cout << "*pa = " << *pa << std::endl; // *pa = 25
    std::cout << "a = " << a << std::endl; // a = 25

    int a1{10};
    int b1{2};
    int *pa1{&a1}; // указатель на переменную a
    int *pb1{&b1}; // указатель на переменную b
    std::cout << "pa1: address=" << pa1 << "\t value=" << *pa1 << std::endl;
    std::cout << "pb1: address=" << pb1 << "\t value=" << *pb1 << std::endl;
    pa1 = pb1; // теперь указатель pa хранит адрес переменной b
    std::cout << "pa1: address=" << pa1 << "\t value=" << *pa1 << std::endl;
    *pa1 = 125; // меняем значение по адресу в указателе pa
    std::cout << "b1 value=" << b1 << std::endl;

    int a2{10};
    int b2{6};
    int *p2{}; // указатель
    int *&pRef{p2}; // ссылка на указатель
    pRef = &a2; // через ссылку указателю p присваивается адрес переменной a
    std::cout << "p2 value=" << *p2 << std::endl; // 10
    *pRef = 70; // изменяем значение по адресу, на который указывает указатель
    std::cout << "a2 value=" << a2 << std::endl; // 70
    pRef = &b2; // изменяем адрес, на который указывает указатель
    std::cout << "p2 value=" << *p2 << std::endl; // 6

    int a3{10};
    int *pa3{&a3};
    std::cout << "address of pointer=" << &pa3 << std::endl; // адрес указателя
    // адрес, который хранится в указателе - адрес переменной a
    std::cout << "address stored in pointer=" << pa3 << std::endl;
    // значение по адресу в указателе - значение переменной a
    std::cout << "value on pointer=" << *pa3 << std::endl;

    int a4{10};
    int b4{20};
    int *pa4{&a4};
    int *pb4{&b4};

    if (pa4 > pb4)
        std::cout << "pa4 (" << pa4 << ") is greater than pb4 (" << pb4 << ")" << std::endl;
    else
        std::cout << "pa4 (" << pa << ") is less or equal pb4 (" << pb4 << ")" << std::endl;

    char c5{'N'};
    char *pc5{&c5}; // указатель на символ
    int *pd5{(int *) pc5}; // указатель на int
    void *pv5{(void *) pc5}; // указатель на void
    std::cout << "pv5=" << pv5 << std::endl;
    std::cout << "pd5=" << pd5 << std::endl;

    int n6{10};
    int *pn6{&n6};
    std::cout << "address=" << pn6 << "\tvalue=" << *pn6 << std::endl;
    pn6++;
    std::cout << "address=" << pn6 << "\tvalue=" << *pn6 << std::endl;
    pn6--;
    std::cout << "address=" << pn6 << "\tvalue=" << *pn6 << std::endl;

    double d7{10.6};
    double *pd7{&d7};
    std::cout << "Pointer pd7: address:" << pd7 << std::endl;
    pd7++; // увеличение адреса на 8 байт - размер double
    std::cout << "Pointer pd7: address:" << pd7 << std::endl;
    short n7{5};
    short *pn7{&n7};
    std::cout << "Pointer pn: address:" << pn7 << std::endl;
    pn7++; // увеличение адреса на 2 байта - размер short
    std::cout << "Pointer pn: address:" << pn7 << std::endl;

    double d8{10.6};
    double *pd8{&d8};
    std::cout << "Pointer pd8: address:" << pd8 << std::endl;
    pd8 = pd8 + 2; // увеличение адреса на 16 байт - 2 объекта double
    std::cout << "Pointer pd: address:" << pd8 << std::endl;
    short n8{5};
    short *pn8{&n8};
    std::cout << "Pointer pn8: address:" << pn8 << std::endl;
    pn8 = pn8 - 3; // уменьшение адреса на 6 байт - размер 3 объектов short
    std::cout << "Pointer pn8: address:" << pn8 << std::endl;

    int a9{10};
    int b9{23};
    int *pa9{&a9};
    int *pb9{&b9};
    auto ab9{pa9 - pb9};
    std::cout << "pa9: " << pa9 << std::endl;
    std::cout << "pb9: " << pb9 << std::endl;
    std::cout << "ab9: " << ab9 << std::endl;
}
