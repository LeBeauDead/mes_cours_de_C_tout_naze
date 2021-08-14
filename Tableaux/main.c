#include <stdio.h>

/*
  [Declarer un tableau]
    <type><nom_tableau>[X]; // Déclare avec valeurs aléatoires

  [Initialisation]
    tableau[5] = {valeur1, valeur2, valeur3, valeur4, valeur5};
    tableau[5] = {0}; //Toutes les cases valent 0
    tableau[5] = {4}; //Première case à 4 LE REST A 0 !

  [Accés au tablau]
    tableau[X]    : élément d'indice X [X+1ere élément du tableau]

    tableau       : Adresse du tableau
    *tableau      : Première element du tableau
    *(tableau + X): élément d'indice X

  NOTE
  Tableau[X] = *(tableau + X)

*/

#define Taille_tab 5

void Afficher_tableau(int tab[], int taille);
int *creer_tableau(void);
/*-------------------------------------------*/

int main(void) {

  int *tableau = creer_tableau();

  Afficher_tableau(tableau, Taille_tab);

  printf("\n\n");

  tableau[4] = 7;

  Afficher_tableau(tableau, Taille_tab);

  return 0;
}
/*-------------------------------------------*/
void Afficher_tableau(int tab[], int taille){
  int i;

  for (i=0; i<taille ; i++) {
    printf("[%d]", tab[i] );
  }
}
/*-------------------------------------------*/
int *creer_tableau(void){
  static int tableau_entier[5];
  int i;

  for(i=0; i<5; i++){
    tableau_entier[i] = i * 3;
  }
  return tableau_entier;
}
