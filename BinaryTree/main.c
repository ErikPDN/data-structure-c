#include "tree.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
  Node *root = NULL;

  // Inserindo elementos na árvore
  root = insertNode(root, 50);
  root = insertNode(root, 30);
  root = insertNode(root, 20);
  root = insertNode(root, 40);
  root = insertNode(root, 70);
  root = insertNode(root, 60);
  root = insertNode(root, 80);
  root = insertNode(root, 10);

  // Imprime os valores da árvore em ordem
  printf("Árvore em ordem: ");
  printInOrder(root);
  printf("\n");

  // Impime os valores da árvore em pré-ordem
  printf("Árvore em pré-ordem: ");
  printPreOrder(root);
  printf("\n");

  // Impime os valores da árvore em pré-ordem
  printf("Árvore em post-ordem: ");
  printPostOrder(root);
  printf("\n");

  printf("Árvore em largura (BFS): ");
  printBFS(root);
  printf("\n");

  freeTree(root);
  return 0;
}
