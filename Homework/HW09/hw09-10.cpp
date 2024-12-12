#include <stdio.h>

int main() {
    int rows1, cols1, rows2, cols2 ;
    
    printf( "Array element : " ) ;
    scanf( "%d %d", &rows1, &cols1 ) ;

    int array1[ rows1 ][ cols1 ] ;
    
    printf( "Input :\n" ) ;
    for( int i = 0 ; i < rows1 ; i++ ) {
        for( int j = 0 ; j < cols1 ; j++ ) {
            scanf( "%d", &array1[i][j] ) ;
        }//end for
    }//end for
    
    printf(  "\n" ) ;
    printf( "Array\n" ) ;
    for( int i = 0 ; i < rows1 ; i++ ) {
        for( int j = 0 ; j < cols1 ; j++ ) {
            printf( "%d ", array1[i][j] ) ;
        }//end for
        printf("\n");
    }//end for
    
    rows2 = cols1 ;
    cols2 = rows1 ;
    int array2[ cols1 ][ rows1 ] ;
    
    for( int i = 0 ; i < rows2 ; i++ ) {
        for( int j = 0 ; j < cols2 ; j++ ) {
            array2[ i ][ j ] = array1[ j ][ i ] ;
        }//end for
    }//end for

    printf( "\nArray Transpose\n" ) ;

    for( int i = 0 ; i < rows2 ; i++ ) {
        for( int j = 0 ; j < cols2 ; j++ ) {
            printf( "%d ", array2[ i ][ j ] ) ;
        }//end for
    printf( "\n" ) ;
    }//end for
    return 0 ;
}