#include <stdio.h>

int main() {
    int s;
    printf( "Enter score: " ) ;
    scanf( "%d", &s ) ;

    int scores[] = { 50, 55, 60, 65, 70, 75, 80 } ; 
    char grades[][ 3 ] = { "F", "D", "D+", "C", "C+", "B", "B+" } ; 

    for( int i = 0 ; i < 7 ; i++ ) { 
        if( s < scores[ i ] ) {
            printf( "%s !\n", grades[ i ] ) ;
            return 0 ;
        }//end if
    }//end for
    printf( "A !\n" ) ; 
    return 0;
}//end function
