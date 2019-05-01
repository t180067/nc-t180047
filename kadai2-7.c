#include<stdio.h>
	
 long long fac (int n)
{
  return (n == 0) ? 1 : n*fac(n-1);
}

 int main ()
{
  int i;
  for (i = 1; i <= 16; i++) 
    printf("%2d! = %lld\n", i, fac(i));
  
}
