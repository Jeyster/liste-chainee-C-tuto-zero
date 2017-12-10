#include <stdio.h>
#include <stdlib.h>
#include "element.h"

int main()
{
    List *list = initialization(1);

    if (list == NULL)
    {
        printf("!!! Erreur lors de l'initialisation, arret du programme !!!\n");
        exit(0);
    }

    addElement(list, 1, 2);
    addElement(list, 1, 3);
    addElement(list, 5, 4);
    displayList(list);

    /* !!! DEBUG !!! */
    /*
    int elementPosition = 4;
    printf("Element a la position %d : %d\n", elementPosition, getElement(list, elementPosition)->number);
    */
    /*
    printf("Pointeur de la liste : %d\n", list->first);
    printf("Adresse premier element : %d\n", &(list->first->number));
    printf("Premier element : %d\n", list->first->number);
    printf("Pointeur du premier element : %d\n", list->first->next);
    printf("Adresse dernier element : %d\n", &(list->first->next->number));
    printf("Dernier element : %d\n", list->first->next->number);
    printf("Pointeur du dernier element : %d\n", list->first->next->next);
    */
    /* !!! DEBUG !!! */

    return 0;
}
