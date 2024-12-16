#include <stdio.h>

int main() {
    FILE *fp ;
    char txt[ 50 ] ;

    fp = fopen( "a15-1.txt", "r" ) ;  
    if( fp == NULL ) {
        printf( "Error opening file.\n" ) ;
        return 0 ; 
    }

    fscanf( fp, "%[^\n]", txt) ;
    fclose( fp ) ;  
    printf( "Text in file = %s", txt ) ;
    return 0 ;
}
