#ifndef TREE_H
#define TREE_H

#define MAX_Q_SIZE 100
// Definição da estrutura de um nó da árvore

typedef struct node {
  int data;
  struct node *left;
  struct node *right;
} Node;

// Função para manipulação da árvore
Node *createNode(int data);
Node *insertNode(Node *root, int data);
void printInOrder(Node *root);
void freeTree(Node *root);
void printPostOrder(Node *root);
void printPreOrder(Node *root);
void printBFS(Node *root);

#endif // TREE_H
