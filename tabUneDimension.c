#include <stdio.h>
#include<ctype.h>

int main()
{
    int nombreSaisir, tab[4]= {32,1,4,56};
    int i,position, trouve=0;
    char c;

    printf("Veuillez saisir la valeur a chercher ");
do
{
    if (scanf("%f",&nombreSaisir) == 1)
    {
        for (i = 0; i < 4; i++)
        {
            if (tab[i] == nombreSaisir)
            {
                position = i;
                trouve = 1;
             
            }
        }
        if (trouve == 1)
        {
            printf("L'element %.2f se trouve a la position %d du tableau\n",nombreSaisir,position);
        }else
        {
            printf("L'element %.2f n'existe pas dans le tableau\n",nombreSaisir);
        }
    }else
    printf("La valeur que vous avez saisis n'est pas un entier\n\tSaisissez un entier\n");

} while ((c=getchar()) != '\n' && c != EOF);
    return 0;
}
