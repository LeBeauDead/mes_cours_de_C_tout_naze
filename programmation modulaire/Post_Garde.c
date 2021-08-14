#include <stdio.h>
#include "Map.h"

int Post_de_garde(void){

    int faire_un=0;
    int faire_deux=0;
    int loop_one=0;
    int act=0;
    int win=0;

    while (win==0) {
      printf("tu avance lentement le long du couloir et tombe face a une porte entre-ouvert\n 1:regarder\n 2:entrer\n");
      scanf("%d",&faire_un);
      if (faire_un==1) {
        faire_un=0;
        while (loop_one==0) {
        printf("Tu vois une garde assis sur une chaise devant des ecrans il te tourne le dos et une porte se trouve a coté de lui\n 1:se faufiler\n 2:l'assomer\n");
        scanf("%d",&faire_deux);
          if(faire_deux==1){
            printf("oui1\n");
            win++;
            loop_one=1;
          }else if(faire_deux==2){
            printf("oui2\n");
            win++;
            loop_one=1;
          }else{
            printf("Erreur!\n");
          }
        }
      }else if (faire_un==2) {
        printf("Tu entre dans la piece Un garde t'y attend ! Il te tire dessus !\n");
        printf("Perdu!\n");
        return 0;
      }else{
        faire_un=0;
        printf("Erreur!\n");
      }
    }
}
