#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2 ;

    printf( "Array1 Value : " ) ;
    scanf( "%d %d", &rows1, &cols1 ) ;

    int array1[ rows1 ][ cols1 ] ;
    printf( "Array1 elements:\n" ) ;
    for( int i = 0 ; i < rows1 ; i++ ) {
        for( int j = 0 ; j < cols1 ; j++ ) {
            scanf( "%d", &array1[ i ][ j ] ) ;
        }
    }

    printf( "Array2 Value : " ) ;
    scanf( "%d %d", &rows2, &cols2 ) ;

    if( cols1 != rows2 ) {
        printf( "Matrix multiplication is not possible!\n" ) ;
    }

    int array2[ rows2 ][ cols2 ] ;
    printf( "Array2 elements:\n" ) ;
    for( int i = 0 ; i < rows2 ; i++ ) {
        for( int j = 0 ; j < cols2 ; j++ ) {
            scanf( "%d", &array2[ i ][ j ] ) ;
        }
    }

    int array3[ rows1 ][ cols2 ] ;
    for( int i = 0 ; i < rows1 ; i++ ) {
        for( int j = 0 ; j < cols2 ; j++ ) {
            array3[ i ][ j ] = 0 ; 
            for( int k = 0 ; k < cols1 ; k++ ) {
                array3[ i ][ j ] += array1[ i ][ k ] * array2[ k ][ j ] ;
            }
        }
    }

    printf( "\nArray1\n");
    for( int i = 0 ; i < rows1 ; i++ ) {
        for( int j = 0 ; j < cols1 ; j++ ) {
            printf( "%d ", array1[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }

    printf( "\nArray2\n" ) ;
    for(int i = 0 ; i < rows2 ; i++ ) {
        for( int j = 0 ; j < cols2 ; j++ ) {
            printf( "%d ", array2[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }

    printf( "\nArray1 x Array2\n" ) ;
    for( int i = 0 ; i < rows1 ; i++ ) {
        for( int j = 0 ; j < cols2 ; j++ ) {
            printf( "%d ", array3[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }
    return 0 ;
}
