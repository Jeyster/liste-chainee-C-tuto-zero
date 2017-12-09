#include <stdio.h>
#include <stdlib.h>
#include "element.h"

int main()
{
    Liste *liste = initialisation();

    if (liste == NULL)
    {
        printf("!!! Erreur lors de l'initialisation, arret du programme !!!");
        exit(0);
    }

    /* !!! DEBUG !!! */
    /*
    printf("Pointeur de la liste : %d\n", liste->premier);
    printf("Adresse premier element : %d\n", &(liste->premier->nombre));
    printf("Premier element : %d\n", liste->premier->nombre);
    printf("Pointeur du premier element : %d\n", liste->premier->suivant);
    */
    /* !!! DEBUG !!! */

    return 0;
}
