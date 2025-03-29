#include <stdio.h>

// สร้าง array และหาค่าซ้ำ พร้อมระบุจำนวนครั้ง

int main() {
    int n ;
    printf( "Input N : " ) ;
    scanf( "%d", &n ) ;

    int *arr ;
    arr = new int[ n ] ;

    bool *store ;
    store = new bool[ n ]{ false } ;

    for( int i = 0 ; i < n ; i++ ) {
        printf( "Element[%d] : ", i ) ;
        scanf( "%d", &arr[ i ] ) ;
    }// end for

    // sort
    int tmp ;
    for ( int i = 0 ; i < n ; i++ ) {
        for ( int j = 0 ; j < n ; j++ ) {
            if ( arr[ i ] < arr[ j ] ) {
                tmp = arr[ i ] ;
                arr[ i ] = arr[ j ] ;
                arr[ j ] = tmp ;
            }//end if
        }//end for
    }//end for

    for( int i = 0 ; i < n ; i++ ) {
        // ตัวนี้เคยนับแล้ว ข้ามไปเลย
        if( store[ i ] ) continue ; 

        int count = 1 ;
        for ( int j = i + 1 ; j < n ; j++ ) {
            if ( arr[ i ] == arr[ j ] ) {
                // เพิ่มจำนวนครั้งที่เจอ
                count++ ; // increment duplicates
                // ระบุว่าเคยเจอแล้ว
                store[ j ] = true ; // mark index
            }//end if
        }//end for

        // แสดงค่าจำนวนครั้งที่เจอ
        if( count > 1 ) {
            printf( "%d -> %d values.\n", arr[ i ], count ) ;
        } else {
            printf( "%d -> %d value.\n", arr[ i ], count ) ;
        }//end if
    }//end for

    return 0 ;
}//end function