#include <stdio.h>

int main() {
    int num1, num2, num3 ;

    printf( "Input [1] : " ) ;
    scanf( "%d", &num1 ) ;
    printf( "Input [2] : " ) ;
    scanf( "%d", &num2 ) ;
    printf( "Input [3] : " ) ;
    scanf( "%d", &num3 ) ;

    if( num1 < num2 ) {
        int temp = num1 ;
        num1 = num2 ;
        num2 = temp ;
    }//end if
    if( num1 < num3 ) {
        int temp = num1 ;
        num1 = num3 ;
        num3 = temp ;
    }//end if
    if( num2 < num3 ) {
        int temp = num2 ;
        num2 = num3 ;
        num3 = temp ;
    }//end if
    printf( "Output:\n" ) ;
    printf( "%d %d %d\n", num1, num2, num3 ) ;
    return 0 ;
}//end function