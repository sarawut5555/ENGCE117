#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
} ;

void ShowAll( struct studentNode **walk ) ;
void InsNode( struct studentNode **walk, char name[], int age, char sex, float gpa ) ;
void GoNext( struct studentNode ***walk ) ;
void DelNode( struct studentNode **walk ) ;


int main() {
    struct studentNode *start, **now ;
    start = NULL ; now = &start ;
    InsNode( now, "one", 6, 'M', 3.11 ) ; ShowAll( &start ) ;
    InsNode( now, "two", 8, 'F', 3.22 ) ; ShowAll( &start ) ;
    GoNext( &now ) ;
    InsNode( now, "three", 10, 'M', 3.33 ) ; ShowAll( &start ) ;
    InsNode( now, "four", 12, 'F', 3.44 ) ; ShowAll( &start ) ;
    GoNext( &now ) ;
    DelNode( now ) ; ShowAll( &start ) ;
    return 0 ;
}//end function

void ShowAll( struct studentNode **walk ) {
    while( *walk != NULL ) {
        printf( "%s ", (*walk)->name ) ;
        walk = &(*walk)->next ;
    }//end while
    printf( "\n" ) ;
}//end function

void GoNext( struct studentNode ***walk ) {
    if ( (**walk)->next != NULL ) {
        *walk = &(**walk)->next ;
    }//end if
}//end function

void InsNode( struct studentNode **walk, char name[], int age, char sex, float gpa ) {
    struct studentNode *temp = new struct studentNode ;
    strcpy( temp->name, name ) ;
    temp->age = age ;
    temp->sex = sex ;
    temp->gpa = gpa ;

    temp->next = *walk ;
    *walk = temp ;
}//end function

void DelNode( struct studentNode **walk ) {
    struct studentNode *temp = new struct studentNode ;
    temp = (*walk)->next->next ;
    (*walk)->next = temp ;
}//end function