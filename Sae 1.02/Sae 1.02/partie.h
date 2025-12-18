#pragma once


enum {
    limite_carte = 24, // Limite de cartes au sein du jeu
    liste_animaux = 3 // Nombre total d'animaux dans la partie.
};
/**
* @brief Type de donnée structuré qui prend en compte l'ensemble des animaux et des ordres au sein du fichier crazy cfg.
* @param[in] Un tableau d'animaux, composé du nombre total d'animaux dans le fichier
* @param[in] L'ensemble des ordres, KI LO SO NI MA...
* @param[in] un Buffer qui est utile pour la lecture des lignes et leur regroupement au sein de ce tableau de 256 caractères.
*/
typedef struct {
    char animaux[256];
    char ordres[256];
    char buffer[256];
} Parametres;

/**
* @brief Fonction de lecture qui enregistre le contenu du fichier crazy.cfg au sein d'une structure de données.
* @param[in] Le tableau parametres
* @param[out] Il retourne le tableau mis à jour.
*/

void LectureCrazy(Parametres *p);

/**
* @brief Initialise une nouvelle partie pour le jeu.
* param[in] Les parametres du jeu.
* TO BE CONTINUED..
*/

void InitialisePartie(Parametres *p);

