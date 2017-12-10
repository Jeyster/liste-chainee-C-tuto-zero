#include <stdio.h>
#include <stdlib.h>
#include "element.h"


List *initialization(int number)
{
    List *list = malloc(sizeof(*list));
    Element *firstElt = malloc(sizeof(*firstElt));

    if (firstElt == NULL || list == NULL)
    {
        printf("!!! Erreur allocation memoire lors de l'initialisation, arret du programme !!!\n");
        exit(EXIT_FAILURE);
    }

    firstElt->number = number;
    firstElt->next = NULL;
    list->first = firstElt;
    list->listSize = 1;

    return list;
}


Element *addElement(List *list, int elementPosition, int number)
{
    Element *newElt = malloc(sizeof(*newElt));
    Element *previousElt = malloc(sizeof(*previousElt));
    if ((newElt == NULL) || (previousElt == NULL))
    {
        printf("!!! Erreur allocation memoire lors de l'ajout d'un element, arret du programme !!!\n");
        exit(EXIT_FAILURE);
    }
    newElt->number = number;

    /* Ajout de l'element en premiere position */
    if (elementPosition < 2)
    {
        newElt->next = list->first;
        list->first = newElt;
    }
    /* Ajout de l'element en derniere position */
    else if (elementPosition > list->listSize)
    {
        previousElt = getElement(list, list->listSize);
        newElt->next = previousElt->next;
        previousElt->next = newElt;
    }
    /* Ajout de l'element à une position intermédiaire */
    else
    {
        previousElt = getElement(list, elementPosition-1);
        newElt->next = previousElt->next;
        previousElt->next = newElt;
    }

    list->listSize++;

    return newElt;
}


void displayList(List *list)
{
    printf("Taille de la liste : %d\n", list->listSize);

    Element *currentElt = list->first;
    while(currentElt != NULL)
    {
        printf("%d -> ",currentElt->number);
        currentElt = currentElt->next;
    }

    printf("NULL\n");
}


Element *getElement(List *list, int elementPosition)
{
    if ((elementPosition > list->listSize) || (elementPosition < 1))
    {
        printf("!!! ERREUR : l'element recherche n'existe pas, arret du programme !!!\n");
        exit(EXIT_FAILURE);
    }

    Element *currentElt = list->first;
    for (int i = 1; i < elementPosition; i++)
    {
        currentElt = currentElt->next;
    }

    return currentElt;
}
