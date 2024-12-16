#include <iostream>
using std::cin;
using std::cout;
using std::endl;

using ullong = unsigned long long;
typedef unsigned long long ullong1;
int main()
{   
    int age;
    cout << "Input age: ";
    cin >> age;
    cout << "Your age: " << age << endl;

    ullong n {10234};
    std::cout << n << std::endl;

    ullong1 n1 {10234};
    std::cout << n1 << std::endl;
}