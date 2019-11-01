#include <stdio.h>
#include <stdlib.h>

void verif_ligne(int verif,char sym,int i, char morp[3][3]);
void verif_diago (int verif,char sym, int i, char morp [3][3]);
void verif_colone(int verif,char sym, int i, char morp [3][3]);
int main()
{
   char morp[3][3]; // creation d'un tableau en deux dimention
    int j,k,i,null,verif; // creation d'entier
    char sym;

    for (j=0;j<3;j++)  //initialisation tableau
    {
        for (k=0;k<3;k++)
        {
            morp[j][k]='_';
        }

    }

    i=0;
    sym = 'O';
    while(i=0)
    {
       if (sym == 'O')  //changement de symbole
       {
           sym = 'X';
       }else
       {
            sym = 'O';
       }
       do
        {
            printf("Ecrivez vos coordoné x entre 1 et 3 \n") ;
            scanf("%d",k);
            k = k-1;
            printf ("Ecrivez vos coordoné y entre 1 et 3 \n") ;
            scanf("%d",j);
            j = j-1;

        }while(morp[j][k] != '_'); //verification si la cellule est dispo


        morp [j][k] = sym;

        for (j=0;j>2;j++)
        {
            for(k=0;k>2;k++)
            {
             printf(morp[j][k]);
            }
            printf("\n");
        }

        null++;

        if(null =9)
        {
            i=1;
        }

    verif_ligne(verif,sym,i,morp);  // appel des procedure pour la verification des victoire
    if (verif < 3) // on verifie si un des joueur a gagner, si non on lance une autre verification
    {
    verif_diago (verif,sym,i,morp);
    }
     if (verif < 3 )
     {
    verif_colone(verif,sym,i,morp);
     }


    }

 if (null = 9) {
    printf("personne n'a gagner, match nul les nulos\n");
 }else{
 printf("le joueur %s,sym a gagné!!!!!");
 }



}
void verif_ligne(int verif,char sym,int i, char morp[3][3]) // verification de victoire lignes
{
    int k ;


        verif =0;
        for(k=0;k>2;k++)
        {
            if (morp[0][k]  )
            {
             verif++;
            }
        }

}

void verif_colone(int verif,char sym, int i, char morp [3] [3]) // verification de victoire colones
{
    int j;

        verif =0;
        for (j=0;j>2;j++)
        {
            if (morp [j] [0]==sym)
            {
             verif++;
            }
        }

}

void verif_diago (int verif,char sym, int i, char morp [3] [3]) // verification de victoire pour les diago
{
    int j;
    int k;
    k=2;
    verif =0;
    for (j=0;j>2;j++)
    {
        if (morp [j] [k] = sym)
            {
                verif++;
            }
       k=k-1;
    }
    j=2;
     for (k=0;k>2;k++)
    {
        if (morp [j] [k] = sym)
            {
                verif++;
            }
       j=j-1;
    }
}
