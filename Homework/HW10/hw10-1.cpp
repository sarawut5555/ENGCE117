#include <stdio.h>

int main() {
    char name[ 100 ] ;
    scanf( "%[^\n]", name ) ;
    printf( "Name : %s\n", name ) ;
    return 0 ;
}//end function