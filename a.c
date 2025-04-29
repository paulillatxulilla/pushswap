/* #include "push_swap.h"
#include <stdio.h>

void change_dos(int **num)
{
    int b = 12;

    *num = &b;
    printf("b ptr: %p\n", &b);

}

void change_one(int *num)
{
    *num = 12;
    num = NULL;
  printf("NULL ptr: %p\n", num);

}
int main (void)
{
  int *n;
  int num = 10;
int **n3;

  n = &num;
  n3 = &n;
  printf("ANTES ptr: %p\n", n);

//   change_one(n);
//   printf("ONE: %d\n", *n);
//   printf("DESPUES ptr: %p\n", n);
  change_dos(&n);
  printf("DOS: %d\n", *n);
  printf("DOS ptr: %p\n", n);

    
} */