#include <stdio.h>

int main() {
    int days ;
    printf( "Enter Value Days: " ) ;
    scanf( "%d", &days ) ;

    int result = days * 86400 ;
    printf( "%d days = %d seconds", days, result ) ; 
    return 0 ;
}//end function