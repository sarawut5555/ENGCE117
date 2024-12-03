#include <stdio.h>

int main() {
    float a1, a2, b1, b2 ;
    printf( "Input A point: " ) ;
    scanf( "%f %f", &a1, &a2 ) ;
    printf( "Input B point: " ) ;
    scanf( "%f %f", &b1, &b2 ) ;

    float result1 = ( a1 + b1 ) / 2 ;
    float result2 = ( a2 + b2 ) / 2 ;

    printf( "Mid Point of A and B is ( %.1f, %.1f )", result1, result2 ) ;
    return 0 ;
}//end function