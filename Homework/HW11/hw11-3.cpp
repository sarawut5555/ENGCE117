#include <stdio.h>
#include <string.h>

void reverse( char str1[], char str2[] ) ;

int main() {
    char text[ 50 ] ;
    char out[ 50 ] ;

    fgets( text, 50, stdin ) ;
    reverse( text, out ) ;
    return 0 ;
}//end function

void reverse( char str1[], char str2[] ) {
    int len = strlen( str1 ) ;
    for( int i = 0 ; i < len ; i++ ) {
        str2[ len - 1 - i ] = str1[ i ] ;
    }//end for
    str2[ len ] = '\0' ;
    printf( "%s", str2 ) ;
}//end function
