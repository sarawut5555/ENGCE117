#include <stdio.h>

void swapAges( int *age1, int *age2 ) ;

int main() {
    char name1[ 50 ], name2[ 50 ] ;
    int age1, age2 ;

    printf( "Input A\n" ) ;
    printf( "Name: " ) ;
    scanf( "%s", name1 ) ;
    printf( "Age: " ) ;
    scanf( "%d", &age1 ) ;
    
    printf( "Input B\n" ) ;
    printf( "Name: " ) ;
    scanf( "%s", name2 ) ;
    printf( "Age: " ) ;
    scanf( "%d", &age2 ) ;
    
    printf( "\n** RESULT **\n" ) ;
    printf( "Name: %s (%d)\n", name1, age1 ) ;
    printf( "Name: %s (%d)\n", name2, age2 ) ;

    swapAges( &age1, &age2 ) ;

    printf( "\n** SWAP AGE **\n" ) ;
    printf( "Name: %s (%d)\n", name1, age1 ) ;
    printf( "Name: %s (%d)\n", name2, age2 ) ;
    return 0 ;
}//end function

void swapAges( int *age1, int *age2 ) {
    int temp = *age1 ;
    *age1 = *age2 ;
    *age2 = temp ;
}//end function

