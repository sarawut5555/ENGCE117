#include <stdio.h>

int main() {
    int n, i = 1;

    scanf( "%d", &n ) ;

    if( n % 2 == 0 ) {
        while( i <= n ) {
            printf( "(%d) Hello World\n", i ) ;
            i++ ;
        }//end while
    } 
    else {
        while( i <= n ) {
            printf( "[%d] Hello World\n", i ) ;
            i++ ;
        }//end while
    }//end if
    return 0 ;
}//end function