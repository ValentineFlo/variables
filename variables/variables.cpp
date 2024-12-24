// variables.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

int main()
{

    // déclaration variable = type + nom
    int AgeUtilisateur = 58; // entier (4 octets)
    short int PetitAge = 12; // short prend peut de memoire (2 octets)
    unsigned int Positive = 85; // unsigned pas de signe seulement positive peut causer des erreurs ne change pas la mémoire 
    /* On peut écrire unsigned short int */
    long int DeuxiemeAge = 636; // entier plus de memoire (8 octets)
    float NbrVirgule = 2.54; // flotant (4 octets)
    double GndNbrVirgule = 8.5845; // nombre à virgule plus grand et précis (8 octets)
    char Lettre = 'a'; // chaine caractere (1 octet)
    bool Condition = false; // true ou false (1 octet)

    std::cout << AgeUtilisateur << '\n';
    


    return 0;
}

