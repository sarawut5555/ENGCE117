#include <stdio.h>

int main() {
    int num ;
    // รับค่าเริ่มต้น
    printf( "Enter number : " ) ;
    scanf( "%d", &num ) ;

    // decrement from start until 2
    // วนซ้ำ โดยลดค่า i จากค่าเริ่มต้น จนกว่าจะถึง 2
    for( int i = num ; i > 1 ; i-- ) {
        // check is prime
        // ใช่ระบุว่าเป็นจำนวนเฉพาะหรือไม่
        bool isPrime = true ;
        for ( int j = 2 ; j * j <= i ; j++ ) {
            // หารลงตัว ถือว่าไม่ใช่จำนวนเฉพาะ
            if( i % j == 0 ) {
                isPrime = false ;
                break ;
            }//end if
        }//end for

        // หากเป็นจำนวนเฉพาะ ให้แสดงค่า i
        if( isPrime ) {
            printf( "%d ", i ) ;
        }//end if
    }//end for

    return 0 ;
}//end funtion