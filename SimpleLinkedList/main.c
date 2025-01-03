#include "sll.h"
#include <stdio.h>

int main() {
    Node *head = NULL;

    push(&head, 10);
    push(&head, 20);
    push(&head, 30);
    push(&head, 40);
    pop(&head);
    pop(&head);

    // Função para percorrer e imprimir a lista
    printList(head);

    freeList(head);
    return 0;
}
