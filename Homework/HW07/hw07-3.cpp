#include <stdio.h>

// เหมือน 6-4 แตกต่างที่ใช้ do while แทน for

int main() {
    int n ;
    // รับค่าจำนวนครั้ง
    printf("Enter number : ") ;
    scanf( "%d", &n ) ;

    // ค่าเริ่มต้น (ผลรวม, ตัวบวก)
    int sum = 0 ;
    int current = 9 ; // initial value

    int i = 1 ;
    do {
        // เพิ่มค่าผลรวม
        sum += current ;

        printf( "%d", current ) ;

        // แสดงเครื่องหมายบวก ถ้าไม่ใช่ตัวสุดท้าย
        if( i < n ) {
            printf( " + " ) ;
        }//end if

        // เพิ่มค่าตัวบวก (ตัวบวกปัจจุบัน คูณ 10 บวก 9)
        current = current * 10 + 9 ;

        i++ ; // ถัดไป
    } while ( i <= n ) ;
    // วนซ้ำ จนกว่าจะถึงครั้งที่ n
 
    printf( "\nSum = %d ", sum ) ;

    return 0 ;
}//end function