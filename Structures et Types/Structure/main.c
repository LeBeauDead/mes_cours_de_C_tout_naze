#include <stdio.h>
#include <string.h>
/*
    (*monPointeur).un_champ = X;
    monPointeur->un_champ = X;
*/

typedef struct Player{
  signed char username[256];
  int hp;
  int mp;
}Joueur;
/*--------------------------------------------*/
void create_player(Joueur *p){
  strcpy(p->username, "ScrewBolt");
  p->hp = 100;
  p->mp = 80;
}
/*--------------------------------------------*/
int main(void) {
  Joueur p1 = {"", 0, 0};

  create_player(&p1);
  printf("Nom du Joueur : %s\n", p1.username );
  printf("PV: %d | PM: %d\n", p1.hp,p1.mp );

  return 0;
}
