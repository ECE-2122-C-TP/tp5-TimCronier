//
// Created by supti on 04/10/2021.
//

#include <stdio.h>
#include "exercice.h"
#include "fonction.h"


void exo1() {
    NombreRationnel rat1 = saisirRat();
    NombreRationnel rat2 = saisirRat();
    afficherRat( multiplicationRat(rat1,rat2) );
}

void exo2() {
    int N = 0;
    printf("Combien d'entier voulez vous dans le tableau ? \n>");
    scanf("%d", &N);
    if (N > 100) { printf("Erreur, nombre superieur a 100."); return ;}
    int tableau[N];
    remplirTableau(tableau , N);
    afficherTableau(tableau , N);
    printf("\nLa plus grande valeur du tableau est : %d." , plusGrandeValeurTableau(tableau , N));
}


void exo3() {
    int k = 0;
    int tableau2D[LIGNE][COLONNE];
    int tableau1D[LIGNE*COLONNE];
    remplirTableau2D(tableau2D);
    for (int j = 0 ; j < LIGNE ; j++) {
        for (int i = 0 ; i < COLONNE ; i++) {
            tableau1D[k] = tableau2D[j][i];
            k++;
            printf("%5d" , tableau2D[j][i]);
        }
    printf("\n");
    }
    afficherTableau(tableau1D , 12);
}

void exo3up() {
    int ligne = 0, colonne = 0 , k = 0;
/* On définit le nombre de ligne(s) et de colonne(s) du tableau en 2 dimensions. */
    printf("Saisissez le nombre de ligne de votre tableau : \n>");
    scanf("%d" , &ligne);
    printf("Saisissez le nombre de colonne de votre tableau : \n>");
    scanf("%d" , &colonne);
/* On initialise les tableaux en 1 et 2 dimensions. */
    int taille = ligne * colonne;
    int tableau2D[ligne][colonne];
    int tableau1D[taille];
/* On remplit le tableau en 2 dimensions */
    for (int i = 0 ; i < ligne ; i++) {
        for (int j = 0 ; j < colonne ; j++) {
            printf("Cette case (%d,%d) vaut : \n", i, j);
            scanf("%d" , &tableau2D[i][j]);
        }
    }
/* On transfère les données du tableau en 2D dans le tableau en 1D. */
    printf("Voici le tableau en 2D :\n");
    for (int j = 0 ; j < 3 ; j++) {
        for (int i = 0 ; i < 4 ; i++) {
            tableau1D[k] = tableau2D[j][i];
            k++;
            printf("%7d" , tableau2D[j][i]);
        }
    printf("\n");
    }
/* On affiche le tableau à 2 dimensions, puis le tableau à 1 dimension. */
    afficherTableau(tableau1D , 12);
}

void exoBonus() {
    int pgcd = 0;
    NombreRationnel rat = saisirRat();
    pgcd = PGCD(rat);
    printf("%d\n" , pgcd);
    afficherRat(simplifierFraction(rat));
}