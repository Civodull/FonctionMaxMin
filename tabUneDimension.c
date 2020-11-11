#include <stdio.h>


int main()
{
    int i,position, vrai=0,n, tab[4]= {32,1,4,56};
   char c;
    printf("Veuillez saisir la valeur a chercher ");
do
{
    if (scanf("%d",&n) == 1)
    {
        for (i = 0; i < 4; i++)
        {
            if (tab[i] == n)
            {
                position = i;
                vrai = 1;
                break;
            }
        }
        if (vrai == 1)
        {
            printf("L'element %d se trouve a la position %d du tableau\n",n,position);
        }else
        {
            printf("L'element %d n'existe pas dans le tableau\n",n);
        }
    }else
    printf("La valeur que vous avez saisis n'est pas un entier\n\tSaisissez un entier\n");

} while ((c=getchar()) != '\n' && c != EOF);
    return 0;
}
