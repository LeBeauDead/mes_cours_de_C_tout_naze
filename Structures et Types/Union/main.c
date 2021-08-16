#include <stdio.h>

union Nombre{
  int entier;
  fload decimal;
}

int main(void) {
  union Nombre nb1;

  nb1.entier = 3;
  nb1.decimal = 3.14;

  return 0;
}
