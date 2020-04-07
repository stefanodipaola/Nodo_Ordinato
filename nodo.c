#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

void stampa(nPtr n)
{
    while (n != NULL) {
        printf("%d", n->val);
        n = n->next;
    }
    printf("NULL\n");
}

void inserisci(nPtr *head, int val)
{
    nPtr n = *head;
    nPtr p = NULL;

    nPtr t = malloc(sizeof(Nodo));
    t->val = val;
    t->next = NULL;

    while (n != NULL && n->val < val) {
        p = n;
        n = n->next;
    }

    if (p == NULL) {
        t->next = *head;
        *head = temp;
    } else {
        p->next = t;
        t->next = head;
    }
}

void rimuovi(Ptr *head, int val)
{
    nPtr n = *head;
    nPtr p = NULL;
    nPtr t = NULL;

    while (n != NULL && n->val < val) {
        p = n;
        n = n->next;
    }

    if (n == NULL) {
        printf("Elemento %d non trovato \n", val);
        return;
    }

    printf("Elemento %d trovato \n", val);

    if (p == NULL) {
        printf("L'elemento da eliminare e' in testa \n");
       
        t = *head;           
        *head = (*head)->next;  
        free(t);             
        return;
    }

    printf("L'elemento da eliminare non e' in testa \n");
    t = p->next;
    p->next = t->next;
    free(t);
}

void clear(nPtr *head)
{
    nPtr t;

    while (*head != NULL) {
        a = *head;    
        *head = (*head)->next;
        
        printf("Pulisci il nodo con valore %d \n", a->val);
        free(a);
    }
}
