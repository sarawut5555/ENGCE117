#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitter[], char str2[][ 10 ], int *count ) ;

int main() {
    char str1[] = "I/Love/You" ;
    char out[ 20 ][ 10 ] ;  
    char splitter[] = "/-:, " ;  
    int num ;  
    
    explode( str1, splitter, out, &num ) ;
    
    for( int i = 0 ; i < num ; i++ ) {
        printf( "str2[%d] = \"%s\"\n", i, out[ i ] ) ;
    }//end for
    printf( "count = %d\n", num ) ;
    return 0 ;
}//end function

void explode( char str1[], char splitter[], char str2[][ 10 ], int *count ) {
    *count = 0 ;
    
    // ใช้ strtok เพื่อแยกคำตามตัวแบ่งที่กำหนด
    char *token = strtok( str1, splitter ) ;
    
    while ( token != NULL ) {
        strcpy( str2[ *count ], token ) ;  
        ( *count )++ ;  
        token = strtok( NULL, splitter ) ; 
    }//end while
}//end function
