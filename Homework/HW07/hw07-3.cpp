#include <stdio.h>

int main() {
    int n, i = 1 ;
    int current_n = 9 ;
    int sum = 0 ;

    printf( "Enter number: " ) ;
    scanf( "%d", &n ) ;

    printf( "Series = " ) ;
    do {
        printf( "%d", current_n ) ; 
        sum += current_n ;        
        
        if( i < n ) { 
            printf( " + " ) ;
        }
        current_n = current_n * 10 + 9 ; 
        i++ ; 
    } while( i <= n ) ;
    
    printf( "\nSum = %d\n", sum ) ;
    return 0 ;
}