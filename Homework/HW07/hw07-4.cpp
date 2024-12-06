#include <stdio.h>

int main() {
    int n ;
    
    printf( "Enter number: " ) ;
    scanf( "%d", &n ) ;

    int i = n ;
    
    do {
        int Prime = 1 ; 
        if( i <= 1 ) {
            Prime = 0 ; 
        }

        else {
            for( int j = 2 ; j * j <= i ; j++ ) {
                if( i % j == 0 ) {
                    Prime = 0 ; 
                    break ; 
                }
            }
        }

        if( Prime ) {
            printf( "%d ", i ) ; 
        }
        i-- ; 
    } 
    while ( i >= 2 ) ; 
    return 0 ;
}