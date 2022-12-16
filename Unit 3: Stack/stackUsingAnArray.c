#include <stdio.h>
#define MAXSIZE 10
int stack[MAXSIZE];
int top = -1;
int isempty()
{
    if (top == -1)
        return 1;
    else
        return 0;
}
int isfull()
{
    if (top == MAXSIZE - 1)
        return 1;
    else
        return 0;
}
int peek()
{
    if (isempty())
        printf("Stack is empty.\n");
    else
        return stack[top];
}
void push(int data)
{
    if (isfull())
        printf("Stack is full.\n");
    else
        stack[++top] = data;
}
int pop()
{
    if (isempty())
        printf("Stack is empty.\n");
    else
        return stack[top--];
}
int main()
{
    push(1);
    push(12);
    push(15);
    push(20);
    printf("Element at top of the stack: %d\n", peek());
    printf("Popped element: %d\n", pop());
    printf("Popped element: %d\n", pop());
    printf("Element at top of the stack: %d\n", peek());
}