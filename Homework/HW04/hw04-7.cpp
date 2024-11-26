#include <stdio.h>

int main() {
    int C ;
    printf( "Enter Value degree Celsius: " ) ;
    scanf( "%d", &C ) ;

    float F = ( 1.8 * C ) + 32 ;
    printf( "%d degree Celsius = %.1f degree Fahrenheit", C, F ) ;
    return 0 ;
}//end function