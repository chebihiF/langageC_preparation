#include <stdio.h>
#include <stdlib.h>

typedef struct Cellule
{
	int data;
	struct Cellule* next;
} Cel;

typedef Cel* List;

void ajouter(List*, int v);


void ajouter(List* l, int v) {
	if (*l == NULL) {
		*l = malloc(sizeof(Cel)); // 1-Créer une cellule 2-retourner l'adresse de la cellule
		(*l)->data = v;
		(*l)->next = NULL;
	}
	else
	{
		Cel* newCel = malloc(sizeof(Cel));
		newCel->next = *l;
		(*l)->next = newCel;
	}
}