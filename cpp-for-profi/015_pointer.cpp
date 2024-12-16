#include <cstdio>

int main()
{
    int get{};
    printf("get %d\n", get);

    int *get_add = &get;
    printf("get_add %p\n", get_add);

    *get_add = 42;
    printf("get %d\n", get);

    int gettysburg{};
    int *gettysburg_address = &gettysburg;
    printf("Value at gettysburg_address: %d\n", *gettysburg_address);
    printf("Gettysburg Address: %p\n", gettysburg_address);

    *gettysburg_address = 17325;
    printf("Value at gettysburg_address: %d\n", *gettysburg_address);
    printf("Gettysburg Address: %p\n", gettysburg_address);
}