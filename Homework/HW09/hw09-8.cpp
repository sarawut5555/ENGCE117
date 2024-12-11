#include <stdio.h>

void Descending( int arr[], int size ) ;

int main() {
    int n ;
    
    printf("Enter new element of Array : ");
    scanf("%d", &n);

    int *arr = new int[n];
    
    for(int i = 0; i < n; i++) {
        printf("Input : ");
        scanf("%d", &arr[i]);
    }
        printf("Array: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    Descending(arr, n);

    if (n >= 3) {
        printf("The large 3rd element = %d\n", arr[2]);
    } else {
        printf("The array does not have 3 elements\n");
    }
    
    return 0;
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
