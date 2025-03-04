#include <iostream>

int main()
{
    int a;

    std::cout << "please enter a number (0-9): ";
    std::cin >> a;
    if(a >= 0 and a <= 9)
        std::cout << "hello bro" << std::endl;
    return 0;
}
