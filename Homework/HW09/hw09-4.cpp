#include <stdio.h>

int main() {
    int n ;

    printf( "Input N: " ) ;
    scanf( "%d", &n ) ;

    int *arr = new int [ n ] ;

    for( int i = 0 ; i < n ; i++ ) {
        printf( "Element[%d]: ", i ) ;
        scanf( "%d", &arr[ i ] ) ;
    }
    
    printf("\n") ;    
    for( int i = 0 ; i < n ; i++ ) {
        int count = 1 ;

        if( arr[ i ] == -1 ) continue ;

        for( int j = i + 1 ; j < n ; j++ ) {
            if( arr[ i ] == arr[ j ] ) {
                count++ ;
                arr[ j ] = -1 ; 
            }
        }
        
        if( count > 1 ) {
            printf( "%d -> %d values.\n", arr[ i ], count ) ;
        } 
        else {
            printf( "%d -> %d value.\n", arr[ i ], count ) ;
        }
    }
}