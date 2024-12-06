#include <stdio.h>

int main() {
    int n, i = 1;

    printf( "Enter number: ");
    scanf( "%d", &n ) ;

    if( n % 2 == 1 ) {
        while( i <= n ) {
            printf( "[%d] Hello World\n", i ) ;
            i++ ;
        }
    } 
    else {
        while(i <= n) {
            printf( "(%d) Hello World\n", i ) ;
            i++ ;
        }
    }
    return 0 ;
}