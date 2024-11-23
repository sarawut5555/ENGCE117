#include <stdio.h>
#include <string.h>

int main() {
    char fn[ 50 ] ;
    char ln[ 50 ] ;

    printf( "firstname: " ) ;
    scanf( "%s", &fn ) ;
    printf( "lastname: " ) ;
    scanf( "%s", &ln ) ;

    int len_fn = strlen(fn) ;
    if( fn[ len_fn  - 1 ] == 'C' ) {
        fn[ len_fn - 1 ] = 'C' + 1 ;
    }//end if

    printf( "%s %ss TC, RMUTL, Chiang Mai, Thailand", fn, ln ) ;

    return 0 ;
}//end function