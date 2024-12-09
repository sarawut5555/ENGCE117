#include <stdio.h>

int main() {
    int n, result = 1 ;

    scanf( "%d", &n ) ;
    printf( "%d! = ", n ) ;

    int temp = n ;

    while( temp > 1 ) {
        printf( "%d ", temp ) ;
        result *= temp ;
        temp-- ;
        if( temp < n ) {
            printf( "x " ) ;   
        }//end if
    }//end while
    printf( "1\n" ) ; 
    printf( "%d! = %d\n", n, result ) ;
    return 0;
}//end function
