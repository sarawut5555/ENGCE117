#include <stdio.h>
#define MAX 100

void push(struct Stack* stack, int x);
int pop(struct Stack* stack);
int peek(struct Stack* stack);
int isEmpty(struct Stack* stack);
int size(struct Stack* stack);

struct Stack {
    int arr[MAX];
    int top;
};

int main() {
    struct Stack stack;
    stack.top = -1;

    int n;
    printf("Enter number of elements to push into stack: ");
    scanf("%d", &n);

    if( n == 0 ){
        printf("Error");
        return 0;
    }
    
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        int val;
        scanf("%d", &val);
        push(&stack, val);
    }

    printf("Top element is: %d\n", peek(&stack));
    printf("Size of stack: %d\n", size(&stack));

    printf("Popping elements:\n");
    while (!isEmpty(&stack)) {
        printf("Popped element is: %d\n", pop(&stack));
    }

    printf("Is the stack empty? %s\n", isEmpty(&stack) ? "Yes" : "No");

    return 0;
}

void push(struct Stack* stack, int x) {
    if (stack->top == MAX - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack->arr[++(stack->top)] = x;
    printf("Pushed %d into the stack\n", x);
}

int pop(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack Underflow\n");
        return 0;  
    }
    return stack->arr[(stack->top)--];
}

int peek(struct Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty\n");
        return 0;  
    }
    return stack->arr[stack->top];
}

int isEmpty(struct Stack* stack) {
    return stack->top == -1;
}

int size(struct Stack* stack) {
    return stack->top + 1;
}