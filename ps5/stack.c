#include <stdlib.h>
#include <stdbool.h>


void push(node* newNode){
    if (node==NULL){
        printf("no memory, exiting program");
        break;

    }else{
        newNode->next = head;
        head=newNode;
    }
}
int getSize(){
    node* current= head;
    int counter=0;
    while(current!=NULL){
        counter=counter+1;
        current= current->next;
    }return counter;
}

node* pop(){
    if (head==NULL){
        printf("reached bottom of stack");
        break;
    }
    else{

        node current= head;
        int value1= current-> value;
        head= current-> next;
        free(current);
        return val1;
    }
}
node* peek(){
    return head;
}

void clearStack(){
    while(!stackEmpty()){
        pop();
    }
}

bool stackEmpty(){
    if(head==NULL){
        return true;
    }
    return false;
}

void printStack(){
    node* current = head;
    while(current!= NULL){
        if (current==head){
            printf("%f", current-> value);
        }else{
            printf("> %f", current-> value);
        }current= current->next;
    }
    printf("\n");
}