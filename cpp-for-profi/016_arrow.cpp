#include <cstdio>

struct ClockOfTheLongNow
{
    ClockOfTheLongNow()
    {
        year = 2019;
    }
    ClockOfTheLongNow(int year_in)
    {
        if (!set_year(year_in))
        {
            year = 2019;
        }
    }
    void add_year()
    {
        year++;
    }
    bool set_year(int new_year)
    {
        if (new_year < 2019)
            return false;
        year = new_year;
        return true;
    }
    int get_year()
    {
        return year;
    }

private:
    int year;
};

int main()
{
    ClockOfTheLongNow clock;
    ClockOfTheLongNow *clock_pointer = &clock;
    clock_pointer->set_year(2020);
    printf("Address of clock: %p\n", clock_pointer);
    printf("Value of clock year: %d\n", clock_pointer->get_year());
    printf("Value of clock year: %d\n", (*clock_pointer).get_year());
}