#include <stdio.h>

int main() {
    int n ; 
    int prime ;

    printf( "Enter number: " ) ;
    scanf( "%d", &n ) ;

    for( int i = n ; i >= 2 ; i-- ) { 
        prime = 1 ;
        for( int j = 2 ; j * j <= i ; j++ ) { 
            if( i % j == 0 ) { 
                prime = 0 ; 
                break ;
            }//end if
        }//end for
        if( prime ) {
            printf( "%d ", i ) ;
        }//end if
    }//end for
    printf( "\n" ) ;
    return 0 ;
}//end function