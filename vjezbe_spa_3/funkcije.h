#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define velicina_niza(x) (sizeof(x)/sizeof(x[0]))

#ifndef FUNKCIJE_H
#define FUNKCIJE_H
//potrebno za bin search
int cmp(const void* a, const void* b);
//generira random brojeve
int* generiranje(int n);
//netriba obajsnjavat
void shuffle(int* niz1, int n);
//nedami se pisat
int presjek(int* niz_A, int* niz_B, int n1, int n2);
//neadmi se pisat
int presjek_sortiran_bez_bsearch(int* niz_A, int* niz_B, int n1, int n2);
//nedami se pisat
int presjek_sortiran_sa_bsearch(int* niz_A, int* niz_B, int n1, int n2);
//nedami se pisat
int presjek_sortiran_sa_bsearch_i_qsort(int* niz_A, int* niz_B, int n1, int n2);



#endif // FUNKCIJE_H
