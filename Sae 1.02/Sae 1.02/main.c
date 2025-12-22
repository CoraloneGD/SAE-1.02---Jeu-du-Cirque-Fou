#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "joueur.h"
#include "partie.h"

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

int main() {
	Joueur jo; joueursListe joListe; Parametres p;
	char commande[256] = "";
	printf("Ajout \n");
	do {
		if (scanf("%255s", commande) != 1) {
			return 0;
		}
		// Ajout joueurs
		if (strcmp(commande, "Ajouter") == 0) {
			AjoutJoueurs(&jo, &joListe);
		}
		// Saisie des noms des joueurs
		
		
		


	} while (1);

}
