#include <stdio.h>

int f(int x)
{
  return x*x;
}

int main ()
{
  int x, y;

  for (x = -8; x <= 8 ; x++) {
    for (y = 0; y < f(x) ; y++) {
      printf("*");
    }
    printf("\n");
  }
}
