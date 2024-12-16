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
    printf("Default year: %d\n", clock.get_year());

    ClockOfTheLongNow clock2(2021);
    printf("Year: %d\n", clock2.get_year());

    ClockOfTheLongNow clock3{2023};
    printf("Year: %d\n", clock3.get_year());
}