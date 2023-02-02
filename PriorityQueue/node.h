#pragma once

#include <stdint.h>

typedef struct Node Node;

struct Node {
    Node *left;
    Node *right;
	uint32_t data;
};

Node *node_create(uint32_t data);

void node_delete(Node **n);

void node_print(Node *n);
