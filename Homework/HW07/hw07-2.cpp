#include <stdio.h>

int main() {
    int start, end; 

    printf( "Start: " ) ;
    scanf( "%d", &start ) ;
    printf( "End: " ) ;
    scanf( "%d", &end ) ;

    int current = start ; 
    printf("\n");
    
    while(current <= end) {
        int multiplier = 1 ; 
        while( multiplier <= 9 ) {
            printf( "%d x %d = %d\n", current, multiplier, current * multiplier ) ;
            multiplier++ ; 
        }
        printf( "\n" ) ; 
        current++ ;
    }
    return 0;
}