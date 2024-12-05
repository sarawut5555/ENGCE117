#include <stdio.h>

int *GetSet( int * ) ;

int main() {    
    int *data, num ;
    data = GetSet( &num ) ;
    return 0 ;
}//end function

int *GetSet( int *num ) {
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", num ) ;

    int *data = new int [ *num ] ;

    printf( "Enter the Elements: " ) ;
    for ( int i = 0 ; i < *num ; i++ ) {
        scanf( "%d", &data[ i ] );
    }//end for
    printf( "\n" ) ;
    
    printf( "Number of elements: %d\n", *num ) ;
    for ( int i = 0 ; i < *num ; i++ ) {
       printf( "%d ", data[ i ] ) ; 
    }//end for
    return data ;
}//end function