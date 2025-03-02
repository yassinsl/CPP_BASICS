#include <iostream>

class yassin
{
  public:
    int a;
    void display(void)
    {
        std::cout << "hello world" << std::endl;
    }
};

int main()
{
    yassin ys;
    ys.a = 10;
    std::cout << ys.a << std::endl;
    std::cout << "Size of yassin class: " << sizeof(yassin) << " bytes" << std::endl;
    return 0;
}

