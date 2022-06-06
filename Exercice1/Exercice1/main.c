#include "exercie1.h"

void main()
{
	int choix,v;
	List l = NULL;

	do {
		printf("1 - AJOUTER \n");
		printf("2 - AFFICHAGER \n");
		printf("3 - TRI  \n");
		printf("4 - SUPPRESSION \n");
		printf("5 - VIDER  \n");
		printf("6 - QUITTER  \n");
		printf("Donner votre choix : ");
		scanf_s("%d", &choix);

		switch (choix)
		{
			case 1: {
				printf("Donner une valeur : ");
				scanf_s("%d", &v);
				ajouter(&l, v);
			};break;
			case 2: {
				afficher(l);
			};break;
			case 3: {
				tri_bulle(&l);
			};break;
			case 4: {
				printf("Donner une valeur : ");
				scanf_s("%d", &v);
				supprimer(&l, v);
			};break;
			case 5: {
				vider(&l);
			};break;
			case 6: {
				printf("Merci pour votre passage \n");
			};break;

			default:printf("Veuillez choisir un numéro entre 1 et 6 \n");
		}



	} while (choix != 6);

}