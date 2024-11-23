#include <stdio.h>

int main() {
    int h, w = 0 ;//height and width

    printf( "Enter height: " ) ;
    scanf( "%d", &h ) ;
    printf( "Enter width: " ) ;
    scanf( "%d", &w ) ;

    float result = 0.5 * h * w ;
    printf( "Triagle Area : %.1f", result ) ;
    return 0 ;
}//end function