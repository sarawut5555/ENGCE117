#include <stdio.h>

int main() {
    char input ;
    char arr[ 100 ] ;
    int pos = 0 ;

    while( true ) {
        printf( "Enter 1 character: \n" ) ;
        scanf( " %c", &input ) ; 
        if( input == 'Y' || input == 'y' ) { 
            break ; 
        }
        arr[ pos++ ] = input ; 
    }
    arr[ pos ] = '\0' ; 

    printf( "\n" ) ;
    printf( "String = ") ;
    for ( int i = 0 ; i < pos ; i++ ) {
        printf( "%c ", arr[ i ] ) ;
    }
    printf( "\n" ) ;

    return 0;
}
