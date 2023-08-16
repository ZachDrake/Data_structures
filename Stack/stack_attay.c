#include <limits.h>
#include <stdbool.h>
#include <stdio.h>

#define STACK_SIZE 5
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

int mystack [STACK_SIZE];
int top = EMPTY;

bool push(int value) {
    if (top >= STACK_SIZE-1) return false;

    top++;
    mystack[top] = value;
    return true;
}

int pop () {
    if (top == EMPTY) return STACK_EMPTY;

    int result = mystack[top];
    top--;
    return result;
}

int main() {
    push(20);
    push(50);
    push(22);
    push(60);

    int t;
    while ((t = pop()) != STACK_EMPTY) {
        printf("t = %d\n", t);
    } 

    return 0;
}