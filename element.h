#ifndef DEF_ELEMENT

#define DEF_ELEMENT

/* Structures */
typedef struct Element Element;
struct Element
{
    int number;
    Element *next;
};

typedef struct List List;
struct List
{
    Element *first;
    int listSize;
};


/* Prototypes */
List *initialization(int number);
Element *addElement(List *list, int elementPosition, int number);
void displayList(List *list);
Element *getElement(List *list, int elementPosition);

#endif // DEF_ELEMENT
