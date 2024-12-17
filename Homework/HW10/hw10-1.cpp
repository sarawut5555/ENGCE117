#include <stdio.h>
#include <string.h>

int main() {
    char name[ 100 ] ;
    fgets( name, 100, stdin ) ; 
    printf( "Name : %s\n", name ) ;
    return 0 ;
}
