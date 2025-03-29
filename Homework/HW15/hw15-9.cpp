#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp ;

    // เปิดไฟล์นี้ ในโหมด r (read = อ่าน)
    fp = fopen( "a15-9.txt", "r" ) ;

    // ถ้าเป็น NULL แปลว่า ไม่มีสิทธิ์อ่านไฟล์ 
    if ( fp == NULL ) {
        printf( "Error: Unable to open file\n" ) ;
        return 0 ;
    }//end if

    // เตรียม char array ไว้เก็บข้อมูล (ข้อความ)
    char content[ 100 ] ;
    fgets( content, 100, fp ) ; // รับข้อมูลจากไฟล์ เก็บลงใน char array

    fclose( fp ) ; // จบการอ่านไฟล์

    // หาตำแหน่งของเครื่องหมายขึ้นบรรทัดใหม่ แล้วแทนที่ด้วย NULL เพื่อระบุว่าจบข้อความนี้แล้ว
    content[ strcspn( content, "\n" ) ] = '\0' ;

    printf( "Output: " ) ;

    int len = strlen( content ) ; // ความยาวของข้อความ
    // วนซ้ำ จำนวนครั้งเท่ากับความยาวของข้อความ
    for( int i = 0 ; i < len ; i++ ) {
        char tmp = content[ i ] ;

        // ทำการเลื่อนตัวอักษร 6 ตัวอักษร ตาม(ASCII Code)
        if( tmp >= 'A' && tmp <= 'Z' ) { // upper // ตัวพิมพ์ใหญ่
            tmp = tmp + 6 ;
            if (tmp > 'Z') { // ถ้ามากกว่า Z ไปแล้วให้ ถอยหลังกลับ 26 (จะได้ยังอยู่ใน A-Z)
                tmp = tmp - 26 ;
            }//end if
        } else if( tmp >= 'a' && tmp <= 'z' ) { // lower // ตัวพิมพ์เล็ก
            tmp = tmp + 6 ;
            if ( tmp > 'z' ) {// ถ้ามากกว่า z ไปแล้วให้ ถอยหลังกลับ 26 (จะได้ยังอยู่ใน a-z)
                tmp = tmp - 26 ;
            }//end if
        }//end if

        // แสดงผลค่าที่ถูกเลื่อนแล้ว
        printf( "%c", tmp ) ;
    }//end for

    return 0 ;
}//end function