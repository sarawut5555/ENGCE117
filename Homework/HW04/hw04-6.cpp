#include <stdio.h>

int main() {
    char EmpID[ 10 ] ;
    int h ;
    int salary ;

    printf( "Enter Employee ID: " ) ;
    scanf( "%s", &EmpID ) ;
    printf( "Input the working hrs: " ) ;
    scanf( "%d", &h ) ;
    printf( "Salary amount/hr: " ) ;
    scanf( "%d", &salary ) ;

    float result = h * salary ;

    printf( "Employees ID = %s \n", EmpID ) ;
    printf( "Salary = U$ %.2f", result ) ;
    return 0 ;
}//end function