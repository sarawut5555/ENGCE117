#include <stdio.h>

void Ascending( int arr[], int size ) ;
    
int main() {
    int n ;

    printf( "Input N: " ) ;
    scanf( "%d", &n ) ;

    int *arr = new int [ n ] ;
    
    for( int i = 0 ; i < n ; i++ ) {
        printf( "Input : " ) ;
        scanf( "%d", &arr[ i ] ) ;
    }
    printf( "\n" ) ;
    
    printf( "Unique value: " ) ;
    for( int i = 0 ; i < n ; i++ ) {
        int unique = 1 ;
        for( int j = 0 ; j < n ; j++ ) {
            if( arr[ i ] == arr[ j ] && i != j ) {
                unique = 0 ; 
                break ;
            }
        }
        Ascending ( arr, n ) ;
        if( unique ) {
            printf( "%d ", arr[ i ] ) ;
        }
    }    
}

void Ascending( int arr[], int size ) {
    for( int i = 1 ; i < size - 1 ; i++ ) {
        int minIndex = i ;
        for( int j = i + 1 ; j < size ; j++ ) {
            if( arr[ j ] < arr[ minIndex ] ) {
                minIndex = j ;
            }
        }
        int temp = arr[ i ] ;
        arr[ i ] = arr[ minIndex ] ;
        arr[ minIndex ] = temp ;
    }
}