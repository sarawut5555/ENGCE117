#include <stdio.h>

int main() {
    int m, n; 

    printf( "Start: " ) ;
    scanf( "%d", &m ) ;
    printf( "End: " ) ;
    scanf( "%d", &n ) ;

    int current = m ; 
    printf("\n");
    
    while(current <= n) {
        int mul = 1 ; 
        while( mul <= 9 ) {
            printf( "%d x %d = %d\n", current, mul, current * mul ) ;
            mul++ ; 
        }
        printf( "\n" ) ; 
        current++ ;
    }
    return 0;
}