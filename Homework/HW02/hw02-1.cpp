#include <stdio.h>
int main() {
    char noodle ;

    printf( "Your have noodle? ( y/n ) : " ) ;
    scanf( " %c" , &noodle ) ;

    if( noodle == 'y' ) {
        printf( "Add water \n" ) ;
        printf( "Boil water \n" ) ;
        printf( "Turn on the gas \n" ) ;
        printf( "Wait for the water to boil \n" ) ;
        printf( "Boiling water? ( y/n ) : " ) ;
        scanf( " %c", &noodle ) ;

        while( noodle != 'y' ) { //ลูปต่อจนกว่าจะตอบ y
            printf( "Wait for the water to boil \n" ) ;
            printf( "Boiling water? ( y/n ) " ) ;
            scanf( " %c", &noodle ) ;
        }//end while
        printf( "Put the noodles in the bowl \n" ) ;
        printf( "Put the seasonings in a bowl \n" ) ;
        printf( "Turn off the gas \n" ) ;
        printf( "Scoop the noodles into a bowl \n" ) ;
    }
    else {
        printf( "error" ) ;
    }//end if

    return 0 ;
}//end function