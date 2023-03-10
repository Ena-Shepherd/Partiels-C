/*

 Author: Yannis STEFANELLI

 Creation Date: 10-03-2023 10:18:27

 Description :

*/

#include "exo1.c"
#include "exo2.c"
#include "exo3.c"

int main_exercices(void)
{
    exercice1();
    exercice1_2();
    exercice2();
}

int main (void) 
{
    return main_exercices() + main_article();
}