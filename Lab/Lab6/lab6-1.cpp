#include <stdio.h>
#include <string.h>

struct studentNode {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
    struct studentNode *next ;
    struct studentNode *back ;
} ;

void ShowAll( struct studentNode *walk ) ;
struct studentNode *AddNode( struct studentNode **walk, char name[], int age, char sex, float gpa ) ;
void InsNode( struct studentNode *walk, char name[], int age, char sex, float gpa, struct studentNode **begin ) ;
void DelNode( struct studentNode **walk, struct studentNode **begin ) ;
void GoBack( struct studentNode **walk ) ;

int main() {
    struct studentNode *start, *now ;
    start = NULL ;
    now = AddNode( &start, "one", 6, 'M', 3.11 ) ; ShowAll( start ) ;
    now = AddNode( &start, "two", 8, 'F', 3.22 ) ; ShowAll( start ) ;
    InsNode( now, "three", 10, 'M', 3.33, &start) ; ShowAll( start ) ;
    InsNode( now, "four", 12, 'F', 3.44, &start) ; ShowAll( start ) ;
    GoBack( &now ) ;
    DelNode( &now, &start ) ; ShowAll( start ) ;
    DelNode( &now, &start ) ; ShowAll( start ) ;
    DelNode( &now, &start ) ; ShowAll( start ) ;
    return 0 ;
}//end function

void ShowAll( struct studentNode *walk ) {
    while( walk != NULL ) {
        printf( "%s ", walk->name ) ;
        walk = walk->next ;
    }//end while
    printf( "\n" ) ;
}//end function

struct studentNode *AddNode( struct studentNode **walk, char name[], int age, char sex, float gpa ) {
    
    struct studentNode *temp = NULL ;
    
    while( *walk != NULL ) {
        temp = *walk ;
        walk = &(*walk)->next ;
    }//end while

    *walk = new struct studentNode ;
    strcpy( (*walk)->name, name ) ;
    (*walk)->age = age ;
    (*walk)->sex = sex ;
    (*walk)->gpa = gpa ;
    (*walk)->next = NULL ;
    (*walk)->back = temp ;

    return *walk ;
}//end function

void InsNode( struct studentNode *walk, char name[], int age, char sex, float gpa ,struct studentNode **begin){
    if( walk->back != NULL) {
        walk->back->next = new struct studentNode ;
        strcpy( walk->back->next->name, name ) ;
        walk->back->next->age = age ;
        walk->back->next->sex = sex ;
        walk->back->next->gpa = gpa ;
        walk->back->next->next = walk ;
        walk->back->next->back = walk->back ;
        walk->back = walk->back->next ;
    }
    else {
        *begin = new struct studentNode ;
        (*begin)->age = age ;
        (*begin)->sex = sex ;
        (*begin)->gpa = gpa ;
        (*begin)->next = walk ;
        (*begin)->next = NULL ;
        walk->back = *begin ;
    }
}

void DelNode( struct studentNode **walk, struct studentNode **begin ) {
    struct studentNode *temp ;

    if( (*walk)->back != NULL ) {
        (*walk)->back->next = (*walk)->next ;
    } else {
        *begin = (*walk)->next ;
    }//end if

    if( (*walk)->next != NULL ) {
        (*walk)->next->back = (*walk)->back ;
        temp = (*walk)->next ;
    } else {
        temp = (*walk)->back ;
    }//end if

    delete *walk ;
    *walk = temp ;
}

void GoBack( struct studentNode **walk ) {
    if ( (*walk)->back != NULL ) {
        *walk = (*walk)->back ;
    }//end if
}