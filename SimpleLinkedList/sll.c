#include "sll.h"
#include <stdio.h>
#include <stdlib.h>

Node *createNode(int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  if (newNode == NULL) {
    printf("Memory allocation failed\n");
    exit(1);
  }

  newNode->data = data;
  newNode->next = NULL;
  return newNode;
}

void push(Node **head, int data) {
  if (*head == NULL) { // Se a lista está vazia, cria o primeiro nó
    *head = createNode(data);
  } else {
    Node *newNode = createNode(data);
    Node *current = *head;
    while (current->next != NULL) {
      current = current->next;
    }
    current->next = newNode;
  }
}

int pop(Node **head) {
  if (*head == NULL) {
    printf("Empty list\n");
    return -1;
  }

  Node *current = *head;
  Node *previous = NULL;

  while (current->next != NULL) {
    previous = current;
    current = current->next;
  }

  int data = current->data;

  if (previous == NULL) {
    *head = NULL;
  } else {
    previous->next = NULL;
  }
  free(current);
  return data;
}

void printList(Node *head) {
  Node *current = head;
  while (current != NULL) {
    printf("%d -> ", current->data);
    current = current->next;
  }
  printf("NULL\n");
}

void freeList(Node *head) {
  Node *current = head;
  while (current != NULL) {
    Node *next = current->next;
    free(current);
    current = next;
  }
}
