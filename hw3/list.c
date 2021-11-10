#include<stdio.h>
#include <stdbool.h>
#include "node.h"


bool addNode(node* newNode){
    newNode->next= Head;
    Head = newNode;
    return true;

}

node* findNode(int value){

    struct node* current = Head;
    while(current != NULL){
        if(current-> val == value){
            return current;
        }

        current= current-> next;
    }

}

bool deleteNode(node* node){

    struct node *current=Head ;

    while(current->next != NULL && current->next != node){
        current= current->next;
    }
    current-> next= current->next->next;
    return true;


}
int findLargest(){
    struct node* current= Head;
    int max= current->val;
    while(current!=NULL){
        if (max< current->val){
            max= current->val;
        }
        current= current->next;
    }

return max;

}
void deleteLargest(void){
    int lval=  findLargest();
    struct node* current= Head;
    while(current!= NULL){
        if (current->val== lval){

            deleteNode(findNode(lval));
        }
        current=current-> next;
    }
}
void bubblesort(void){
bool s;
    struct node* current;
    struct node* current2=NULL;
    if(Head==NULL){
        return;
    }
    do{
        s=false;
        current=Head;
        while(current->next!=current2){
            if(current->val > current->next->val){

                int temp= current ->val;
                current->val= current-> next->val;
                current->next->val=temp;
                s=true;
            } current=current->next;
        } current2=current;
    }while(s);

}



void printList(void) {
    node * current = Head;
    while(current!= NULL){
        printf("%d    ", current->val);
        current = current->next;
    }
}
