#include <stdio.h>

enum level
{
  LOW = 1,
  MEDIUM = 2, 
  HIGHT = 3

};

int main()
{

  enum level varis = MEDIUM;

  switch (varis)
  {
    case 1:
    printf("LOW LEVEL");
    break;

    case 2:
    printf("MEDIUM LEVEL");
    break;

    case 3:
    printf("HIGH LEVEL");
    break;
  }
  
  return 0;
}