#include <cstdio>
struct College
{
    char name[256];
};

void print_name(College *college_ptr)
{
    printf("%s College\n", college_ptr->name);
}

void print_names(College *colleges, size_t n_colleges)
{
    for (size_t i = 0; i < n_colleges; i++)
    {
        printf("%s College\n", colleges[i].name);
    }
}
int main()
{

    int key_to_the_universe[]{3, 6, 9};
    int *key_ptr = key_to_the_universe;

    printf("Address of key_to_the_universe: %p\n", key_to_the_universe);
    College oxford[] = {"Magdalen", "Nuffield", "Kellogg"};
    print_name(oxford);

    print_names(oxford, sizeof(oxford) / sizeof(College));

    College *third_college_ptr1 = &oxford[2];
    College *third_college_ptr2 = oxford + 2;
}