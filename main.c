#include "contref.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int *v = malloc2(sizeof(int));
    *v = 10;
    int *w = malloc2(sizeof(int));
    dump();
    *w = 20;
    atrib2(v, w);
    dump();
    char *c = malloc2(sizeof(char));
    *c = 'Z';
    dump();
    atrib2(w, NULL);
    dump();
    return 0;
}

















void *atrib2(void **end1, void *end2)
{
    if((*end1)!=NULL)
    {
        contador *aux = lista;
    }
}
