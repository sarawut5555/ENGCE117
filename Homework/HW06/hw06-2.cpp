#include <stdio.h>

int main() {
    // roman numerics
    // เก็บตัวอักษรโรมัน (มีทั้งหมด 13 ตัว)
    char romanChar[][3] = { "M", "CM", "D" , "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I" } ;
    // เก็บค่าของตัวอักษรโรมันแต่ละตัว (เช่น I = 1, II = 2) โดยจะอยู่ตำแหน่งเดียวกันเสมอ (char[0] = I คือ weight[0] = 1)
    int romanWeight[] = { 1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1 } ;

    int num = 0 ;
    // รับค่าตัวเลข
    scanf( "%d" , &num ) ;

    // แสดงผลตัวเลข
    printf( "%d = ", num ) ;

    // loop through all roman
    // ทำการวนซ้ำเพื่อเช็คอักษรโรมันทุกตัว
    for ( int i = 0 ; i < 13 ; i++ ) {
        // print by char index and decrese by weight until 0
        // ถ้าเลขมีค่ามากกว่าอักษรโรมัน i ให้ทำการหักลบค่าตัวเลข และแสดงตัวอักษรโรมัน i / ทำซ้ำจนกว่าเลขจะเท่ากับ 0
        for ( ; num >= romanWeight[i] ; num -= romanWeight[i] ) {
            printf( "%s", romanChar[i] ) ;
        }//end for
    }//end for

    return 0 ;
}//end function