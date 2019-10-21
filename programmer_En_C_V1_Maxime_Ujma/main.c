#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NFOIS 5

int main()
{
    int i;
    float x;
    float racx;

    printf("Bonjour\n");

    printf("Je vais vous calculer %d racines carrees\n",NFOIS);

    for(i=0;i<NFOIS;i++)
    {
        printf("donnez un nombre :  ");
        scanf("%f",&x); // scanf permet de saisir au clavier une information d'un certain type
        if(x<0.0)
            printf("Le nombre %f ne possede pas de racine carree \n",x);
        else
        {
            racx=sqrt (x);
            printf("le nombre %f a pour racine carree %f\n",x,racx);
        }
    printf("Travail Termine - Au revoir");

    return 0;

    }



}
