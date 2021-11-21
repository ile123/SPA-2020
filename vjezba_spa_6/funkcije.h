#include <stdio.h>
#include <stdlib.h>

#ifndef FUNKCIJE_H
#define FUNCKIJE_H
#define max_velicina 10000
typedef struct Element{
    void* data;
    int prioritet;
}Element;

typedef struct{
    int prvi,zadnji,kapacitet,velicina_trenutna;
    Element* buffer;
}Queue;

Queue* create();
void dodavanje_queue(Queue* q);




#endif // FUNKCIJE_H
