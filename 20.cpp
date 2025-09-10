#include <bits/stdc++.h>

#define max 5 // maximum size of stack
int stack[max];
int top = -1;

void push(int value)
{
    if (top == max - 1)
    {
        printf("stackoverflow");
    }
    else
    {
        top++;
        stack[top] = value;
    }
}

void pop()
{
    if (top == -1)
    {
        printf("no more elements to pop");
    }
    else
    {
        top--;
    }
}
void peek()
{
    if (top == -1)
    {
        printf("stack is empty");
    }
    else
    {
        printf("%d\n", stack[top]);
    }
}
void display()
{
    for (int i = 0; i <= top; i++)
    {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

// Main
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    push(50);
    display();
    pop();
    display();
    peek();
    return 0;
}
