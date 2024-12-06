#include <stdio.h>

int main() {
    int n, i = 1 ;
    long currentTerm = 9, sum = 0 ;

    printf( "Enter number: " ) ;
    scanf( "%d", &n ) ;

    printf( "Series = " ) ;
    do {
        printf( "%ld", currentTerm ) ; 
        sum += currentTerm ;        
        
        if( i < n ) { 
            printf( " + " ) ;
        }
        currentTerm = currentTerm * 10 + 9 ; 
        i++ ; 
    } 
    while( i <= n ) ;
        printf( "\nSum = %ld\n", sum ) ;
    return 0 ;
}