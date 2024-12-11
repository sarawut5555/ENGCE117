#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

struct student (*GetStudent( int *room ) )[ 10 ] ;

int main() {
    struct student ( *children )[ 10 ] ;
    int group ;
    children = GetStudent( &group ) ;
    
    for( int i = 1 ; i <= group ; i++ ) {
        printf( "Room %d: 10 students entered.\n", i ) ;
    }
    return 0 ;
}//end function

struct student (*GetStudent( int *room ) )[ 10 ] {
    scanf("%d", room) ;
    struct student (*child)[10] = new student[*room][10];
    for( int i = 1 ; i <= *room ; i++ ) {
       printf( "Room %d:\n", i ) ;
       for( int j = 1 ; j <= 2 ; j++ ) {
            printf( "Student %d: ", j ) ;
            scanf( "%s %d", child[ i ][ j ].name, &child[ i ][ j ].age ) ; 
       }
    }
    // for( int i = 1 ; i <= *room ; i++ ) {
    //     printf( "Room %d: 10 students entered.\n", i ) ;
    // }
    return child ;
}