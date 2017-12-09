#include <stdio.h>
#include <stdlib.h>
#include "element.h"

Liste *initialisation()
{
    Liste *liste = malloc(sizeof(*liste));
    Element *premierElt = malloc(sizeof(*premierElt));

    if (premierElt == NULL || liste == NULL)
    {
        printf("!!! Erreur allocation memoire lors de l'initialisation, arret du programme !!!");
        exit(EXIT_FAILURE);
    }

    premierElt->nombre = 1;
    premierElt->suivant = NULL;
    liste->premier = premierElt;

    return liste;
}
