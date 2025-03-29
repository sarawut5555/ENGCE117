#include <stdio.h>

// ทำการคูณ matrix

int main() {
    int r1, r2, c1, c2 ;
    int array1[ 100 ][ 100 ] ;
    int array2[ 100 ][ 100 ] ;
    int result[ 100 ][ 100 ] ;

    // กำหนดขนาด matrix 1 (row col)
    printf( "Array1 Value : " ) ;
    scanf( "%d %d", &r1, &c1 ) ;

    // รับค่าสมาชิก matrix 1
    printf( "Array1 element : " ) ;
    for( int i = 0 ; i < r1 ; i++ ) {
        for( int j = 0 ; j < c1 ; j++ ) {
            scanf( "%d", &array1[ i ][ j ] ) ;
        }
    }//end for

    // กำหนดขนาด matrix 2 (row col)
    printf( "Array2 Value : " ) ;
    scanf( "%d %d", &r2, &c2 ) ;

    // คูณไม่ได้เพราะ column ของ matrix 1 ไม่ขนาดไม่เท่ากับ row ของ matrix 2
    if( c1 != r2 ) {
        printf( "Matrix multiplication not possible.\n" ) ;
        return 1 ;
    }//end if


    // รับค่าสมาชิก matrix 2
    printf( "Array2 element : " ) ;
    for( int i = 0 ; i < r2 ; i++ ) {
        for( int j = 0 ; j < c2 ; j++ ) {
            scanf( "%d", &array2[ i ][ j ] ) ;
        }
    }//end for

    for( int i = 0 ; i < r1 ; i++ ) {
        for( int j = 0 ; j < c2 ; j++ ) {
            result[ i ][ j ] = 0 ;
        }
    }//end for

    for( int i = 0 ; i < r1 ; i++ ) { // วนซ้ำ row matrix 1
        for( int j = 0 ; j < c2 ; j++ ) { // วนซ้ำ col matrix 2
            for( int k = 0 ; k < c1 ; k++ ) { // วนซ้ำ col matrix 1
                // คูณ matrix 
                result[ i ][ j ] += array1[ i ][ k ] * array2[ k ][ j ] ;
            }
        }
    }//end for

     // แสดงผล Array1
    printf( "Array1\n" ) ;
    for( int i = 0 ; i < r1;  i++ ) {
        for( int j = 0 ; j < c1 ; j++ ) {
            printf( "%d ", array1[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }//end for

    // แสดงผล Array2
    printf( "Array2\n" ) ;
    for( int i = 0 ; i < r2 ; i++ ) {
        for( int j = 0 ; j < c2 ; j++ ) {
            printf( "%d ", array2[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }//end for

    // แสดงผล Array1 x Array2
    printf( "Array1 x Array2\n" ) ;
    for( int i = 0 ; i < r1 ; i++ ) {
        for( int j = 0 ; j < c2 ; j++ ) {
            printf( "%d ", result[ i ][ j ] ) ;
        }
        printf( "\n" ) ;
    }//end for

    return 0;
}//end function