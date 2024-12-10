#include <stdio.h>

void Descending( int arr[], int size ) ;
    
int main() {
    int A1, A2 ;

    printf( "Enter element of Array1 : " ) ;
    scanf( "%d", &A1 ) ;

    int *arr1 = new int [ A1 ] ;
    
    for( int i = 0 ; i < A1 ; i++ ) {
        printf( "--| Array1 [%d] : ", i ) ;
        scanf( "%d", &arr1[ i ] ) ;
    }

    printf( "Enter element of Array2 : " ) ;
    scanf( "%d", &A2 ) ;

    int *arr2 = new int [ A2 ] ;
    
    for( int i = 0 ; i < A2 ; i++ ) {
        printf( "--| Array2 [%d] : ", i ) ;
        scanf( "%d", &arr2[ i ] ) ;
    }

    int *arr3 = new int [ A1 + A2 ] ;

    for( int i = 0 ; i < A1 ; i++ ) {
        arr3[ i ] = arr1[ i ] ;
    }

    for( int i = 0; i < A2 ; i++ ) {
        arr3[ A1 + i ] = arr2[ i ] ;
    }
    printf( "\n" ) ;
    Descending( arr3, A1 + A2 ) ;
    printf( "Merge Array1 & Array2 to Array3\n" ) ;
    printf( "Array3 = " ) ;
    for( int i = 0 ; i < A1 + A2 ; i++ ) {
        printf( "%d ", arr3[ i ] ) ;
    }
    printf( "\n" ) ;
    return 0 ;
}

void Descending( int arr[], int size ) {
    for( int i = 0 ; i < size - 1 ; i++ ) {
        int maxIndex = i ;
        for( int j = i + 1 ; j < size ; j++ ) {
            if( arr[ j ] > arr[ maxIndex ] ) {
                maxIndex = j ;
            }
        }
        int temp = arr[ i ] ;
        arr[ i ] = arr[ maxIndex ] ;
        arr[ maxIndex ] = temp ;
    }
}