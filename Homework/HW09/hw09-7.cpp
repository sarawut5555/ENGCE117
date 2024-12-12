#include <stdio.h>

void Ascending( int arr[], int size ) ;

int main() {
    int oldArr[] = { 9, 2, 6, 1, 7 } ; 
    int oldsize = 5 ;
    int newsize, n ;

    printf( "Enter new element of Array : ") ;
    scanf( "%d", &newsize ) ;
    
    int *newArr = new int[ oldsize + newsize ] ;
    
    for( int i = 0 ; i < oldsize ; i++ ) {
        newArr[ i ] = oldArr[ i ] ;
    }
    
    for( int i = oldsize ; i < oldsize + newsize ; i++ ) {
        printf( "Input : ") ;
        scanf( "%d", &n ) ;
        newArr[ i ] = n ;
    }
    
    printf( "Old Array: " ) ;
    for( int i = 0 ; i < oldsize ; i++) {
        printf( "%d ", oldArr[ i ] ) ;
    }
    printf( "\n" ) ;
    
    Ascending( newArr, oldsize + newsize ) ; 
    printf( "New Array: " ) ;
    for( int i = 0 ; i < oldsize + newsize ; i++ ) {
        printf( "%d ", newArr[ i ] ) ;
    }
    printf( "\n" ) ;
    return 0 ;
}

void Ascending( int arr[], int size ) {
    for( int i = 0 ; i < size - 1 ; i++ ) {
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