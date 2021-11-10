

#include <stdbool.h>
#ifndef HW3_2_LIST_H
#define HW3_2_LIST_H


bool addNode(node* newNode);

node* findNode(int value);

bool deleteNode (node* node);

void deleteLargest(void);

int findLargest();

void bubblesort(void);

void printList(void);
#endif
