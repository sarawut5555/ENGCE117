#include <stdio.h>
#include <stdlib.h>

//int GetSet( int [] ) ;

int main() {
    int *data, num ;
    num = GetSet( &data ) ;
    return 0 ;
}//end function

int GetSet( int **data ) { //ต้องเพิ่ม pointer 2 ตัว และ ลบarray
    int num ;
    printf( "Enter the number of elements: " ) ;
    scanf( "%d", &num ) ;

    *data = (int *)malloc(num * sizeof(int));

    printf( "Enter the Elements: " ) ;
    for ( int i = 0 ; i < num ; i++ ) {
        scanf( "%d", &((*data)[ i ]) ); // รับค่าแต่ละตัวใส่ใน array
    }//end for

    printf( "Number of elements: %d\n", num ) ;
    for ( int i = 0 ; i < num ; i++ ) {
       printf( "%d ", (*data)[ i ] ) ; 
    }//end for
    printf( "\n" ) ;

    return num ;
}