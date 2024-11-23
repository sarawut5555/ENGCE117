#include <stdio.h>
#include <conio.h>

int main() {
    bool _1 = 0 ;
    int i = 0 ;
    
    printf( "%d", _1 ) ;

    if( _1 != 0 ) {
        printf( "ok " ) ;
    } 
    else {
        while( i <= 5 ) {
            printf( " not-okey-%d ", ++i ) ;
        }//end while
    }//end if
    return 0 ;
}//end function