#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define NFOIS 5 //constante
#define PI 3.14
#define NOM "Lehmann"
#define CAR "x"
//Exemple de programme en C
//comentaire ligne
/*Commenatire paragraphe*/
/*
int main()
{
    int i;
    float x;
    float racx;
    printf("Bonjour\n");
    printf("calcul de %d racines carrees\n",NFOIS);
    for(i=0;i<NFOIS;i++){
        printf("Donnez un nombre : ");
        scanf("%f",&x);
        if(x<0.0)
            printf("Le nombre %f ne possède pas de racine carree\n",x);
        else{
            racx=sqrt(x);
            printf("le nombre %f a une racine carree: %f\n",x,racx);
        }
    }
    printf("Travai Termine -Au revoir");
    return 0;
}
*/
/*void main(){
    int i;
    float x;
    float racx;
    printf("Bonjour\n");
    printf("calcul de %d racines carrees\n",NFOIS);
    for(i=0;i<NFOIS;i++){
        printf("Donnez un nombre : ");
        scanf("%f",&x);
        if(x<0.0)
            printf("Le nombre %f ne possède pas de racine carree\n",x);
        else{
            racx=sqrt(x);
            printf("le nombre %f a une racine carree: %f\n",x,racx);
        }
    }
    printf("Travai Termine -Au revoir");
}
*/
/*int main(){
    //integer
    short int nA;//short
    int nB;
    long int nC;//long

    const int cnt=10;
   // static  // la variable reste connue même apres arret de l'execution de la fonction
    volatile int nVolB;

    printf("taille de nA : %d",sizeof(nA));
    printf(" taille de nB : %d",sizeof(nB));
    printf(" taille de Nc : %d",sizeof(nC));

    //REAL
    float fltReelSimple; //Reel simple precision

    double dblReelDouble; // Reel double precision

    printf(" taille de fltReelSimple : %d\n",sizeof(fltReelSimple));
    printf(" taille de dblReelDouble : %d\n",sizeof(dblReelDouble));

    //caracter
    char cCaracter;

    printf("taille de cCaracter : %d\n",sizeof(cCaracter));

    //tester Define

    printf("Nom : %s\n",NOM);
    printf("Car : %c\n",CAR);
    printf("Pi : %f\n",PI);
    printf("Nfois : %d\n",NFOIS);

    //opérateur
     int nI= 0 ;

     ++nI;//pre-Incrementation
     nI++; //post-Incrementation
     // le % c'est le modulo
     // le / est la division

    //cast
     long double ldblLongDouble = 105.8933259635;

     printf("Valeur de ldblLongDouble : %lf\n",(double)ldblLongDouble);

     //opérateur relationel
     // >
     // <
     // >=
     // <=
     // ==
     // !=

     //opérateur logique
     // &
     // &&
     // |
     // ||
     // !

     //factorisation opérateur
     // +=
     // -=
     // *=
     // /= ...



     // nA+nB

     //travailler un exemple de Condition en C qui sera découper en 2 solution la 1er sans opérateur logique et la seconde avec opérateur logique
     // l'un des deux exemples doit inclure un si
      long int liXequal;
      long int liYequal;
      scanf(liXequal);
      scanf(liYequal);

     if(liXequal = liYequal)
            printf("les valeur x et y sont equivalents %c");
    else{
            printf("les valeur x et y ne sont pas equivalents %c\n");
    }


     //faire un exemple avec une boucle pour, un exeple avec une boucle tant que , un exepmle avec une boucle faire tant que.

     //rechercher ub exemple avec l'oppérateur ternaire


    return 0;
 */



//Structures Condition et boucles

/*int main (){

    int a=0,b=0,c=0,d=0;

    //Condition

    if (a==b) {
        printf("ils sont egaux\n");
    }else{
        printf("ils sont diff\n");
    }


    //Condition avec operateurs logique

    if ((a==b) && (a==c)) {
        printf("ils sont tous egaux");
    }else{
        printf("ils sont différents\n");
    }

    if ((a==b) || (a==c)){
        printf("Ils sont egaux\n");
    }else{
        printf("ils sont diff\n");
    }

    if ((a==b) || (a==c)){
        printf("ils sont egaux");
    }else if ((a==c) && (a!=d)){
        printf("blablabla\n");
    }


    //Boucle
    int i=0;

    for (i=0;i<TAILLE;i++) {
        print("Hello world\n");
    }

    //Tant Que (TQ)

    i=0;
    while(i<TAILLE) {
        printf("hello world\n");
        i++;
    }

    //FAIRE TQ

    i=0;
    do{
        printf("hello world\n");
        i++
    }while(i<<TAILLE);



    //Cas alternatif de la condition

    int choix=-1;

    printf("Veuillez entrer votre choix\n");
    scanf("%d",&choix);
    switch(choix) {
        case 0:printf("quitter\n");break;
        case 1:printf("claculer\n");break;
        case 2:printf("jouer\n") ;break;
        default : printf(default\n);break;
    }

    //test ? instruction : instruction 2
    (a==b) ? printf("Egaux"): printf("Diff");


    //instruction break;
    for(i=0;i<TAILLE;i++){
        printf("hello world\n") ;

        if(i==3){
            break;
        }
    }

    for(i=b;i<TAILLE;i++) {
        printf("Hello world\n");

        if(i<3){
            printf("continue\n");
            continue;
        }
    }
}*/

//Les entrées sorties conversationnelles


int main()

    //Affichage
    printf("%d\n",TAILLE);
    printf("%s\n",MOT);


    //Saisie

    int val
    scanf ("%d",&val);
    fflush(stdin); //vide le buffer de la saisie
    char car;
    scanf("%c,&car");
    fflush(stdin);
    char tabCar[TAILLE]; //de 0 a TAILLE-1
    scanf ("%s",tabCar);




