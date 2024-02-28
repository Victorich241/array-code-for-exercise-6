#include <stdio.h>
#include <stdlib.h>
Stack* createStack(int size) {
    Stack *stack = (Stack*)malloc(sizeof(Stack));
    stack->size = size;
    stack->top = -1;
    stack->items = (int*)malloc(sizeof(int) * size);
    return stack;
}

void push(Stack *stack, int item) {
    if (stack->top == stack->size - 1) {
        printf("Stack overflow\n");
        return;
    }
    stack->items[++stack->top] = item;
}

int pop(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow\n");
        return -1;
    }
    return stack->items[stack->top--];
}

int peek(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return -1;
    }
    return stack->items[stack->top];
}

int isEmpty(Stack *stack) {
    return stack->top == -1;
}

void clear(Stack *stack) {
    stack->top = -1;
}

int stackCount(Stack *stack) {
    return stack->top + 1;
}

void stackDup(Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return;
    }
    int top = peek(stack);
    push(stack, top);
}

void stackAdd(Stack *stack) {
    if (stackCount(stack) < 2) {
        printf("Insufficient elements to perform addition\n");
        return;
    }
    int a = pop(stack);
    int b = pop(stack);
    push(stack, a + b);
}


}
