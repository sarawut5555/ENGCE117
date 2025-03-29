#include <stdio.h>

//----| Greedy Algorithm : Shortest Path
void SetWeight( int *Town, int n, int i, int j, int Weight ) ;
int *Dijkstra( int *L, int n ) ;
void InitializeGraph( int *g, int n, int value ) ;
void PrintGraph( int *g, int n ) ;
void PrintArrayAndMax(int *arr, int size) ;

//----| Greedy Algorithm : Knapsack Problem
int *KnapsackGreedy( int *w, int *v, int n, int wx ) ;

int main() {
    printf( "Greedy Algorithm : Shortest Path\n" ) ;
    int n = 5, i, j, *d, *g, km ;
    g = new int[ n * n ] ;
    
    printf( "Enter town : " ) ;
    scanf( "%d", &n ) ;
    
    InitializeGraph( g, n, -1) ;
    for( i = 0 ; i < n ; i++ ) {
        for( j = 0 ; j < n ; j++ ) {
            printf( "Enter km [%d, %d] : ", i, j ) ;
            scanf( "%d", &km ) ;
            SetWeight( g, n, i, j, km ) ;    
        }
    }
    
    PrintGraph(g, n);
    
    d = Dijkstra( g, n ) ;
    PrintArrayAndMax(d, n - 1);
    
    printf( "\nGreedy Algorithm : Knapsack Problem\n" ) ;
    int wx = 11, ans = 0 ;
    n = 5 ;
    
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
    
    int *x = KnapsackGreedy( w, v, n, wx ) ;
    for( int i = 0 ; i < n ; i++ ) printf( "%d ", x[ i ] ) ;
    for( int i = 0 ; i < n ; i++ ) if( x[ i ] == 1 ) ans += v[ i ] ;
    printf( "\nValue = %d", ans ) ;
    return 0 ;
}

void SetWeight( int *Town, int n, int i, int j, int Weight ) {
    Town[ i * n + j ] = Weight ;
}

int *Dijkstra( int *L, int n ) {
    int *d = new int[ n - 1 ] ;
    int *c = new int[ n - 1 ] ;

    for( int i = 0 ; i < n - 1 ; i++ ) {
        d[ i ] = L[ i + 1 ] ;
        c[ i ] = 1 ;
    }

    for( int i = 0 ; i < n - 2 ; i++ ) {
        int v = -1 ;
        for( int j = 0 ; j < n - 1 ; j++ ) {
            if( c[ j ] == 1 && ( v < 0 || d[ j ] < d[ v ] ) ) {
                v = j ;
            }
        }

        c[ v ] = 0 ;
        for( int j = 0 ; j < n - 1 ; j++ ) {
            if( c[ j ] == 1 && L[ v * n + j ] >= 0 ) {
                int dv = d[ v ] + L[ v * n + j ] ;
                if( dv < d[ j ] ) {
                    d[ j ] = dv ;
                }
            }
        }
    }

    return d ;
}

void InitializeGraph( int *g, int n, int value ) {
    for( int i = 0 ; i < n ; i++ ) {
        for( int j = 0 ; j < n ; j++ ) {
            g[ i * n + j ] = value ;
        }
    }
}

void PrintGraph( int *g, int n ) {
    for( int i = 0 ; i < n ; i++ ) {
        for( int j = 0 ; j < n ; j++ ) {
            printf( "%4d ", g[ i * n + j ] ) ;
        }
        printf( "\n" );
    }
}

void PrintArrayAndMax(int *arr, int size) {
    int max = -999 ;
    for( int i = 0 ; i < size ; i++ ) {
        printf( "%d ", arr[ i ] ) ;
        if ( max < arr[ i ] ) {
            max = arr[ i ] ;
        }
    }
    printf( "\nTotal Range = %d\n", max ) ;
}

int *KnapsackGreedy( int *w, int *v, int n, int wx ) {
    int *x = new int[ n ] ;
    int *y = new int[ n ] ;
    float *vw = new float[ n ] ;

    for( int i = 0 ; i < n ; i++ ) {
        vw[ i ] = ( float ) v[ i ] / ( float ) w[ i ] ;
        x[ i ] = 0 ;
        y[ i ] = 1 ;
    }

    int weight = 0 ;
    int z = n ;
    while( weight < wx && z > 0 ) {
        int i = -1 ;
        for( int j = 0 ; j < n - 1 ; j++ ) {
            if( y[ j ] == 1 && ( i < 0 || vw[ i ] < vw[ j ] ) ) {
                i = j ;
            }
        }

        y[ i ] = 0 ;
        if( weight + w[ i ] <= wx ) {
            x[ i ] = 1 ;    
            weight += w[ i ] ;
        }
        z-- ;
    }

    return x ;
}
