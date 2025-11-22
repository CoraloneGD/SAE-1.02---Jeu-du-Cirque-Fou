#pragma once

#define MAX_CHAR 30 // Nombre de caractères maximum pour le nom d'un joueur.
#define MAX_JOUEURS 10 // Nombre maximum de joueurs dans une partie.

enum {
	KI, // Animal du haut - podium bleu -> saute sur sommet podium rouge
	LO, // Animal du haut - podium rouge -> saute sur sommet podium bleu
	SO, // Deux animaux du sommet -> Échange de places
	NI, // Animal du bas - podium bleu -> va en haut du podium bleu
	MA  // Animal du bas - podium rouge -> va en haut du podium rouge
};

/**
	@brief La structure représentant un joueur.
	@param[in] nom Le nom du joueur.
	@param[in, out] score Le score actuel du joueur.
	@param[in] prochainTour une variable qui aura une fonction de booléen indiquant si le joueur peut rejouer ou non.

	@sa MAX_CHAR
*/
typedef struct {
	char nom[MAX_CHAR];
	int score;     
	int prochainTour;
} Joueur;


/**
	@brief La structure représentant une liste de joueurs.
	@param[in] id L'identifiant unique de la liste de joueurs.
	@param[in, out] listeJoueurs Le tableau contenant les joueurs.
	@sa MAX_JOUEURS
*/
typedef struct {
	int id;
	Joueur listeJoueurs[MAX_JOUEURS];
} joueursListe;





