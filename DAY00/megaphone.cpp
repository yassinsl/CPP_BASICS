#include <iostream>

int main(int ac, char **av)
{
  if(ac == 1)
  {
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    return(1);
  }
  int i = 1;

  while(av[i])
  {
    char *ptr = av[i];
    while(*ptr)
    {
        if(*ptr >= 'a' && *ptr <= 'z')
          *ptr-= 32;
        std::cout << *ptr;
        ptr++;
    }
    i++;
  }
  std::cout << std::endl;
  return(0);
}
