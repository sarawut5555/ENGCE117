#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2;
    
    printf( "Array1 element : " ) ;
    scanf( "%d %d", &rows1, &cols1 ) ;

    int array1[ rows1 ][ cols1 ] ;
    
    printf( "Input :\n" ) ;
    for( int i = 0 ; i < rows1 ; i++ ) {
        for( int j = 0 ; j < cols1 ; j++ ) {
            scanf( "%d", &array1[ i ][ j ] ) ;
        }//end for
    }//end for
    
    printf( "Array2 element : " ) ;
    scanf( "%d %d", &rows2, &cols2 ) ;
    
    if( rows1 != rows2 || cols1 != cols2 ) {
        printf( "Error: Array1 and Array2 must have the same dimensions.\n" ) ;
        
    }

    int array2[ rows2 ][ cols2 ] ;
    int array3[ rows1 ][ cols1 ] ;
    
    printf( "Input :\n" ) ;
    for( int i = 0 ; i < rows2 ; i++ ) {
        for(int j = 0 ; j < cols2 ; j++ ) {
            scanf( "%d", &array2[ i ][ j ] ) ;
        }
    }
    
    for( int i = 0 ; i < rows1 ; i++ ) {
        for( int j = 0 ; j < cols1 ; j++ ) {
            array3[ i ][ j ] = array1[ i ][ j ] + array2[ i ][ j ] ;
        }
    }
    
    printf( "Array1 + Array2 = Array3\n" ) ;
    for( int i = 0 ; i < rows1 ; i++ ) {
        for( int j = 0 ; j < cols1 ; j++ ) {
            printf( "%d ", array3[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }
}