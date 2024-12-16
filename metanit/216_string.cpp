#include <iostream>
#include <string>
 
int main()
{
    std::string message1 {"Hello, World!"};
    std::string message2 = "Hello, World!";
    std::string message3("Hello, World!");

    std::string hello{"Hello, World!"};
    std::string message4 {hello};

    char c {hello[1]};
    hello[0]='M';
    std::cout << hello << std::endl;

    std::string message {"Hello, World!"};
    std::cout << "Message: " << message << std::endl;

    std::string name;
    std::cout << "Input your name: ";
    std::cin >> name;
    std::cout << "Your name: " << name << std::endl;

    std::cout << "Input your name: ";
    getline(std::cin, name);
    std::cout << "Your name: " << name << std::endl;
}