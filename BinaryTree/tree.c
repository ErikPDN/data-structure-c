#include "tree.h"
#include <stdio.h>
#include <stdlib.h>

Node *createNode(int data) {
  Node *newNode = (Node *)malloc(sizeof(Node));
  if (newNode == NULL) {
    printf("Memory allocation error\n");
    return NULL;
  }
  newNode->data = data;
  newNode->left = newNode->right = NULL;
  return newNode;
}

Node *insertNode(Node *root, int data) {
  if (root == NULL) {
    return createNode(data);
  }
  if (data < root->data) {
    root->left = insertNode(root->left, data);
  } else {
    root->right = insertNode(root->right, data);
  }
  return root;
}

void printInOrder(Node *root) {
  if (root != NULL) {
    printInOrder(root->left);
    printf("%d ", root->data);
    printInOrder(root->right);
  }
}

void printPreOrder(Node *root) {
  if (root != NULL) {
    printf("%d ", root->data);
    printPreOrder(root->left);
    printPreOrder(root->right);
  }
}

void printPostOrder(Node *root) {
  if (root != NULL) {
    printPostOrder(root->left);
    printPostOrder(root->right);
    printf("%d ", root->data);
  }
}

void printBFS(Node *root) {
  if (root == NULL) {
    return;
  }

  // cria uma fila de nós
  Node *queue[MAX_Q_SIZE];
  int front = 0, rear = 0;

  // Enfileira o nó raiz
  queue[rear++] = root;

  while (front < rear) {
    // Desenfileira o nó atual
    Node *current = queue[front++];
    printf("%d ", current->data);

    // Enfileira os filhos do nó atual
    if (current->left != NULL) {
      queue[rear++] = current->left;
    }
    if (current->right != NULL) {
      queue[rear++] = current->right;
    }
  }
}

void freeTree(Node *root) {
  if (root == NULL) {
    return; // Se o nó for NULL, não há nada para liberar
  }

  // Libera os nós das subárvores esquerda e direita
  freeTree(root->left);
  freeTree(root->right);

  // Libera o nó atual
  free(root);
}
