#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Pile.h"



int est_vide(Pile p){
    return p.sommet==NULL;
}

Pile pile_vide(){
    Pile p;
    p.sommet=NULL;
    return p;
}

char sommet(Pile p){
    if (est_vide(p)){
        printf("Erreur : Pile est vide !!");
        exit(1);
    }
    return p.sommet->elt;
}

void empiler(Pile *p,char elt){
    Noeud* noeud=(Noeud*) malloc(sizeof(Noeud));
    noeud->elt = elt;
    noeud->suiv=p->sommet;
    p->sommet=noeud;
}

char depiler(Pile* p){
    if (est_vide(*p)){
        printf("Erreur : Pile est vide !!");
        exit(1);
    }
    char e = p->sommet->elt;
    Noeud* tmp = p->sommet;
    p->sommet = p->sommet->suiv;
    free(tmp);
    return e;
}

/*-------------------------------------------------Des fonctions---------------------------------------------------------------*/


int check(char c,char d){
     if(c==')' && d=='('){
        return 1;
     }
     if(c==']' && d=='['){
        return 1;
     }
     else return 0;
}

void ajouter_exp(){
    int i;
    char tab[20];
    Pile p=pile_vide();
    printf("Donner une expression mathematique : \n");
    scanf("%s",tab);

    for(i=0;i<strlen(tab);i++){
        if (tab[i]=='[' || tab[i]==']' || tab[i]=='(' ||tab[i]==')'){
            if(est_vide(p)){empiler(&p,tab[i]);}
            else{
                if(check(tab[i],sommet(p))==1) depiler(&p);
                else empiler(&p,tab[i]);
            }
        }
    }
    if(est_vide(p)) {printf("\n\n Votre expression est correcte :) \n\n\n\n ");
    main();
    }

    else printf("\n\n !! Votre expression n'est pas correcte !! \n\n\n\n\n");
    main();

}

