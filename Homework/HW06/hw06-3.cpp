#include <stdio.h>

int main() {
    int m, n ;
    int result = 0 ;
    
    printf( "Start : " ) ;
    scanf( "%d" ,&m ) ;
    printf( "Stop : " ) ;
    scanf( "%d" ,&n ) ;
    
    for( int i = m ; i <= n ; i++ ) {
        for( int j = 1 ; j < 10 ; j++ ) {
            result = i * j ;
            printf( "%d x %d = %d \n", i, j, result ) ;
        }//end for
        printf( "\n" ) ;
    }// end for
}//end function