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

    // Create second node
    secondnode = (struct node*)malloc(sizeof(struct node));
    secondnode->data = 5;
    secondnode->next = NULL;

    // Link first node to second node
    newnode->next = secondnode;

    // Optional: print data to verify
    printf("First node data: %d\n", newnode->data);
    printf("Second node data: %d\n", newnode->next->data);

    // Free memory
    free(secondnode);
    free(newnode);
}