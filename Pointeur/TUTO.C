#include <stdio.h>

int main(int argc, char const *argv[]) {
  int a = 10;
  int * pa = &a;

  printf("a = %d (adresse : %p)\n",a,pa );
  printf("=> %p\n", pa);
  printf("La valeur stocker a l'adresse %p est %d\n",pa,*pa);

  return 0;
}
