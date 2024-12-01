#include <stdio.h>
#include <string.h>

void reverse( char str1[], char str2[] ) ;

int main() {
    char text[ 50 ] = "I Love You" ;
    char out[ 50 ] ;
    reverse( text, out ) ;
    return 0 ;
}//end function

void reverse( char str1[], char str2[] ) {
    int len = strlen( str1 ) ;
    int j = 0 ;

    for( int i = len - 1 ; i >= 0 ; i-- ) {
        str2[j++] = str1[i] ;
    }//end for
    
    for( int i = 0 ; i < len ; i++ ) {
    	printf( "%c", str2[ i ] ) ;
    }//end for
    str2[j] = '\0' ;
}//end function
