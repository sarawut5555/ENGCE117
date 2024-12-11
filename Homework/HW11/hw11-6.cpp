#include <stdio.h>

void fibonacci( int n, int first, int second, int count, int *sum ) {
    while( count < n ) {
        if( count == 0 ) {
            printf( "%d", first ) ; 
            *sum += first ;
        } 
        else if( count == 1 ) {
            printf( " + %d", second ) ;  
            *sum += second ;
        } 
        else {
            int next = first + second ; 
            printf( " + %d", next ) ;
            *sum += next ;
            first = second ;
            second = next ;
        }//end if
        count++ ;
    }//end while
}

int main() {
    int n ;
    int result = 0 ;  

    scanf( "%d", &n ) ;
    printf( "Series = " ) ;
    
    fibonacci( n, 1, 1, 0, &result ) ;
    printf( "\nSum = %d\n", result ) ;
    return 0 ;
}
