
#ifndef NODE_H
#define NODE_H

typedef struct Node{
    int val;
    struct node* next;
}Node;

Node* HEADnode;

struct Node* createNode(int value);

#endif