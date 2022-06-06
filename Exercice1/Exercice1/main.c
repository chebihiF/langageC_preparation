#include "exercie1.h"

void main()
{
	int choix;
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

			};break;
			case 2: {

			};break;
			case 3: {

			};break;
			case 4: {

			};break;
			case 5: {

			};break;
			case 6: {

			};break;

			default:printf("Veuillez choisir un numéro entre 1 et 6");
		}



	} while (choix != 6);

}