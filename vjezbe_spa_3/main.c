#include "funkcije.h"

void main()
{
	int n1 = 30000;
	int n2 = 10000;
	//dva nesortirana niza Niz B se uvecava
	printf("---------------------\nDva niza nesortirana-Niz B se uvecava\n---------------------\n");
	for (int i = 0;i <=8;i++)
	{
		printf("Trenutacna velicina niza: %d\n", n2);
		int* niz_A = generiranje(n1);
		int* niz_B = generiranje(n2);
		int start1 = clock();
		int* presjek_niz = presjek(niz_A, niz_B, n1, n2);
		int stop1 = clock();
		printf("!-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-!\n");
		printf("Vrijeme:%lf\n", (double)(stop1 - start1) / CLOCKS_PER_SEC);
		printf("!-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-!\n");
		n2 = n2 + 5000;
		free(niz_A);
		free(niz_B);
	}
	n1 = 10000;
	n2 = 30000;
	printf("---------------------\nDva niza nesortirana-Niz A se uvecava\n---------------------\n");
	//dva nesortirana niza Niz A se uvecava
	for (int i = 0;i <=8;i++)
	{
		printf("Trenutacna velicina niza: %d\n", n1);
		int* niz_A = generiranje(n1);
		int* niz_B = generiranje(n2);
		int start1 = clock();
		int* presjek_niz = presjek(niz_A, niz_B, n1, n2);
		int stop1 = clock();
		printf("!-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-!\n");
		printf("Vrijeme:%lf\n", (double)(stop1 - start1) / CLOCKS_PER_SEC);
		printf("!-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-!\n");
		n1 = n1 + 5000;
		free(niz_A);
		free(niz_B);
	}
    n1 = 30000;
    n2 = 10000;
	printf("---------------------\nJedan niz sortiran i jedan nesortiran bez qsort i bez bsearch  niz B se uvecava\n---------------------\n");
	//jeadn niz sortiran jedan nesortiran bez qsort i bsearch niz B se uvecava
	for (int i = 0;i <=8;i++)
	{
		printf("Trenutacna velicina niza: %d\n", n2);
		int* niz_A = generiranje(n1);
		int* niz_B = generiranje(n2);
		int start1 = clock();
		int* presjek_niz = presjek_sortiran_bez_bsearch(niz_A, niz_B, n1, n2);
		int stop1 = clock();
		printf("!-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-!\n");
		printf("Vrijeme:%lf\n", (double)(stop1 - start1) / CLOCKS_PER_SEC);
		printf("!-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-!\n");
		n2 = n2 + 5000;
		free(niz_A);
		free(niz_B);
	}
	n1 = 10000;
	n2 = 30000;
	printf("---------------------\nJedan niz sortiran i jedan nesortiran bez qsort i bez bsearch  niz A se uvecava\n---------------------\n");
	//jeadn niz sortiran jedan nesortiran bez qsort i bsearch niz A se uvecava
	for (int i = 0;i <=8;i++)
	{
		printf("Trenutacna velicina niza: %d\n", n1);
		int* niz_A = generiranje(n1);
		int* niz_B = generiranje(n2);
		int start1 = clock();
		int* presjek_niz = presjek_sortiran_bez_bsearch(niz_A, niz_B, n1, n2);
		int stop1 = clock();
		printf("!-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-!\n");
		printf("Vrijeme:%lf\n", (double)(stop1 - start1) / CLOCKS_PER_SEC);
		printf("!-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-!\n");
		n1 = n1 + 5000;
		free(niz_A);
		free(niz_B);
	}
	n1 = 30000;
	n2 = 10000;
	printf("---------------------\nJedan niz sortiran i jedan nesortiran bez qsort i sa bsearch  niz B se uvecava\n---------------------\n");
	//jedan sortiran jedan nesortiran bez qsort ali sa bsearch niz B se uvecava
	for (int i = 0;i <= 8;i++)
	{
		printf("Trenutacna velicina niza: %d\n", n2);
		int* niz_A = generiranje(n1);
		int* niz_B = generiranje(n2);
		int start1 = clock();
		int* presjek_niz = presjek_sortiran_sa_bsearch(niz_A, niz_B, n1, n2);
		int stop1 = clock();
		printf("!-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-!\n");
		printf("Vrijeme:%lf\n", (double)(stop1 - start1) / CLOCKS_PER_SEC);
		printf("!-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-!\n");
		n2 = n2 + 5000;
		free(niz_A);
		free(niz_B);
	}
	n1 = 10000;
	n2 = 30000;
	printf("---------------------\nJedan niz sortiran i jedan nesortiran bez qsort i sa bsearch  niz A se uvecava\n---------------------\n");
	//jeadn niz sortiran jedan nesortiran bez qsort niz A se uvecava
	for (int i = 0;i <= 8;i++)
	{
		printf("Trenutacna velicina niza: %d\n", n1);
		int* niz_A = generiranje(n1);
		int* niz_B = generiranje(n2);
		int start1 = clock();
		int* presjek_niz = presjek_sortiran_sa_bsearch(niz_A, niz_B, n1, n2);
		int stop1 = clock();
		printf("!-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-!\n");
		printf("Vrijeme:%lf\n", (double)(stop1 - start1) / CLOCKS_PER_SEC);
		printf("!-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-!\n");
		n1 = n1 + 5000;
		free(niz_A);
		free(niz_B);
	}
	printf("---------------------\nJedan niz sortiran i jedan nesortiran sa qsort i  bsearch  niz B se uvecava\n---------------------\n");
	//jeadn niz sortiran jedan nesortiran sa qsort niz B se uvecava
	n1 = 30000;
	n2 = 10000;
	for (int i = 0;i <= 8;i++)
	{
		printf("Trenutacna velicina niza: %d\n", n2);
		int* niz_A = generiranje(n1);
		int* niz_B = generiranje(n2);
		int start1 = clock();
		int* presjek_niz = presjek_sortiran_sa_bsearch_i_qsort(niz_A, niz_B, n1, n2);
		int stop1 = clock();
		printf("!-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-!\n");
		printf("Vrijeme:%lf\n", (double)(stop1 - start1) / CLOCKS_PER_SEC);
		printf("!-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-!\n");
		n2 = n2 + 5000;
		free(niz_A);
		free(niz_B);
	}
	n1 = 10000;
	n2 = 30000;
	printf("---------------------\nJedan niz sortiran i jedan nesortiran sa qsort i  bsearch  niz A se uvecava\n---------------------\n");
	//jeadn niz sortiran jedan nesortiran sa qsort niz B se uvecava
	for (int i = 0;i <= 8;i++)
	{
		printf("Trenutacna velicina niza: %d\n", n1);
		int* niz_A = generiranje(n1);
		int* niz_B = generiranje(n2);
		int start1 = clock();
		int* presjek_niz = presjek_sortiran_sa_bsearch_i_qsort(niz_A, niz_B, n1, n2);
		int stop1 = clock();
		printf("!-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-!\n");
		printf("Vrijeme:%lf\n", (double)(stop1 - start1) / CLOCKS_PER_SEC);
		printf("!-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-*-_-!\n");
		n1 = n1 + 5000;
		free(niz_A);
		free(niz_B);
	}
	printf("\nAKO SE OVO ISPISE ONDA ZNACI DA JE SVE ISLO KAKO TRIBA!!!!!!!!!!!!!\n");
}
