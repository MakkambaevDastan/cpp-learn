#include <cstdio>
#include <cstdint>

struct PodStruct
{
    uint64_t a;
    char b[256];
    bool c;
};

int main()
{
    int a = 0;
    int b{};
    int c = {};
    int d;

    int e = 42;
    int f{42};
    int g = {42};
    int h(42);

    PodStruct pod1{};
    PodStruct pod2 = {};
    PodStruct pod3 = {42, "Hello"};
    PodStruct pod4 = {42, "Hello", true};

    int array_1[]{1, 2, 3};
    int array_2[5]{};
    int array_3[5]{1, 2, 3};
    int array_4[5];
}