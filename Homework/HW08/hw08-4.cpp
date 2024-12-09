#include <stdio.h>

int main() {
    int n, result = 1 ;
    scanf( "%d", &n ) ;

    printf( "%d! = ", n ) ;
    int temp = n ;

    while( temp > 1 ) {
        printf( "%d x ", temp ) ;
        result *= temp ;
        temp-- ;
    }//end while
    printf( "1\n" ) ; 
    printf( "%d! = %d\n", n, result ) ;
    return 0;
}//end function
