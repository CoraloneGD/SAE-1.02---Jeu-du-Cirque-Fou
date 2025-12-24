#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "joueur.h"
#include "partie.h"

#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

int main(int argc, char* ListeJoueurs[]) {
	if (argc < 3) {
		printf("Il faut au moins deux joueurs pour lancer une partie !\n");
		return EXIT_FAILURE;
	}

	for (int i = 1; i < argc; i++) {
		for (int j = i + 1; j < argc; j++) {
			if (strcmp(ListeJoueurs[i], ListeJoueurs[j]) == 0) {
				printf("Les noms doivent etres distincts\n");
				return EXIT_FAILURE;
			}
		}
	}

	// Ajoute les joueurs dans la liste.
	joueursListe liste = { .taille = 0 };
	for (int i = 1; i < argc; i++) {
		Joueur joueur;
		strncpy(joueur.prenom, ListeJoueurs[i], MAX_CHAR);
		joueur.prenom[MAX_CHAR - 1] = '\0';
		joueur.score = 0;
		joueur.prochainTour = 0;
		liste.listeJoueurs[liste.taille++] = joueur;
		printf("Joueur ajoute: %s\n", joueur.prenom);
	}


	// Affichage des ordres possibles selon crazy.cfg
	Parametres p = { 0 };
	InitialisePartie(&p);

	printf("Voici les ordres possibles: %s \n", p.ordres);

}
