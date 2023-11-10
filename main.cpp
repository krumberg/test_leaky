#include <stdio.h>

#include "p.h"

int main()
{
  int* p = make_p();

  printf("p=%lf\n", p);

  int *p2 = new int;
  printf("p2=%p\n", p2);
}
