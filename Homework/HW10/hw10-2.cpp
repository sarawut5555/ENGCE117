#include <stdio.h>
#include <string.h>

int main() {
    char input[ 2 ] ;         
    char arr[ 100 ] = "" ;     
    int pos = 0 ;         

    while( true ) {
        printf( "Enter 1 character: " ) ;
        printf( "\n" ) ;
        scanf( " %1s", input ) ;

        if( strcmp( input, "Y" ) == 0 || strcmp( input, "y" ) == 0 ) {
            break;
        }
        arr[ pos++ ] = input[ 0 ] ;
        arr[ pos ] = '\0' ;  
    }
    
    printf( "\nString = " ) ;
    for( int i = 0 ; i < pos ; i++ ) {
        printf( "%c", arr[ i ] ) ;
        if( i < pos - 1 ) {
            printf(" ") ; 
        }
    printf( "\n" ) ;
    return 0 ;
    }
}
