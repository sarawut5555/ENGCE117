#include <stdio.h>

int main() {
    int s ;
    printf( "enter score : " ) ;
    scanf( "%d", &s ) ;
    
    for( ; s < 50 ; ) {
        printf( "F !\n" ) ;
        break ;

    }//end for
    for( ; s >= 50 && s < 55 ; ) {
        printf( "D !\n" ) ;
        break ;

    }//end for
    for( ; s >= 55 && s < 60 ; ) {
        printf( "D+ !\n" ) ;
        break ;

    }//end for
    for( ; s >= 60 && s < 65 ; ) {
        printf( "C !\n" ) ;
        break ;

    }//end for
    for( ; s >= 65 && s < 70 ; ) {
        printf( "C+ !\n" ) ;
        break ;

    }//end for
    for( ; s >= 70 && s < 75 ; ) {
        printf( "B !\n" ) ;
        break ;

    }//end for
    for( ; s >= 75 && s < 80 ; ) {
        printf( "B+ !\n" ) ;
        break ;

    }//end for
    for( ; s >= 80 ; ) {
        printf( "A !\n" ) ;
        break ;

    }//end for
    return 0 ;

}//end function