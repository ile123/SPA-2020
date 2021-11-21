#include "dictionary.h"

Dictionary create()
{
    Dictionary rjecnik=(Dictionary*)malloc(sizeof(Word));
    rjecnik->word="Novi Rjecnik";
    rjecnik->count=0;
    rjecnik->next=NULL;
    return rjecnik;
}

void add(Dictionary dict, char* str)
{
    Dictionary novi=(Dictionary*)malloc(sizeof(Word));
    Dictionary temp=dict;
    novi->word=strdup(str);
    novi->count=1;
    novi->next=NULL;
    temp->next=novi;
    temp=temp->next;
}

void print(Dictionary dict)
{
    Dictionary temp=dict;
    while(temp!=NULL)
    {
        printf("Rijec->%s i Broj->%d\n",temp->word,temp->count);
        temp=temp->next;
    }
}
