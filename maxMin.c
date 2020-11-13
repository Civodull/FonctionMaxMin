#include <stdio.h>

//fonction elementMin, determine l'element min du tableau
//int de retour veut dire que le printf renvoie vrai = 1

int elementMin(float t[], int taille)
{

float min;
int positionMin,trouver=0,i;

min = t[0];                  //on initialise min au premier element du tableau
for (i =0; i <4; i++)       //la boucle pour remplir le tableau
{
    if(t[i] <= min){        //comparaison et affectation du dernier + petit element du tableau 
        min = t[i];         // a la variable min
        positionMin=i;      // recuperation de la position du dernier + petit element du tableau
    }
}
return printf("Le min du tableau est %.2f et se trouve a la position %d \n",min,positionMin);
}
//procedure qui determine l'element max du tableau
void elementMax(float t[], int taille){
    float  max;
    int i,trouver=0,positionMax;

 max = t[0];
for (i =0; i <4; i++)
{
    if(t[i] >= max){
        max = t[i];
        positionMax=i;
    }
}
    printf("Le max du tableau est %.2f et se trouve a la position %d \n",max,positionMax);
}
