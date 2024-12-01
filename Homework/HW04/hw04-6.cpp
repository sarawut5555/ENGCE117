#include <stdio.h>
#include <string.h>

int main() {
    char EmpID[ 11 ] ;
    char result_str[ 20 ] ;
    int h, Salary ;

    printf( "Enter Employee ID: " ) ;
    scanf( "%s", EmpID ) ;
    printf( "Input the working hrs: " ) ;
    scanf( "%d", &h ) ;
    printf( "Salary amount/hr: " ) ;
    scanf( "%d", &Salary ) ;

    float result = h * Salary ;
    sprintf( result_str, "%.2f", result ) ; 

    printf( "Employees ID = %s\n", EmpID ) ;
    printf( "Salary = U$ " ) ;

    int len = strlen( result_str ) ;

    for (int i = 0 ; i < len - 3 ; i++ ) { 
        if (i != 0 && ( len - i ) % 3 == 0 ) { 
            printf( "," ) ;
        }//end if
        printf( "%c" , result_str[ i ] ) ; 
    }//end for
    
    printf( "%s\n",  strchr( result_str, '.' ) ) ;
    return 0 ;
}//end function
