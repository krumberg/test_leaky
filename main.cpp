#include <stdio.h>

#include "p.h"

int main()
{
  int* p = make_p();

  printf("p=%p\n", p);
}
