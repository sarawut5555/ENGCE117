#include <stdio.h>

int main() {
    int n;
    
    printf( "Enter number: " ) ;
    scanf( "%d", &n ) ;

    int i = n ;
    
    do {
        int isPrime = 1 ; 

        if( i <= 1 ) {
            isPrime = 0 ; 
        }

        else {
            for( int j = 2 ; j * j <= i ; j++ ) {
                if( i % j == 0 ) {
                    isPrime = 0 ; 
                    break ; 
                }
            }
        }

        if( isPrime ) {
            printf( "%d ", i ) ; 
        }
        i-- ; 
    } 
    while ( i >= 2 ) ; 

    return 0 ;
}