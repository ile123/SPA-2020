#include <stdio.h>
#include <stdlib.h>
#define VELICINA_NIZA(x) (sizeof(x)/sizeof(x[0]))

typedef struct {
	float x;
	float y;
}Tocka;

typedef struct {
	Tocka* niz;
	int n;
}Poligon;

Poligon* novi_poligon(float* niz_x, float* niz_y, int n){
	Poligon* ppointer;
	ppointer = (Poligon*)malloc(sizeof(Poligon));
	ppointer->n = n;
	ppointer->niz = (Tocka*)malloc(sizeof(Tocka) * n);
	for (int i = 0; i < n; i++){
		ppointer->niz[i].x = niz_x[i];
		ppointer->niz[i].y = niz_y[i];
	}
	return ppointer;
}

Tocka** pozitivni(Poligon* p, int* np) {
	for (int i = 0; i < p->n; i++) {
		if (p->niz[i].x > 0 && p->niz[i].y > 0) {
			(*np)++;
		}
	}
	Tocka** pozitivni = (Tocka**)malloc(sizeof(Tocka*) * (*np));
	for (int i = 0,k = 0; i < p->n; i++){
		if (p->niz[i].x > 0 && p->niz[i].y > 0)
		{
			pozitivni[k++] = p->niz + i;
		}
	}
	return pozitivni;
}


int* podniz(int* niz, int start, int stop) {
	int* novi_niz = (int*)malloc(sizeof(int) * (stop - start));
	for(int i = start,j=0; i < stop ;i++,j++ ){
		novi_niz[j] = niz[i];
	}
	return novi_niz;
}

int* filtriraj(int* niz, int n, int th, int* nth) {
	int i = 0,j = 0;
	for (i; i < n; i++) {
		if (niz[i] < th) {
			j++;
		}
	}
	int* temp = (int*)malloc(sizeof(int) * j);
	for (int i = 0, j = 0, k = 0; k < n; k++) {
		if (niz[k] < th) {
			temp[i++] = niz[k];
		}
		else {
			nth[j++] = niz[k];
		}
	}
	return temp;
}


int** podijeli(int* niz, int n) {
	int** dvostruki_niz = (int**)malloc(sizeof(int*)*2),i=0;
	if (n % 2 == 0) {
		dvostruki_niz[0] = (int*)malloc(sizeof(int) * (n / 2));
		dvostruki_niz[1] = (int*)malloc(sizeof(int) * (n / 2));
		for (i; i < (n / 2); i++) {
			dvostruki_niz[0][i] = niz[i];
		}
		for (int j = 0, i = (n / 2); j < (n / 2); j++, i++) {
			dvostruki_niz[1][j] = niz[i];
		}
	}
	else {
		dvostruki_niz[0] = (int*)malloc(sizeof(int) * (n / 2));
		dvostruki_niz[1] = (int*)malloc(sizeof(int) * (n - (n / 2)));
		for (i; i < (n / 2); i++) {
			dvostruki_niz[0][i] = niz[i];
		}
		for (int j = 0, i = (n / 2); j < (n - (n / 2)); j++, i++) {
			dvostruki_niz[1][j] = niz[i];
		}
	}
	return dvostruki_niz;
}




void main() {
	/*
	//PRVI ZAD
	int niz[] = { 1,2,3,4,5,6,7,8,9 };
	int* novi_niz = podniz(niz, 2, 6);
	for (int i = 0; i < 4; i++) {
		printf("%d \t", novi_niz[i]);
	}
	*/
	/*
	//DRUGI ZAD
	int niz[] = { 12,3,9,4,7,15,8,21,19 },i=0;
	for (int j = 0; j < 9; j++) {
		if (niz[j] > 10) {
			i++;
		}
	}
	int* niz_neproden = (int*)malloc(sizeof(int)*i);
	int* novi_niz = filtriraj(niz, 9, 10, niz_neproden);
	for (int i = 0; i < 5; i++) {
		printf("%d \t", novi_niz[i]);
	}
	*/
	
	//TRECI ZAD
	/*
	int niz[] = { 1,2,3,4,5,6,7,9,8 };
	int n = VELICINA_NIZA(niz);
	int** dvostruki_niz = podijeli(niz, n);
	if (n % 2 == 0) {
		for (int i = 0; i < (n / 2); i++) {
			printf("%d \t", dvostruki_niz[0][i]);
		}
		printf("\n");
		for (int i = 0; i < (n / 2); i++) {
			printf("%d \t", dvostruki_niz[1][i]);
		}
	}
	else {
		for (int i = 0; i < (n / 2); i++) {
			printf("%d \t", dvostruki_niz[0][i]);
		}
		printf("\n");
		for (int i = 0; i < (n - (n / 2)); i++) {
			printf("%d \t", dvostruki_niz[1][i]);
		}
	}
	*/
	//CETVRTI ZAD
	float niz_x[] = { -2.2,3.1,5.3,-12.5,4.1 };
	float niz_y[] = { 2.6,1.1,-7.2,10.1,15.2 };
	int n = VELICINA_NIZA(niz_x);
	Poligon* poligon = novi_poligon(niz_x, niz_y, n);
	printf("CETVRTI ZAD: \n");
	for (int i = 0; i < n; i++) {
		printf("X: %lf \t Y: %lf \n", poligon->niz[i].x, poligon->niz[i].y);
	}
	//PETI ZAD
	printf("PETI ZAD: \n");
	int np = 0;
	Tocka** pozitivne = pozitivni(poligon, &np);
	for (int i = 0; i < np; i++) {
		printf("X: %lf \t Y: %lf\n", pozitivne[i]->x, pozitivne[i]->y);
	}
}
