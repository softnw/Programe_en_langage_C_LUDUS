#include <stdio.h>
#include <stdlib.h>



 typedef struct gameobject
        {
                int value;
                struct gameobject *prev; // pointeur de l'element precedent
                struct gameobject *next; // pointeur l'element suivant
        } gameobject ;


           typedef struct  //structure de pointeur
        {
          gameobject *first; // pointeur du premier element a etre venu
          gameobject *last; //pointeur du dernier element a etre venu
        }dblist;

void Init(dblist *l);
void addfin(dblist *l, int val);
void adddebut(dblist *l, int val);
int retirfin(dblist *l);
int retirdebut(dblist *l);
int main()
{
      dblist MaListe;


        Init(&MaListe); //initialisation de la liste

        addfin(&MaListe,60);
        adddebut(&MaListe,70);


        void Init(dblist *l);



        void addfin(dblist *l, int val); //on ajoute une valeur en fin de liste



        void adddebut(dblist *l, int val); // on ajoute une valeur en debut de liste



        int retirfin(dblist *l); //on retire une valeur en fin de liste



        int retirdebut(dblist *l); // on retire une valeur en fin de liste



    return 0;
}

void Init(dblist *l) //initialisation des valeur
{
   l->first = NULL;
   l->last = NULL;
}


void addfin(dblist *l, int val)
{
   gameobject *nouv = malloc(sizeof(gameobject));
   if(!nouv) exit(EXIT_FAILURE);
   nouv->value = val;
   nouv->prev = l->last;
   nouv->next = NULL;
   if(l->last) l->last->next = nouv;
   else l->first = nouv;
   l->last = nouv;
}


void adddebut(dblist *l, int val)
{
   gameobject *nouv = malloc(sizeof(gameobject));
   if(!nouv) exit(EXIT_FAILURE);
   nouv->value = val;
   nouv->next = l->first;
   nouv->prev = NULL;
   if(l->first) l->first->prev = nouv;
   else l->last = nouv;
   l->first = nouv;
}

int retirfin(dblist *l)
{
   int val;
   gameobject *tmp = l->last;
   if(!tmp) return -1;
   val = tmp->value;
   l->last = tmp->prev;
   if(l->last) l->last->next = NULL;
   else l->first = NULL;
   free(tmp);
   return val;
}


int retirdebut(dblist *l)
{
   int val;
   gameobject *tmp = l->first;
   if(!tmp) return -1;
   val = tmp->value;
   l->first = tmp->next;
   if(l->first)l->first->prev = NULL;
   else l->last = NULL;
   free(tmp);
   return val;
}
