#define _PILE_CHAINEE

typedef struct{
    char elt;
    struct Noeud *suiv;
}Noeud;

typedef struct{
    Noeud *sommet;

}Pile;

int est_vide(Pile);
Pile pile_vide();
char sommet(Pile);
void empiler(Pile*,char);
char depiler(Pile*);
void ajouter_exp();
int check(char,char);

