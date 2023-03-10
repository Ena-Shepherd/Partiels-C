/*

 Author: Yannis STEFANELLI

 Creation Date: 10-03-2023 10:22:39

 Description :

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef double ElementTableau;
typedef ElementTableau* Tableau;

void permuter(ElementTableau* a, ElementTableau* b)
{
    ElementTableau buffer;

    buffer = *a;
    *a = *b;
    *b = buffer;
}

void permuter_Tableau(Tableau tab, unsigned size)
{
    for(int i = 1; tab[i] != size; i++)
        permuter(&tab[i], &tab[i-1]);
}

Tableau creer_Tableau(unsigned size)
{
    return malloc(sizeof(Tableau) * size);
}

void liberer_Tableau(Tableau* tab)
{
    free(*tab);
}

void afficher(const Tableau tab, unsigned size)
{
    for (int i = 0; tab[i] != size; i++)
        printf("Tab de %d : %.3lf", i, tab[i]);
}

void exercice1_2()
{
    int size = 3;
    Tableau toto = creer_tableau(size);

    permuter_tableau(toto, size);
    afficher(toto, size);

    liberer_tableau(toto);
}