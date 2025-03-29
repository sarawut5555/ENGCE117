#include <stdio.h>

double f( double x, int mode ) ;
double RootOfFunction( double xl, double xr, double epsilon, int mode ) ;

int main() {
    double root, first_value ;
    int mode = 0 ;
    scanf( "%d %lf", &mode, &first_value ) ;
    printf( "Ans =\n" ) ;
    root = RootOfFunction( -1, first_value, 0.1, mode ) ;
    printf( "root = %0.1f", root ) ;
    return 0 ;
}

double f( double x, int mode ) {
    return mode == 0 ? ( 2 * x  - 5 ) : ( 8 * x + 16 ) ;
}

double RootOfFunction( double xl, double xr, double epsilon, int mode ) {
    double xm = ( xl + xr ) / 2.0 ;

    printf( "%.1f %.1f %.1f\n", xl, xm, xr ) ;

    if( (xr - xl) < epsilon ) return xm ;
    if( f( xm, mode ) == 0.0 ) return xm ;

    if( f( xl, mode ) * f( xm, mode ) < 0 ) {
        return RootOfFunction( xl, xm, epsilon, mode ) ;
    }else{
        return RootOfFunction( xm, xr, epsilon, mode ) ;
    }
}