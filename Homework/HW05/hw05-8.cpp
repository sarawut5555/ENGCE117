#include <stdio.h>

int main() {
    int num1, num2, num3 ;
    int i = 1 ;
    
    scanf( "%d %d %d", &num1, &num2, &num3 ) ;
    printf( "1 st Number = %d\n", num1 ) ;
    printf( "2 nd Number = %d\n", num2 ) ;
    printf( "3 rd Number = %d\n", num3 ) ;

    int max = num1 ;
    if( num2 > max ) {
        max = num2 ;
        i++ ;
    }//end if
    if( num3 > max ) {
        max = num3 ;
        i++ ;
    }//end if
    printf( "The %drd Number is the greatest among three\n", i ) ;
    return 0 ;
}//end function