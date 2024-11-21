#include <stdio.h>

int main() {
    char fn[ 50 ] ;
    char ln[ 50 ] ;

    printf( "firstname: " ) ;
    scanf( "%s", &fn ) ;
    printf( "lastname: " ) ;
    scanf( "%s", &ln ) ;
    printf( "%s %s TC, RMUTL, Chiang Mai, Thailand", fn, ln ) ;

    return 0 ;
}