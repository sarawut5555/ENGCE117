#include <stdio.h>

int main() {
    int arr[ 50 ] ; 
    int size = 0 ; 
    int input ;

    while( true ) {
        printf( "Input [%d] : ", size ) ;
        scanf( "%d", &input ) ;
        if( input == -1 )  break ;
        arr[ size ] = input ; 
        size++ ;
    }//end while
    
    printf( "\n" ) ;
    printf( "Index = " ) ;
    for( int i = 0; i < size; i++ ) {
        printf( "%d ", i ) ;
    }//end for

    printf( "\nArray = " ) ;
    for( int i = 0; i < size; i++ ) {
        printf( "%d ", arr[ i ] ) ;
    }//end for
    return 0 ;
}//end function
