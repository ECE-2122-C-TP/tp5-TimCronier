//
// Created by supti on 04/10/2021.
//

#ifndef TP_5_FONCTION_H
#define TP_5_FONCTION_H
#define LIGNE 3
#define COLONNE 4

typedef struct { int numerateur, denominateur; } NombreRationnel;

NombreRationnel multiplicationRat(NombreRationnel rat1, NombreRationnel rat2);
NombreRationnel additionRat(NombreRationnel rat1 , NombreRationnel rat2);
NombreRationnel saisirRat();
void afficherRat(NombreRationnel rat);
int PGCD(NombreRationnel rat);
NombreRationnel simplifierFraction(NombreRationnel rat);


void remplirTableau(int tableau[] , int taille);
void remplirTableau2D(int tableau[LIGNE][COLONNE]);
void afficherTableau(int tableau[], int taille);
int plusGrandeValeurTableau(int tableau[], int taille);

#endif //TP_5_FONCTION_H
