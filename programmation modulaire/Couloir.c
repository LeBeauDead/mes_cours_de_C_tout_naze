#include <stdio.h>
#include "Map.h"

int couloir(void) {
  int win = 0;
  int faire = 0;

  printf("Apres la porte un long couloir se trouve devant toi, au bout de celui-ci tu decouvre une intersection\n 1:Prendre a gauche\n 2:Prendre a droite\n");
  scanf("%d",&faire);
  while (win == 0) {
    if (faire == 1) {
      printf("tu prends a gauche\n");
      win = 1;
    }else if (faire == 2) {
      printf("tu prends a droite\n");
      win = 1;
    }else{
      printf("Erreur\n");
    }
  }
  return 0;
}
