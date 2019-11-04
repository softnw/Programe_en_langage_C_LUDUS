#include <stdio.h>
#include <stdlib.h>
#define TAILLE_MAX 3


int verif_ligne(int n_verif,char c_sym,int n_i, char c_morp[TAILLE_MAX][TAILLE_MAX]);
int verif_diago (int n_verif,char c_sym, int n_i, char c_morp [TAILLE_MAX][TAILLE_MAX]);
int verif_colone(int n_verif,char c_sym, int n_i, char c_morp [TAILLE_MAX][TAILLE_MAX]);


int main()
{
   char c_morp[TAILLE_MAX][TAILLE_MAX]; // creation d'un tableau en deux dimention
    int n_j,n_k,n_i,n_null,n_verif; // creation d'entier
    char c_sym;
    n_null = 0;
    for (n_j=0;n_j<TAILLE_MAX;n_j++)  //initialisation tableau
    {
        for (n_k=0;n_k<TAILLE_MAX;n_k++)
        {
            c_morp[n_j][n_k]='_';
        }

    }

    n_i=0;
    c_sym = 'O';
    while(n_i!=10)
    {
       if (c_sym == 'O')  //changement de symbole
       {
           c_sym = 'X';
       }else
       {
            c_sym = 'O';
       }
       do
        {
            printf("Ecrivez vos coordoné x entre 1 et 3 \n") ;
            scanf("%d",&n_k);
            n_k = n_k-1;
            printf ("Ecrivez vos coordoné y entre 1 et 3 \n") ;
            scanf("%d",&n_j);
            n_j = n_j-1;

        }while(c_morp[n_j][n_k] != '_'); //verification si la cellule est dispo


        c_morp [n_j][n_k] = c_sym;

        for (n_j=0;n_j<TAILLE_MAX;n_j++)
        {
            for(n_k=0;n_k<TAILLE_MAX;n_k++)
            {
             printf("%c",c_morp[n_j][n_k]);
            }
            printf("\n");
        }

        n_null = n_null+1;

        if(n_null == 9)
        {
            n_i=10;
        }

    n_verif=verif_ligne(n_verif,c_sym,n_i,c_morp);  // appel des procedure pour la verification des victoire
    if (n_verif < 3) // on verifie si un des joueur a gagner, si non on lance une autre verification
    {
    n_verif=verif_diago (n_verif,c_sym,n_i,c_morp);
    }
     if (n_verif < 3 )
     {
    n_verif=verif_colone(n_verif,c_sym,n_i,c_morp);
     }

     if (n_verif == 3)
     {
        n_i=10;
     }


    }

 if (n_null == 9) {
    printf("personne n'a gagner, match nul les nulos\n");
 }else{
 printf("le joueur %c a gagné!!!!!",c_sym);
 }



}
int verif_ligne(int n_verif,char c_sym,int n_i, char c_morp[3][3]) // verification de victoire lignes
{
    int n_k ;


        n_verif =0;
        for(n_k=0;n_k<TAILLE_MAX;n_k++)
        {
            if (c_morp[0][n_k] == c_sym )
            {
             n_verif++;
            }
        }
        return n_verif;

}

int verif_colone(int n_verif,char c_sym, int n_i, char c_morp [3] [3]) // verification de victoire colones
{
    int n_j;

        n_verif =0;
        for (n_j=0;n_j<TAILLE_MAX;n_j++)
        {
            if (c_morp [n_j] [0]==c_sym)
            {
             n_verif++;
            }
        }
        return n_verif;

}

int verif_diago (int n_verif,char c_sym, int n_i, char c_morp [3] [3]) // verification de victoire pour les diago
{
    int n_j;
    int n_k;
    n_k=2;
    n_verif =0;
    for (n_j=0;n_j<TAILLE_MAX;n_j++)
    {
        if (c_morp [n_j] [n_k] == c_sym)
            {
                n_verif++;
            }
       n_k=n_k-1;
    }
    n_j=2;
     for (n_k=0;n_k<TAILLE_MAX;n_k++)
    {
        if (c_morp [n_j] [n_k] == c_sym)
            {
                n_verif++;
            }
       n_j=n_j-1;
    }
    return n_verif;
}
