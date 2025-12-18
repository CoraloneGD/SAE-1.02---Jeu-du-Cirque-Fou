#pragma warning(disable:4996)

#include <stdio.h>
#include <string.h>
#include "partie.h"



void LectureCrazy(Parametres* p) {
	FILE* fichier = fopen("crazy.cfg", "r"); // Ouverture du fichier de configuration avec les droits de lecture.
	if (!fichier) {
		printf("Erreur d'ouverture du fichier.\n");
		return;
	}
	if (fgets(p->animaux, sizeof(p->animaux), fichier) != NULL) {
		p->animaux[strcspn(p->animaux, "\n")] = 0;
		// Affichage des animaux.
		char* myPtr = strtok(p->animaux, " ");
		while (myPtr != NULL) {
			printf("%s ", myPtr);
			myPtr = strtok(NULL, " ");
		}
		// Affichage des commandes.

		if (fgets(p->ordres, sizeof(p->ordres), fichier) != NULL) {
			p->ordres[strcspn(p->ordres, "\n")] = 0;
			char* MyOrders = strtok(p->ordres, " ");
			while (MyOrders != NULL) {
				printf("%s \n", MyOrders);
				MyOrders = strtok(NULL, " ");
			}
		}
	}
	fgets(p->ordres, sizeof(p->ordres), fichier);
	// printf("%s \n", ordres); --> débogage
	fclose(fichier); // fermeture du fichier.
}
void InitialisePartie(Parametres* p) {
	LectureCrazy(p); // Lecture du fichier de configuration.
}