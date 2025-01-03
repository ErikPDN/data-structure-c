#ifndef SLL_H
#define SLL_H

typedef struct node {
  int data;
  struct node *next;
} Node;

Node *createNode(int data);
void push(Node **head, int data);
void printList(Node *head);
int pop(Node **head);
void freeList(Node *head);

#endif // SLL_H
