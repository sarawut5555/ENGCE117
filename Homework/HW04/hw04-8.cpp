#include <stdio.h>

int main() {
    int h, r, b ; //hex, remainder, binary
    int mul = 1 ; //multiplier

    printf( "Enter Value Hex: " ) ;
    scanf( "%x", &h ) ;

    while( h != 0 ) {
        r = h % 2 ; //หารเอาเศษ
        b = b + ( r * mul ) ; //เก็บเศษที่ได้จาก r
        mul *= 10 ; //ปรับหลักเลขฐานสอง
        h /= 2 ; //้หารเรื่อยๆ จนกว่าจะเป็น 0
    }//end while
    printf( "%d", b ) ;
    return 0 ;
}//end function