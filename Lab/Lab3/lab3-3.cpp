#include <stdio.h>

struct student {
    char name[ 20 ] ;
    int age ;
    char sex ;
    float gpa ;
} ;

struct student upgrade( struct student child ) ;

int main() {
    struct student aboy ;
    aboy.sex = 'M' ;
    aboy.gpa = 3.00 ;
    aboy = upgrade( aboy ) ;
    printf( "%.2f", aboy.gpa ) ;
    return 0 ;
}//end function

struct student upgrade( struct student child ) {
    if( child.gpa == 4.00 ) {
       return child ; 
    }
    if( child.sex == 'M' ) {
        child.gpa += child.gpa * 0.10 ;     
    } else if( child.sex == 'F' ) {
        child.gpa += child.gpa * 0.20 ;     
    }
    //printf( "in function %.2f\n", child.gpa ) ;
    return child ;
}
