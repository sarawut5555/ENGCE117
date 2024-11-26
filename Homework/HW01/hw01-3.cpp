#include <stdio.h>

int main() {
    char fn[ 50 ] ;
    char ln[ 50 ] ;
    int fn_len = 0 ;

    printf( "firstname: " ) ;
    scanf( "%s", &fn ) ;
    printf( "lastname: " ) ;
    scanf( "%s", &ln ) ;

    while( fn[ fn_len ] != '\0' ) { //ascii code (null = 0) 
        fn_len++ ;
    }//end while

    if( fn_len > 0 && fn[ fn_len - 1 ] == 'C' ) { // ascii code (C = 67)
        fn[ fn_len - 1 ] = 'C' + 1 ; // C + 1 => D = 68
    }//end if

    printf( "%s %ss TC, RMUTL, Chiang Mai, Thailand", fn, ln ) ;

    return 0 ;
}//end function