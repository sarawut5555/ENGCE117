#include <stdio.h>

int main() {
    int a , b, c = 0 ;
    printf( "input number 1: " ) ;
    scanf( "%d", &a ) ;
    printf( "input number 2: " ) ;
    scanf( "%d", &b ) ;
    printf( "input number 3: " ) ;
    scanf( "%d", &c ) ;

    int Answer = a + b + c ;
    printf( "Answer = %d", Answer ) ;
    return 0 ;
}//end function