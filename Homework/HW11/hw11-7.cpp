#include <stdio.h>

int factorial( int n ) ;

int main() {
    int n, result ;
    scanf( "%d", &n ) ;

    printf( "%d! = ", n ) ;

    for( int i = n ; i > 0 ; i-- ) {
        printf( "%d", i ) ;
        if( i > 1 ) {
            printf( " x " ) ;
        }
    }
    result = factorial( n ) ;
    printf( "\n%d! = %d\n", n, result ) ; 
    return 0 ;
}

int factorial( int n ) {
    if( n == 1 || n == 0 ) {
        return 1 ; 
    }
    return n * factorial( n - 1 ) ; 
}