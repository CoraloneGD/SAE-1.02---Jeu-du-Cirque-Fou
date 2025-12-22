#include <stdlib.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "joueur.h"
#pragma warning(disable:4996)
#define _CRT_SECURE_NO_WARNINGS

// TODO : A FINIR, implementer la verif si l'utilisateur marque le même nom 
// TODO: ENSUITE METTRE DANS LA LISTE LES JOUEURS AVEC LEUR ID COMME DANS L EXEMPLE (déjà, on utilise quelle structure de donnée ici? Tableau? Oui.)
// TODO : FAIRE LA DOCUMENTATION, POUR L INSTAT LA FONCTION AJOUTE UN JOUEUR
int AjoutJoueurs(Joueur* jo, joueursListe* joListe) {
	
	char prenom[MAX_CHAR] = ""; char nom[MAX_CHAR] = "";
	printf("Veuillez saisir le prenom  du joueur !\n");
	if (scanf("%s %s", jo->prenom, jo->nom) != 2) {
		printf("Erreur lors de la saisie.\n");
		return 1;
	}
	strcpy(jo->prenom, prenom);
	strcpy(jo->nom, nom);
	jo->score = 0;
	jo->prochainTour = 0;

	for (int i = 0; i < joListe; ++i) {
		if (strcmp(jo->nom, joListe->listeJoueurs[i].nom) && (strcmp(jo->prenom, joListe->listeJoueurs[i].prenom)) == 0) {
			printf("Nom deja utilise \n");
			return -1;
		}


	}
	
	return 0;

}
