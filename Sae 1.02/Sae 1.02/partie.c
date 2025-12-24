#pragma warning(disable:4996)

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "partie.h"




void LectureCrazy(Parametres* p) {
	FILE* fichier = fopen("crazy.cfg", "r"); // Ouverture du fichier de configuration avec les droits de lecture.
	if (!fichier) {
		printf("Erreur d'ouverture du fichier.\n");
		return;
	}
	if (fgets(p->animaux, sizeof(p->animaux), fichier)) {
		p->animaux[strcspn(p->animaux, "\n")] = '\0';
	}

		// Affichage des ordres.
	if (fgets(p->ordres, sizeof(p->ordres), fichier)) {
		p->ordres[strcspn(p->ordres, "\n")] = '\0';
	}

	fclose(fichier); // fermeture du fichier.
}
void InitialisePartie(Parametres* p) {
	LectureCrazy(p); // Lecture du fichier de configuration.
}
