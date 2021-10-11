//
// Created by supti on 04/10/2021.
//

#include <stdio.h>
#include "fonction.h"


/* Fonction qui multiplie 2 rationnels et qui renvoie le résultat.
 * Paramètres :
 * - IN : NombreRationnel rat1 & NombreRationnel rat2, 2 nombres rationnels
 * - OUT : NombreRationnel resultat, le résultat de la multiplication
 */
NombreRationnel multiplicationRat(NombreRationnel rat1, NombreRationnel rat2) {
    NombreRationnel resultat;
    resultat.numerateur = rat1.numerateur * rat2.numerateur;
    resultat.denominateur = rat1.denominateur * rat2.denominateur;
    return resultat;
}

/* Fonction qui additionne 2 rationnels et qui renvoie le résultat.
 * Paramètres :
 * - IN : NombreRationnel rat1 & NombreRationnel rat2, 2 nombres rationnels
 * - OUT : NombreRationnel resultat, le résultat de l'addition
 */
NombreRationnel additionRat(NombreRationnel rat1, NombreRationnel rat2) {
    NombreRationnel resultat;
    resultat.numerateur = rat1.numerateur * rat2.denominateur + rat1.denominateur * rat2.numerateur;
    resultat.denominateur = rat1.denominateur * rat2.denominateur;
    return resultat;
}

/* Fonction qui affiche un nombre rationnel.
 * Paramètres :
 * - IN : NombreRationnel rat, un nombre rationnel.
 * - OUT : un printf affichant le nombre rationnel sous la forme "numérateur / dénominateur".
 */
void afficherRat(NombreRationnel rat) {
    printf("Ce rationnel est %d/%d." , rat.numerateur , rat.denominateur);
}

/* Fonction qui permet à l'utilisateur de saisir un nombre rationnel.
 * Paramètres :
 * - IN : /
 * - OUT : NombreRationnel n, le nombre rationnel rentré par l'utilisateur.
 */
NombreRationnel saisirRat(){
    NombreRationnel n;
    printf("Rentrez le numerateur et le denominateur du nombre rationnel voulu.\n>");
    scanf("%d%d" , &n.numerateur , &n.denominateur);
    return n;
}

/* Fonction qui renvoie le PGCD du numérateur et du dénominateur d'un nombre rationnel.
 * Paramètres :
 * - IN : NombreRationne rat, un nombre rationnel.
 * - OUT : pgcd, le pgcd du numérateur et du dénominateur.
 */
int PGCD(NombreRationnel rat) {
    int pgcd = 0;
    if (rat.numerateur < rat.denominateur) {
        for (int i = 2 ; i <= rat.numerateur ; i++) {
            if (rat.numerateur%i == 0 && rat.denominateur%i == 0) {
                pgcd = i;
            }
        }
    }
    else {
        for (int i = 2 ; i <= rat.denominateur ; i++) {
            if (rat.numerateur%i == 0 && rat.denominateur%i == 0) {
                pgcd = i;
            }
        }
    }
    return pgcd;
}

/* Fonction qui renvoie une fraction simplifiée, si possible.
 * Paramètres :
 * - IN : NombreRationnel rat, un nombre rationnel.
 * - OUT : NombreRationnel rat, qui est le rationnel initial si le pgcd entre le numérateur et le dénominateur vaut 0, ou le numérateur et le dénominateur chacun divisés par leur pgcd.
 */
NombreRationnel simplifierFraction(NombreRationnel rat) {
    int pgcd = PGCD(rat);
    if (pgcd != 0) {
        rat.denominateur = rat.denominateur / pgcd;
        rat.numerateur = rat.numerateur / pgcd;
        return rat;
    }
    else { return rat; }
}


/* Fonction qui permet à l'utilisateur de remplir les cases d'un tableau d'une taille donnée.
 * Paramètres :
 * - INOUT : int tableau[], le tableau à remplir.
 * - IN : int taille, la taille logique du tableau.
 * - OUT : /
 */
void remplirTableau(int tableau[] , int taille) {
    for (int i = 0; i < taille ; i++) {
        printf("Cette case (%d) vaut : \n", i);
        scanf("%d" , &tableau[i]);
    }
}

/* Fonction qui permet à l'utilisateur de remplir les cases d'un tableau 2 dimensions (3x4).
 * Paramètres :
 * - INOUT : int tableau[LIGNE][COLONNE], le tableau à remplir.
 * - OUT : /
 */
void remplirTableau2D(int tableau[LIGNE][COLONNE]){
    for (int i = 0 ; i < LIGNE ; i++) {
        for (int j = 0 ; j < COLONNE ; j++) {
            printf("Cette case (%d,%d) vaut : \n", i, j);
            scanf("%d" , &tableau[i][j]);
        }
    }
}

/* Fonction qui affiche un tableau pris en entrée avec sa taille.
 * Paramètres :
 * - IN : taille, la taille logique du tableau.
 *        tableau[], le tableau contenant la valeur convoitée.
 * - OUT : l'affichage du tableau via un printf.
 */
void afficherTableau(int tableau[], int taille) {
    printf("Ce tableau a une taille de %d. \n Les elements sont : ", taille);
    for (int k = 0; k < taille; k++) {
        printf("%5d ", tableau[k]);
    }
}

/* Fonction qui parcourt les valeurs d'un tableau et renvoie la plus grande.
 * Paramètres :
 * - IN : int taille, la taille logique du tableau.
 * - OUT : la plus grande valeur du tableau.
 */
int plusGrandeValeurTableau(int tableau[], int taille) {
    int valeur = 0;
    for (int j=0 ; j<taille ; j++) {
        if (tableau[j] > valeur) { valeur = tableau[j] ; }
    }
    return valeur;
}

