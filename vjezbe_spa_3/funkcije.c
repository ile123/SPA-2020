#include "funkcije.h"

int cmp(const void* a, const void* b) {
	int va = *((int*)a);
	int vb = *((int*)b);
	return va - vb;
}
//1.zad
//Kompleksnost T(n)=
int* generiranje(int n)
{
	int* slucajni_niz = (int*)malloc(sizeof(int) * n);
	slucajni_niz[0] = rand() % 5;
	for (int i = 1; i < n; i++)
	{
		slucajni_niz[i] = slucajni_niz[i - 1] + rand() % 5 + 1;
	}
	return slucajni_niz;
}
//2.zad
void shuffle(int* niz1, int n)
{
	for (int i = 0; i < n; i++)
	{
		int j = (rand() * rand()) % n;
		int tmp = niz1[i];
		niz1[i] = niz1[j];
		niz1[j] = tmp;
	}
}
//3.zad
int presjek(int* niz_A, int* niz_B, int n1, int n2)
{
	int brojac = 0;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			if (niz_A[i] == niz_B[j])
			{
				brojac++;
			}
		}
	}
	return brojac;
}


int presjek_sortiran_bez_bsearch(int* niz_A, int* niz_B, int n1, int n2)
{
	int temp;
	for (int i = 0; i < n2; i++)
	{
		for (int j = i + 1; j < n2; j++)
		{
			if (niz_B[i] > niz_B[j])
			{
				temp = niz_B[i];
				niz_B[i] = niz_B[j];
				niz_B[j] = temp;
			}
		}
	}
	int brojac = 0;
	for (int i = 0; i < n1; i++)
	{
		for (int j = 0; j < n2; j++)
		{
			if (niz_A[i] == niz_B[j])
			{
				brojac++;
			}
		}
	}
	return brojac;
}
//4.zad
int presjek_sortiran_sa_bsearch(int* niz_A, int* niz_B, int n1, int n2)
{
	int temp;
	for (int i = 0; i < n2; i++)
	{
		for (int j = i + 1; j < n2; j++)
		{
			if (niz_B[i] > niz_B[j])
			{
				temp = niz_B[i];
				niz_B[i] = niz_B[j];
				niz_B[j] = temp;
			}
		}
	}
	int brojac = 0;
	int* trazenje_binarno;
	for (int i = 0; i < n1; i++)
	{
		trazenje_binarno = (int*)bsearch(&niz_A[i], niz_B, n2, sizeof(int), cmp);
		if (trazenje_binarno != NULL)
		{
			brojac++;
		}
	}
	return brojac;
}

int presjek_sortiran_sa_bsearch_i_qsort(int* niz_A, int* niz_B, int n1, int n2)
{
	qsort(niz_B, n2, sizeof(int), cmp);
	int brojac = 0;
	int* trazenje_binarno;
	for (int i = 0; i < n1; i++)
	{
		trazenje_binarno = (int*)bsearch(&niz_A[i], niz_B, n2, sizeof(int), cmp);
		if (trazenje_binarno != NULL)
		{
			brojac++;
		}
	}
	return brojac;
}
