#include <stdio.h>
#include <string.h>

void GetSet( int [], int * ) ;

int main() {
    int *data, num ;
    GetSet( data, &num ) ;
    for( int i = 0 ; i < num ; i++ ) {
        printf( "%d ", data[ i ] ) ;
    }//end for
    return 0 ;
}//end function

void GetSet( int data[], int *num ) {
    data = new int [ *num ] ;
    scanf( "%d", num ) ;

    for( int i = 0 ; i < *num ; i++ ) {
        scanf( "%d", &data[ i ] ) ;
    }//end for
}//end function