#include <stdio.h>

int KnapsackBT( int *w, int *v, int n, int wx, int i, int *x ) ;

int main() {
    int n = 5, wx = 11, vx, i ;
    
    printf( "Enter n : " ) ;
    scanf( "%d", &n ) ;
    printf( "Enter wx : " ) ;
    scanf( "%d", &wx ) ;
    
    int *w = new int[ n ] ;
    int *v = new int[ n ] ;
    for( i = 0 ; i < n ; i++ ) {
        printf( "weight for item %d : ", i ) ;
        scanf( "%d", &w[ i ] ) ;
    }
    for( i = 0 ; i < n ; i++ ) {
        printf( "value for item %d : ", i ) ;
        scanf( "%d", &v[ i ] ) ;
    }
    
    int *x = new int[n] ;
    vx = KnapsackBT( w, v, n, wx, 0, x ) ;
    for( int i = 0 ; i < n ; i++ ) printf( "%d ", x[ i ] ) ;
    printf( "\nValue = %d", vx ) ;
    return 0 ;
}

int KnapsackBT( int *w, int *v, int n, int wx, int i, int *x ) {
    if (i == 0) {
        for (int j = 0; j < n; j++) {
            x[j] = 0;
        }
    }

    if (i >= n || wx <= 0) {
        return 0;
    }

    int exclude_value = KnapsackBT(w, v, n, wx, i + 1, x);

    int include_value = 0;
    int *temp_x = new int[n];

    for (int j = 0; j < n; j++) {
        temp_x[j] = x[j];
    }
    
    if (w[i] <= wx) {
        temp_x[i] = 1;
        include_value = v[i] + KnapsackBT(w, v, n, wx - w[i], i + 1, temp_x);
    }

    if (include_value > exclude_value) {
        for (int j = 0; j < n; j++) {
            x[j] = temp_x[j];
        }
        delete[] temp_x;
        return include_value;
    } else {
        delete[] temp_x;
        return exclude_value;
    }
}