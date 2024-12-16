#include <cstdio>

struct Taxonomist
{
    Taxonomist()
    {
        printf("no argument \n");
    }
    Taxonomist(char c)
    {
        printf("char: %c\n", c);
    }
    Taxonomist(int i)
    {
        printf("int: %d\n", i);
    }
    Taxonomist(float f)
    {
        printf("float: %f\n", f);
    }
};

int main()
{
    Taxonomist t1;
    Taxonomist t2{'c'};
    Taxonomist t3{65537};
    Taxonomist t4{3.14159f};
    Taxonomist t5('g');
    Taxonomist t6 = {'l'};
    Taxonomist t7{};
    Taxonomist t8();
}