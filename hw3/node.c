
#include<stdlib.h>
#include "node.h"



node* createNode(int value) {
    node* temp= NULL;
    temp= (struct node*)malloc(sizeof(node));
    temp->val = value;
    return temp;

}

