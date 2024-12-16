#include <stdio.h>

int BinarySearch( int data[], int n, int find ) ;

int main() {
    int RealData[ 6 ] = { 1, 2, 4, 5, 8, 9 } ;
    printf( "Found in %d\n", BinarySearch( RealData, 6, 8 ) ) ;
    return 0 ;
}//end function

int BinarySearch( int data[], int n, int find ) {
    int Output = -1 ;
    for( int i = 0 ; i < n ; i++ ) {
        if( data[ i ] == find ) {
            Output = i ; 
            break ; 
        }
    }
    return Output ;
}