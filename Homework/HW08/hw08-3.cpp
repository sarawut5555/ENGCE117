#include <stdio.h>

int main() {
    int n, next;           
    int first = 1 , second = 1 ;     
    int result = 0 , count = 0 ; 
    
    scanf( "%d", &n ) ;
    printf( "Series = " ) ;
    
    while( count < n ) {
        if( count == 0 ) {
            printf( "%d", first ) ; 
            result += first ;
        } 
        else if( count == 1 ) {
            printf( " + %d", second ) ;  
            result += second ;
        } 
        else {
            next = first + second ; 
            printf( " + %d", next ) ;
            result += next ;
            first = second ;
            second = next ;
        }//end if
        count++ ;
    }//end while

    printf( "\nSum = %d\n", result ) ;
    return 0 ;
}//end function
