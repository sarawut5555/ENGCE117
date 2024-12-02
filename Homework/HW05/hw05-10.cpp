#include <stdio.h>

int main() {
    int s ;
    printf( "Enter score: " ) ;
    scanf( "%d", &s ) ;

    int result = ( s - 50 ) / 5 ;

    switch( result ) {
        case 0:  
            printf( "D !\n" ) ;
            break ;
        case 1:  
            printf( "D+ !\n" ) ;
            break ;
        case 2:  
            printf( "C !\n" ) ;
            break ;
        case 3:  
            printf( "C+ !\n" ) ;
            break ;
        case 4:  
            printf( "B !\n" ) ;
            break ;
        case 5:  
            printf( "B+ !\n" ) ;
            break ;
        case 6:  
        case 7:  
        case 8:  
        case 9:  
        case 10:  
            printf( "A !\n" ) ;
            break ;
        default:
            printf( "F !\n" ) ;
            break ;
    }//end switch
    return 0;
}//end function