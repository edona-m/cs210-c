#include <stdio.h>
#include "node.c"
#include "list.c"
#include "node.h"


int main(){
    int arr[]= {89, 39, 18, 96, 71, 25, 2, 55, 60, -8, 9, 42, 69, 96, 24};
    int arrSize= (int)(sizeof(arr)/sizeof(arr[0]));
    for (int i = 1; i<arrSize; i++){
        addNode(createNode(arr[i]));
    }

    printf("\nOur created linked list is:   ");
    printList();

    deleteLargest();
    printf("\nOur list without largest values is:   ");
    printList();


    bubblesort();
    printf("\nOur list sorted with bubble sort  ");
    printList();


    int counter=0;
    node* current= Head;
    while(current!=NULL){
        counter+=1;
        current= current->next;
    }
    printf("\nnode count: %d", counter);



}




