#include <iostream>
#include <array>
class Class{
  public:
    std::array<int, 5>yassin = {1, 2, 4, 5};
};
int main(void)
{
    Class yassin;

    for(int num:yassin.yassin)
          std::cout << num << std::endl;
}


