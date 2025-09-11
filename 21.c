#include <stdio.h>

struct node{
    int data;
    struct node *next;
};

int main(){
    struct node *newnode, *secondnode;

    // Create first node
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = 2;
    newnode->next = NULL;


    // Free memory
    free(secondnode);
    free(newnode);
}