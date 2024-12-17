#include <stdio.h>

int factorial( int n ) ;
int seriesSum( int n ) ;
    
int main() {
    int n ;
    scanf( "%d", &n ) ;
    
    int result = seriesSum( n ) ;
    printf( "Sum = %d\n", result ) ;

    return 0 ;
}

int factorial( int n ) {
    if( n == 0 || n == 1 ) {
        return 1 ;
    }
    return n * factorial( n - 1 ) ;
}

int seriesSum( int n ) {
    if( n == 1 ) {
        return 1 ; 
    }
    return ( n - 1 ) + factorial( n ) + seriesSum( n - 1 ) ; 
}
