#include <stdio.h>

int main() {
    int year ;

    printf( "Year(s) : ") ;
    scanf( "%d", &year ) ;

    if( ( year % 4 == 0 && year % 100 != 0 ) || ( year % 4 == 0 && year % 400 == 0 ) ) {
        printf( "February has 29 days" ) ;
    }//end if
    if( ( year % 4 != 0 ) || ( year % 4 == 0 && year % 100 == 0 && year % 400 != 0) ) {
        printf( "February has 28 days" ) ;
    }//rnd if
    return 0 ;
}//end function