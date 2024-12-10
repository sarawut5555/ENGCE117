#include <stdio.h>

int main() {
    int n ;

    printf( "Input N: " ) ;
    scanf( "%d", &n ) ;

    int *arr = new int [ n ] ;
    
    printf( "Input : " ) ;
    for( int i = 0 ; i < n ; i++ ) {
        scanf( "%d", &arr[ i ] ) ;
    }

    printf( "Unique value: " ) ;
    for( int i = 0 ; i < n ; i++ ) {
        int unique = 1 ;
        for( int j = 0 ; j < n ; j++ ) {
            if( arr[ i ] == arr[ j ] && i != j ) {
                unique = 0 ; 
                break ;
            }
        }
        if( unique ) {
            printf( "%d ", arr[ i ] ) ;
        }
    }    
}