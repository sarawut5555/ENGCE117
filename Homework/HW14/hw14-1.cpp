#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void randomArr( int [], int ) ;
void showArr( int [], int ) ;
int findMax( int [], int ) ;
int findMin( int [], int ) ;

int main() {
    int n ;
    printf( "Input N : ") ;
    scanf( "%d", &n ) ;
    
    int num[ n ] ;
    randomArr( num, n ) ;
    showArr( num, n ) ;
    int min = findMin( num, n ) ;
    int max = findMax( num, n ) ;
    
    printf( "\n" ) ;
    printf( "min = %d\n", min ) ; 
    printf( "max = %d\n", max ) ; 
    return 0 ;
}//end function

void randomArr( int inputArr[], int n ) {
    int i = 0 ;
    srand( time( NULL ) ) ;
    for( i = 0 ; i < n ; i++ )
        inputArr[ i ] = rand() % 90 + 10 ;
}//end function

void showArr( int inputArr[], int n ) {
    int i = 0 ;
    printf( "\nIndex  : " ) ;
    for( i = 0 ; i < n ; i++ ) 
        printf( "%3d ", i ) ;
    
    printf( "\nArray  : " ) ;
    for( i = 0 ; i < n ; i++ ) 
        printf( "%3d ", inputArr[ i ] ) ;
    printf( "\n" ) ;
}//end function

int findMin( int inputArr[], int n ) {
    int min = inputArr[ 0 ] ; 
    for( int i = 0 ; i< n ; i++ )
        if( inputArr[ i ] < min )
            min = inputArr[ i ] ;  

    return min ;
}//end function

int findMax( int inputArr[], int n ) {
    int max = inputArr[ 0 ] ; 
    for( int i = 1 ; i < n ; i++ )
        if(inputArr[ i ] > max )
            max = inputArr[ i ] ;

    return max ;
}//end function

