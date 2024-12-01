#include <stdio.h>

int main() {
    int h, w = 0 ;//height and width

    printf( "Enter height: " ) ;
    scanf( "%d", &h ) ;
    printf( "Enter width: " ) ;
    scanf( "%d", &w ) ;

    float result = ( h * w ) / 2 ;
    printf( "Triagle Area : %.1f", result ) ;
    return 0 ;
}//end function