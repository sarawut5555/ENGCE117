#include <stdio.h>

int main(){
    int size ;
    float n, avg, sum = 0 ;

    printf( "Enter value n : " ) ;
    scanf( "%d", &size ) ;

    for( int i = 1 ; i <= size ; i++ ) {
        printf( "Enter number %d : ", i ) ;
        scanf( "%f", &n ) ;
        sum += n ;
    }//end for
    printf( "\n" ) ;
    printf( "Sum = %.0f\n", sum ) ;
    
    avg = sum / size ;
    printf( "Avg = %.2f\n", avg ) ;
    return 0 ;
}//end function