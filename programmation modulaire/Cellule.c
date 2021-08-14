#include <stdio.h>
#include "Map.h"

#define DT 5

/*int death_timer(int DT){
  DT = 5;
  return DT;
}*/

int cellule(void) {

  int faire=0;
  int mur=0;
  int time=0;
  int clee=0;
  int win=0;
  int lit=0;

  printf("tu te reveille dans une celule, tu a froid, tu ne te souvien pas comment tu es arriver la\n ");

  while (win == 0){

    printf("tu es devant le lit \n 1:attendre \n 2:inspecter porte \n 3:inspecter mur\n");
    scanf("%d", &faire);

    if(faire == 1){
      time++;
      if(time == DT){
        printf("tu meurs de faim\nPerdu!\n\n");
        return 0;
      }
      else{
        printf("tu attend plusieur heurs, il ne se passe rien.\n\n");
        faire = 0;
      }
    }

    else if(faire == 2){
      if(clee >0){
        printf("Tu ouvres la porte est sort de la cellule\n\n");
        win = 1;
      }else{
        printf("La porte est fermer\n\n");
        faire = 0;
      }
    }else if(faire == 3){
      lit = 1;
      while (lit == 1) {
        printf("Il y a un trou dans le mur\n 1:fouiller le trou\n 2:retourner au lit\n");
        scanf("%d",&mur);
        if(mur == 1){
          printf("tu trouve une clee\n");
          clee=1;
          faire=0;
          lit=0;
        }else if(mur == 2){
          faire=0;
          lit=0;
        }else{
          printf("Erreur!\n");
        }
      }

    }else{
      printf("Erreur!\n");
    }

  }
return 0;
}
