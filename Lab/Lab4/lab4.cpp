#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[20];
    int age;
    float gpa;
    struct studentNode *next ;
} typedef Node ;

void saveNode( Node *child ) ;
void GoNext( Node **now ) ; //Prient Current, then move

int main() {
    Node *start, *now ;
    start = new Node ;
    saveNode( start ) ;

    start->next = new Node ;
    saveNode( start->next ) ;

    start->next->next = new Node ;
    saveNode( start->next->next ) ;

    now = start ;
    GoNext( &now ) ; GoNext( &now ) ; GoNext( &now ) ;
    return 0;
}

void saveNode( Node *child ) {
    printf("Enter (Name Age GPA): ");
    scanf("%s %d %f", child->name, &child->age, &child->gpa);
    child->next = NULL;
}

void GoNext( Node **now ) {
    if (*now == NULL) {
        printf("End of list.\n");
        return;
    }
    printf("[%s, %d, %.1f]\n", (*now)->name, (*now)->age, (*now)->gpa); // Print current node
    *now = (*now)->next;
}