#include <stdio.h>

int main() {
    int n ; 
    printf( "Enter number: " ) ;
    scanf( "%d", &n ) ;

    int current_n = 0 ;  
    int result = 0 ;           
    printf( "Series = " ) ;

    for( int i = 1 ; i <= n ; i++ ) {
        current_n = current_n * 10 + 9 ;  
        printf( "%d", current_n ) ;
        result += current_n ;  

        if( i < n ) {
            printf(" + ") ;  
        }//end if
    }//end for
    printf( "\nSum = %d\n", result ) ;  
    return 0;
}//end function