#ifndef NODO_H
#define NODO_H

struct nodo {
    int val;
    struct nodo *next;
};
typedef struct nodo Nodo;
typedef struct nodo *nPtr;

void stampa(nPtr head);
void inserisci(nPtr *head, int val);
void rimuovi(nPtr *head, int val);
void clear(nPtr *head);

#endif
