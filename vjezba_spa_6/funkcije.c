#include "funkcije.h"

Queue* create(){
   Queue* q=(Queue*)malloc(sizeof(Queue));
   q->kapacitet=max_velicina;
   q->prvi=NULL;
   q->zadnji=NULL;
   q->buffer=(Element*)malloc(sizeof(Element)*max_velicina);
   q->prvi=0;
   q->zadnji=0;
   q->velicina_trenutna=0;
   return q;
}

void dodavanje_queue(Queue* q,int broj){
   if(q->kapacitet=q->velicina_trenutna){
    return;
   }
   q->buffer[q->zadnji]=broj;
   q->zadnji=(q->zadnji+1)%q->kapacitet;
   q->velicina_trenutna++;
}
