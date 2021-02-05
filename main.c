#include <stdio.h>
#include "aTester.h"
#include <stdlib.h>

#define TAB_SIZE 5

int main() {


    printf("\n========== Test afficheBool ==========\n\n");

    /* Ecrire ici des tests pour afficheBool */
    printf("should be faux: ");
    afficheBool(0);
    printf("should be vrai: ");
    afficheBool(1);
    printf("should be ni vrai ni faux: ");
    afficheBool(2);
    printf("should be ni vrai ni faux: ");
    afficheBool(-1);
    printf("should be ni vrai ni faux: ");
    afficheBool((rand() % 97) + 3); // entre 2 et 99
    printf("should be ni vrai ni faux: ");
    afficheBool(((rand() % 99) + 1) * (-1)); // entre -1 et -99

    printf("\n========== Test estPremier (v1 et v2) ==========\n\n");

    /* Ecrire ici des tests pour estPremier1 et estPremier2 */
    printf("v1 - should display error message: ");
    if (estPremier1(1) == 1) {
        printf("...but test failed\n");
    }
    printf("v1 - should display error message: ");
    if (estPremier1((rand() % 100) * (-1)) == 1) { // entre 0 et -99
        printf("...but test failed\n");
    }
    printf("v1 - should say 'OK': ");
    if (estPremier1(47) == 1) {
        printf("OK\n");
    } else {
        printf("...but test failed\n");
    }

    printf("v2 - should display error message: ");
    if (estPremier2(1) == 1) {
        printf("...but test failed\n");
    }
    printf("v2 - should display error message: ");
    if (estPremier2((rand() % 100) * (-1)) == 1) { // entre 0 et -99
        printf("...but test failed\n");
    }
    printf("v2 - should say 'OK': ");
    if (estPremier2(47) == 1) {
        printf("OK\n");
    } else {
        printf("...but test failed\n");
    }

    printf("\n========== Test maxTab (v1, v2 et v3) ==========\n\n");

    /* Ecrire ici des tests pour maxTab1, maxTab2 et maxTab3 */
    int tab1[TAB_SIZE] = {0, 5, -4, 6, 8};
    int tab2[TAB_SIZE] = {0, -5, -4, -6, -8};
    int tab3[TAB_SIZE] = {0, 5, -4, 8, 6};
    int tab4[TAB_SIZE] = {8, 0, 5, -4, 6};
    int tab5[TAB_SIZE] = {-6, -5, -4, -2, -3};

    printf("v1 - max should say '8': ");
    if (maxTab1(tab1, TAB_SIZE) == 8) {
        printf("OK\n");
    } else {
        printf("...but test failed\n");
    }
    printf("v1 - max should say '0': ");
    if (maxTab1(tab2, TAB_SIZE) == 0) {
        printf("OK\n");
    } else {
        printf("...but test failed\n");
    }
    printf("v1 - max should say '8': ");
    if (maxTab1(tab3, TAB_SIZE) == 8) {
        printf("OK\n");
    } else {
        printf("...but test failed\n");
    }
    printf("v1 - max should say '8': ");
    if (maxTab1(tab4, TAB_SIZE) == 8) {
        printf("OK\n");
    } else {
        printf("...but test failed\n");
    }
    printf("v1 - max should say '-2': ");
    if (maxTab1(tab5, TAB_SIZE) == -2) {
        printf("OK\n");
    } else {
        printf("...but test failed\n");
    }

    printf("v2 - max should say '8': ");
    if (maxTab2(tab1, TAB_SIZE) == 8) {
        printf("OK\n");
    } else {
        printf("...but test failed\n");
    }
    printf("v2 - max should say '0': ");
    if (maxTab2(tab2, TAB_SIZE) == 0) {
        printf("OK\n");
    } else {
        printf("...but test failed\n");
    }
    printf("v2 - max should say '8': ");
    if (maxTab2(tab3, TAB_SIZE) == 8) {
        printf("OK\n");
    } else {
        printf("...but test failed\n");
    }
    printf("v2 - max should say '8': ");
    if (maxTab2(tab4, TAB_SIZE) == 8) {
        printf("OK\n");
    } else {
        printf("...but test failed\n");
    }
    printf("v2 - max should say '-2': ");
    if (maxTab2(tab5, TAB_SIZE) == -2) {
        printf("OK\n");
    } else {
        printf("...but test failed\n");
    }

    printf("v3 - max should say '8': ");
    if (maxTab3(tab1, TAB_SIZE) == 8) {
        printf("OK\n");
    } else {
        printf("...but test failed\n");
    }
    printf("v3 - max should say '0': ");
    if (maxTab3(tab2, TAB_SIZE) == 0) {
        printf("OK\n");
    } else {
        printf("...but test failed\n");
    }
    printf("v3 - max should say '8': ");
    if (maxTab3(tab3, TAB_SIZE) == 8) {
        printf("OK\n");
    } else {
        printf("...but test failed\n");
    }
    printf("v3 - max should say '8': ");
    if (maxTab3(tab4, TAB_SIZE) == 8) {
        printf("OK\n");
    } else {
        printf("...but test failed\n");
    }
    printf("v3 - max should say '-2': ");
    if (maxTab3(tab5, TAB_SIZE) == -2) {
        printf("OK\n");
    } else {
        printf("...but test failed\n");
    }

    return 0;
}