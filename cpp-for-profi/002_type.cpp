#include <cstddef>
#include <cstdio>

void taunt()
{
    printf("Hey, laser lips, your mama was a snow blower.");
}

int main()
{
    unsigned short a = 0b10101010;
    printf("%hu\n", a);
    int b = 0123;
    printf("%d\n", b);
    unsigned long long d = 0xFFFFFFFFFFFFFFFF;
    printf("%llu\n", d);

    unsigned int s = 3669732608;
    printf("Yabba %x!\n", s);
    unsigned int c = 69;
    printf("There are %u,%o leaves here.\n", c, c);

    double an = 6.0221409e23;
    printf("Avogadro's Number: %le %lf %lg\n", an, an, an);
    float hp = 9.75;
    printf("Hogwarts' Platform: %e %f %g\n", hp, hp, hp);

    char x = 'M';
    wchar_t y = L'Z';
    printf("Windows binaries start with %c%lc.\n", x, y);

    bool b1 = true;
    bool b2 = false;
    printf("%d %d\n", b1, b2);

    printf(" 7 == 7: %d\n", 7 == 7);
    printf(" 7 != 7: %d\n", 7 != 7);
    printf("10 > 20: %d\n", 10 > 20);
    printf("10 >= 20: %d\n", 10 >= 20);
    printf("10 < 20: %d\n", 10 < 20);
    printf("20 <= 20: %d\n", 20 <= 20);

    bool t = true;
    bool f = false;
    printf("!true: %d\n", !t);
    printf("true && false: %d\n", t && f);
    printf("true &&!false: %d\n", t && !f);
    printf("true || false: %d\n", t || f);
    printf("false || false: %d\n", f || f);

    size_t size_c = sizeof(char);
    printf("char: %zu\n", size_c);
    size_t size_s = sizeof(short);
    printf("short: %zu\n", size_s);
    size_t size_i = sizeof(int);
    printf("int: %zu\n", size_i);
    size_t size_l = sizeof(long);
    printf("long: %zu\n", size_l);
    size_t size_ll = sizeof(long long);
    printf("long long: %zu\n", size_ll);

    taunt();
}
