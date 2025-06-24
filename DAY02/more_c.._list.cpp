#include <iostream>
#include <array>

using namespace std;

class Class{
    private:
        array<int, 5>arr;
    public:
        Class(int a, int b, int c, int d, int e = 33) : arr{a, b, c, d, e}{} 
        void print_arr()
        {
          for(int i : this->arr)
                cout << i << " ";
        cout <<endl;
        }
};
int main(void)
{
    Class obj(4 , 1, 4, 4, 553634);
    obj.print_arr();
}
