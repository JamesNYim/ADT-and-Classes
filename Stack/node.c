#include "node.h"
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
Node *node_create(uint32_t data) 
{
    Node *n = (Node *) malloc(sizeof(Node));
    if (n != NULL) {
        n->right = NULL;
        n->left = NULL;
        n->data = data;
    }
    return n;
}

void node_delete(Node **n) {
    n = NULL;
    free(n);
}

void node_print(Node *n) {
    printf("[data: %lu\n", n->data);
}
