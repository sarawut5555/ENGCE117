#include <stdio.h>

int main() {
    int n ;
    scanf( "%d", &n ) ;
    
    int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1} ;
    char symbols[ 13 ][ 3 ] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"} ;

    printf( "%d = ", n ) ;
    for( int i = 0; i < 13 ; i++ ) {
        while( n >= values[ i ] ) {
            printf( "%s", symbols[ i ] ) ;
            n -= values[ i ] ;
        }//end while
    }//end for
    printf( "\n" ) ;
    return 0 ;
}//end function