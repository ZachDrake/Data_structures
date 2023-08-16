#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 5
#define EMPTY (-1)
#define STACK_EMPTY INT_MIN

typedef struct node {
    int value;
    struct node* next;
}node;

#define STACK_EMPTY INT_MIN

node* head = NULL;

bool push(int value) {
    node *newnode = malloc(sizeof(node));
    if (newnode == NULL) return false;

    newnode->value = value;
    newnode->next = head;
    head = newnode;
    return true;
}

int pop () {
    if (head == NULL) return STACK_EMPTY;

    int result = head->value;
    node *tmp = head;
    head = head->next;
    free(tmp);
    return result;
}

int main() {
    push(10);
    push(20);
    push(30);
    push(40);

    int t;
    while ((t = pop()) != STACK_EMPTY) {
        printf("t = %d\n", t);
    } 

    return 0;
}