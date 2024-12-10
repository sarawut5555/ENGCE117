#include <stdio.h>

int main() {
    int arr1[ 50 ] ;
    int arr2[ 50 ] ;
    int size = 0 ;
    int input ;

    while( true ) {
        printf("Input value to Array1 [%d]: ", size);
        scanf( "%d", &input ) ;
        if( input == -1 ) break ;
        arr1[ size ] = input ;
        size++ ;
    }

    printf( "\n" ) ;
    printf( "Array1 = " ) ;
    for( int i = 0 ; i < size ; i++ ) {
        printf( "%d ", arr1[ i ] ) ;
    }
    printf( "\n" ) ;

    for( int i = 0 ; i < size ; i++ ) {
        arr2[ i ] = 0 ;
    }

    printf( "Array2 = " ) ;
    for( int i = 0 ; i < size ; i++ ) {
        printf( "%d ", arr2[ i ] ) ;
    }
    printf( "\n" ) ;

    printf( "--| Copy Data from Array1 to Array2\n" ) ;
    for( int i = 0 ; i < size ; i++ ) {
        arr2[ i ] = arr1[ i ] ;
    }

    printf( "Array2 = " ) ;
    for( int i = 0; i < size; i++ ) {
        printf( "%d ", arr2[ i ] ) ;
    }
    printf( "\n" ) ;
    return 0 ;
}