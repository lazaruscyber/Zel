#ifndef AST_H
#define AST_H

typedef enum {
  NODE_LET,
  NODE_IDENTIFIER,
  NODE_INT,
  NODE_OPERATOR
} NodeType;

typedef struct Node {
  NodeType type;
  union {
    char *name;
    int value;
  } data;
  struct Node *left;
  struct Node *right;
} Node;

Node *new_letNode(Node *identifier, Node *expr);
Node *new_identifierNode(const char *name);
Node *new_int_node(int value);
void free_node(Node *node);

#endif
