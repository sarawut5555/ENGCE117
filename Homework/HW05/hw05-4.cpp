#include <stdio.h>

int main() {
    int num1, num2 ;
    printf( "Input 1 : " ) ;
    scanf( "%d", &num1 ) ;
    printf( "Input 2 : " ) ;
    scanf( "%d", &num2 ) ;

    if( num1 == num2 ) {
        printf( "Number1 equal Number2" ) ;
    }
    else if(num1 > num2) {
        printf( "Number1 greater than Number2" ) ;
    }
    else{
        printf( "Number1 lower than Number2" ) ;
    }//end if
    return 0 ;
}//end function