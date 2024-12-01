#include <stdio.h>
#include <string.h>

char* reverse( char str1[] ) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char *out ;
    out = reverse( text ) ;
    printf( "%s \n", out ) ;
}//end function

char* reverse( char str1[] ) {
    int len = strlen( str1 ) ;
    static char str2[ 50 ] ; //static array

    for( int i = 0 ; i < len ; i++ ) {
        str2[ i ] = str1[ len - 1 - i ] ;
    }//end for
    str2[ len ] = '\0' ;   
    return str2 ;
}//end function
 
