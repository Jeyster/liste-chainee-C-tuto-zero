#ifndef DEF_ELEMENT

#define DEF_ELEMENT

/* Structures */
typedef struct Element Element;
struct Element
{
    int nombre;
    Element *suivant;
};

typedef struct Liste Liste;
struct Liste
{
    Element *premier;
};

#endif // DEF_ELEMENT
