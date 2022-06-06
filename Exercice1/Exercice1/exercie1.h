#include <stdio.h>
#include <stdlib.h>

typedef struct Cellule
{
	int data;
	struct Cellule* next;
} Cel;

typedef Cel* List;

void ajouter(List*, int v);
void afficher(List);
void tri_bulle(List*);
void supprimer(List*, int v);
void vider(List* l);

void vider(List* l) {
	List p = *l;
	int v;
	while (p!=NULL)
	{
		v = p->data;
		p = p->next;
		supprimer(l, v);
		
	}
}

void supprimer(List* l, int v) {
	List p = *l;
	List s = NULL;
	if (p->data == v) {
		*l = p->next;
		free(p);
		return;
	}
	while (p->next != NULL)
	{
		if (p->next->data == v) {
			s = p->next;
			if (p->next->next == NULL)
				p->next = NULL;
			else
				p->next = p->next->next;
			free(s);
			return;
		}
		p = p->next;
	}
}

void tri_bulle(List* l) {
	int test_tri, ech;
	List p = NULL;
	do {
		test_tri = 1; // Trié 
		for (p = *l; p->next != NULL; p = p->next) {
			if (p->data > p->next->data) {
				ech = p->data;
				p->data = p->next->data;
				p->next->data = ech;
				test_tri = 0;
			}
		}
	} while (test_tri == 0);

}

void afficher(List l) {
	List p = l;
	if (l == NULL)
	{
		printf("la list est vide \n");
		return;
	}
	printf("[ ");
	while (p->next!=NULL)
	{
		printf("%d->",p->data);
		p = p->next;
	}
	printf("%d ]\n", p->data);
}

void ajouter(List* l, int v) {
	if (*l == NULL) {
		*l = malloc(sizeof(Cel)); // 1-Créer une cellule 2-retourner l'adresse de la cellule
		(*l)->data = v;
		(*l)->next = NULL;
	}
	else
	{
		Cel* newCel = malloc(sizeof(Cel));
		newCel->data = v;
		newCel->next = *l;
		*l = newCel;

	}
}