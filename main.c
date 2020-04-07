#include <stdio.h>
#include "nodo.h"


int main(){
    nPtr head = NULL;
   
    stampa(head);

    inserisci(&head, 5);
   
    stampa(head);

    inserisci(&head, 8);
    
    stampa(head);

    inserisci(&head, 2);
   
    stampa(head);

    inserisci(&head, 3);
  
    stampa(head);

    inserisci(&head, 10);
  
    stampa(head);

    rimuovi(&head, 7);
  
    stampa(head);

    rimuovi(&head, 4);
   
    stampa(head);

    
    rimuovi(&head, 25);

    rimuovi(&head, 30);
    
    stampa(head);

    clear(&head);
 return 0;
}
