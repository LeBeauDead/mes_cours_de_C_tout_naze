#include <stdio.h>

int competence(int * X, int * Y, int * Z);

 int main(){
   int force = 0;
   int intel = 0;
   int agil  = 0;

   competence(&force, &intel, &agil);

   printf(" Votre Force: %d\n Votre Inteligence: %d\n Votre Agilite: %d\n",force ,intel ,agil);
 }

int competence(int * X, int * Y, int * Z){

  int lock = 0;

  while (lock==0) {

    printf("combien de Force ?\n");
    scanf("%d",X );
    printf("combien de Inteligence ?\n");
    scanf("%d",Y );
    printf("combien de Agilite ?\n");
    scanf("%d",Z );

    if (*X>10 || *Y>10 || *Z>10 || *X<1 || *Y<1 || *Z<1){
      printf("ERREUR\n");
    }else{
      lock++;
    }
  }
}
