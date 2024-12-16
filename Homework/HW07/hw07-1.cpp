#include <stdio.h>

int main() {
    int n, i = 1;

    scanf( "%d", &n ) ;

    while( i <= n && n % 2 == 0 ) {
        printf( "(%d) Hello World\n", i ) ;
        i++ ;
    }//end while

    while( i <= n && n % 2 != 0 ) {
        printf( "[%d] Hello World\n", i ) ;
            i++ ;
    }//end while
    return 0 ;
}