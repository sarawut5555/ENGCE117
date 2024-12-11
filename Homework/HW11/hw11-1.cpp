#include <stdio.h>

int Additional( int a, int b, int c ) ;

int main() {
    int n1, n2, n3 ;
    int sum = 0 ;

    printf( "Input 1 : " ) ;
    scanf( "%d", &n1 ) ;
    printf( "Input 2 : " ) ;
    scanf( "%d", &n2 ) ;
    printf( "Input 3 : " ) ;
    scanf( "%d", &n3 ) ;

    sum = Additional( n1, n2, n3 ) ;
    
    printf( "Summation = %d (Calculate by Additional Function)\n", sum ) ;
    return 0 ;
}//end function

int Additional( int a, int b, int c ) {
    return a + b + c ;
}//end function