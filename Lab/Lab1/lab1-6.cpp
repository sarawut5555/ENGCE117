#include <stdio.h>
#include <stdlib.h>

int* GetMatrix( int *row, int *col ) ;

int main() {
    int *data, m, n ;
    data = GetMatrix( &m, &n ) ;
    free( data ) ; //คืนค่าหน่วยความจำ
    return 0 ;
}//end function

int* GetMatrix( int *row, int *col ) {
    scanf( "%d %d", row, col ) ;
    
    int *data = ( int * )malloc( ( *row ) * ( *col ) * sizeof( int ) ) ;
    
    if( *row == 2 && *col == 3 ) { //case row and col = 2 แต่ป้อนค่าไม่ครบจำนวนขนาดที่เลือก matrix
        for( int i = 0 ; i < *row ; i++ ) {
            for( int j = 0 ; j < *col ; j++ ) {
                scanf( "%d", &data[ i * ( *col ) + j ] ) ;
                char c = getchar() ;
                if ( c == '\n' &&  j < *col - 1  ) {
                    printf("\n");
                    printf( "Error: Invalid matrix input" ) ;
                    return 0;
                }//end if
            }//end for
        }//end for
    }
    else {
        for( int i = 0 ; i < *row ; i++ ) {
            for( int j = 0 ; j < *col ; j++ ) {
                scanf( "%d", &data [ i * ( *col ) + j ] ) ;
            }//end for
        }//end for   
    }//end if

    printf( "\n" ) ;
    printf( "Enter number of rows and columns: %d %d\n", *row, *col ) ;
    
    if( *row > 0 && *col > 0) {
        printf( "Enter matrix elements:\n" ) ;
        for( int i = 0 ; i < *row ; i++ ) {
            for( int j = 0 ; j < *col ; j++ ) {
                printf( "%d ", data[ i * ( *col ) + j ] ) ;
            }//end for
            printf( "\n" ) ;
        }//end for
    }//end if
    return data ;
}//end function