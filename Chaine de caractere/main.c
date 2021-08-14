#include <stdio.h>
#include <string.h>
/*

  [Notes]
    a l'initialisation du nombre de case d'un tableau il y a une case en plus
    char mot[6] = "Jason"
    ['J'] ['a'] ['s'] ['o'] ['n'] ['\0']
    5 lettre pour ecrire jason mais 6 case dans le tableau

  [Fonction des chaines]
    include <string.h>

    strcpy() : copie une chaine dans une autre
    strlen() : longueur d'une chaine (sans le caractere de fin de chaines)
    strcmp() : comparer deux chaines (Léxicographiquement)
    strcat() : concaténer deux chaines (fusionner)
    strstr() : chercher une chaine dans une autre
    strchr() : chercher la premier occurence du caractere

    sprintf() : écrire dans une chaine
*/

int main(void)
{

  /*char texte[] = "Spider-man";
  char c = '-';

  char *resultat = strchr(texte, c);

  printf("%s\n", resultat);*/

  /*char mot1[] = "Boul ";
  char mot2[] = "et ";
  char mot3[] = "Un";

  printf("%s\n", strcat(strcat(mot1,mot2),mot3) );*/

  /*char mot[] = "Bonjour tout le mode !";
  printf("%s\n", mot);*/

  /*char mot1[] = "elise";
  char mot2[] = "Uriel";
  int test = strcmp(mot1,mot2);

  if(test == 0)
    printf("Les deux mots son identique. \n");
  else if(test < 0)
    printf("%s est avant %s\n", mot1, mot2);
  else
    printf("%s est apres %s\n", mot1, mot2);*/

  return 0;
}
