#include <stdio.h>

int maxHeight( int arr[], int size ) ;
void maxAge( int arr[], int size, int *maxAgeValue ) ;

int main() {
    int Height[ 10 ] = { 159, 168, 191, 188, 154, 152, 167, 165, 178, 177 } ;
    int Age[ 10 ] = { 18, 19, 18, 17, 16, 18, 17, 18, 18, 18 } ;
    
    int height_result ;
    int age_result ;

    height_result = maxHeight( Height, 10 ) ;
    maxAge( Age, 10, &age_result ) ;
    
    printf( "Max Height = %d\n", height_result ) ;
    printf( "Max Age = %d\n", age_result ) ;

    return 0;
}

int maxHeight( int arr[], int size ) {
    int max = arr[ 0 ] ;  
    for( int i = 1 ; i < size ; i++ ) {
        if( arr[ i ] > max ) {
            max = arr[ i ] ;  
        }
    }
    return max ;
}

void maxAge( int arr[], int size, int *maxAgeValue ) {
    *maxAgeValue = arr[ 0 ] ;  
    for( int i = 1 ; i < size ; i++ ) {
        if( arr[ i ] > *maxAgeValue ) {
            *maxAgeValue = arr[ i ] ;  
        }
    }
}
