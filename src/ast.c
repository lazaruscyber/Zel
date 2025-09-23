#include "ast.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

Node *new_letNode(Node *identifier, Node *expr) {
  Node *node = malloc(sizeof(Node));
  node->type = NODE_LET;
  node->left = identifier;
  node->right = expr;
  node->data.name= NULL;
  return node;
}

Node *new_identifierNode(const char *name) {
  Node *node = malloc(sizeof(Node));
  node->type = NODE_IDENTIFIER;
  node->left = node->right = NULL;
  node->data.name = strdup(name);
  return node;
}

Node *new_intNode(int value) {
  Node *node = malloc(sizeof(Node));
  node->type = NODE_LET;
  node->left = node->right = NULL;
  node->data.value = value;
  return node;
}

void free_node(Node *node) {
  if (!node) return;
  free_node(node->left);
  free_node(node->right);
  if (node->type == NODE_IDENTIFIER && node->data.name)
    free(node->data.name);
  free(node);
}
