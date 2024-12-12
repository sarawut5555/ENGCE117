#include <stdio.h>

void Ascending( int arr[], int size ) ;
void Descending( int arr[], int size ) ;

int main() {
    int arr[ 50 ] ;
    int size = 0 ;
    int input ;

    while( true ) {
        printf( "Input: " ) ;
        scanf( "%d", &input ) ;
        if( input == -1 ) break ;
        arr[ size ] = input ;
        size++ ;
    }

    Ascending( arr, size ) ;
    printf( "0-99: " ) ;
    for( int i = 0 ; i < size ; i++ ) {
        printf( "%d ", arr[ i ] ) ;
    }
    printf( "\n" ) ;

    Descending( arr, size ) ;
    printf( "99-0: " ) ;
    for( int i = 0 ; i < size ; i++ ) {
        printf( "%d ", arr[ i ] ) ;
    }
    printf( "\n" ) ;
    return 0;
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

void Descending( int arr[], int size ) {
    for( int i = 0 ; i < size - 1 ; i++ ) {
        int maxIndex = i ;
        for( int j = i + 1 ; j < size ; j++ ) {
            if( arr[ j ] > arr[ maxIndex ] ) {
                maxIndex = j ;
            }
        }
        int temp = arr[ i ] ;
        arr[ i ] = arr[ maxIndex ] ;
        arr[ maxIndex ] = temp ;
    }
}
