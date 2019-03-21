#include <stdio.h>

int main ()
{
  int n=0, f=1, i=1;
  printf("Digite um valor de n:");
  scanf(" %d", &n);

  /*  n=n+1;

  for (i=1;i<n;i++)
  {
      f = f*(n-i);
  }*/

  for(n; n > 0; n--){
    f = f*n;
  }

  printf("fatorial %d",f);



}
