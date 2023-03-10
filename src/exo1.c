/*

 Author: Yannis STEFANELLI

 Creation Date: 10-03-2023 10:22:34

 Description :

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

double mypow(double nb, int n)
{
    for (int i = 1; i != n; i++)
        nb += nb;
}

double double_suite(double x, unsigned n)
{
    double U0 = x;
    double Un = U0;
    double Un1 = U0 - 1;

    for (int i = 0; i != n; i++) {
        Un = Un1 + mypow(-1, n) * mypow(x, 2 * n-1) / (2 * n-1);
        Un1 = Un;
        printf("Un1 = %.3lf\n", Un1);
    }
    
    return Un;
}

void exercice1(void)
{
    double a, b;

    a = 5;
    b = 6;

    double_suite (a, b);
}

void exercice2(void)
{
    exercice1();
    for (int i = 1; i != 20; i++) {
        printf("Atan de %d : %.3lf\n", i, atan(50 + i));
    }
}