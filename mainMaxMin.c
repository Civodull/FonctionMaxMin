#include <stdio.h>
#include "maxMin.h"


int main()
{
    float n, min,nombreSaisir, max,tab[4];
    char c;
    int positionMax,positionMin,i,trouver=0;
do
{

for (i = 0; i < 4; i++)
{
    printf("Entrer l'element %d\n",i);
    if(scanf("%f",&n) == 1){ //premier test s'il passe, on remplit le tableau sinon on recommence
       
        trouver=1;

        if (trouver == 1)//deuxieme test 
        {
         tab[i] = n;
        }
    }
    else //Si la saisie n'est pas verifiee, on ne passe pas et
    {  // on se remet a la position 0 du tableau pour saisir le premier element
        break;
    }
    
}
if (trouver == 1)
{
elementMin(tab, 4); //appelle de la fonction elementMin avec en argument le nom du tableau et sa taille
elementMax(tab, 4);//appelle de la procedure elementMax avec en argument le nom du tableau et sa taille
}

} while (c=getchar() != '\n' && c !=EOF);
return 0;
}