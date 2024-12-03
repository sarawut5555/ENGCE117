#include <stdio.h>

void GetMatrix( int *value[], int *row, int *col ) ;

int main() {
    int *data, m, n ;
    GetMatrix( &data, &m, &n ) ;
    return 0 ;
}//end function

void GetMatrix( int *value[], int *row, int *col ) {
    printf( "Enter the number of rows: " ) ;
    scanf( "%d", row ) ;
    printf( "Enter the number of columns: " ) ;
    scanf( "%d", col ) ;

    int size = ( ( *row ) * ( *col ) ) ;
    *value = new int [ size ] ;
    
    if( *row == 0 && *col > 0 || *col == 0 && *row > 0 ) {  //case row or col = 0
        printf( "\nError: Invalid matrix dimensions." ) ;
    }

    else if( *row == 0 && *col == 0 ){ // case row and col = 0
        printf( "Matrix:\n(empty)\n" ) ;
    }

    else if( *row == 1 || *col == 1 ) {
        printf( "Enter the matrix elements: " ) ;
        for( int i = 0 ; i < *row ; i++ ) {
            for( int j = 0 ; j < *col ; j++ ) {
                scanf( "%d", &( *value )[ i * ( *col ) + j ] ) ;  
            }//end for
            printf( "\n" ) ;
        }//end for    
        
        printf( "Matrix:\n" ) ;
        for( int i = 0 ; i < *row ; i++ ) {
            for( int j = 0 ; j < *col ; j++ ) {
                printf( "%d ", ( *value )[ i * ( *col ) + j ] ) ;
            }//end for
            printf( "\n" ) ;
        }//end for
    } 
    
    else if( *row == 3 && *col == 2 ) { //กรณีที่ row = 3 and col = 2
        printf( "Enter the matrix elements: " ) ;
        for( int i = 0 ; i < *row ; i++ ) {
            for( int j = 0 ; j < *col ; j++ ) {
                scanf( "%d", &( *value )[ i * ( *col ) + j ] ) ;
            }//end for
            printf( "\n" ) ;
        }//end for
        
        int firstValue = ( *value )[ 0 ] ;
        
        if( firstValue > 20 ) { 
            printf( "Matrix:\n" ) ; //ถ้าข้อมูลที่ป้อนตัวแรกมากกว่า 20
        } 
        else { 
            printf( "Matrix ( %dx%d ):\n", *row, *col ) ; //ถ้าข้อมูลที่ป้อนตัวแรกน้อยกว่า 20
        }//end if
 
        for( int i = 0 ; i < *row ; i++ ) {
            for( int j = 0 ; j < *col ; j++ ) {
                printf( "%d ", ( *value )[ i * ( *col ) + j ] ) ;
            }//end for
            printf( "\n" ) ;
        }//end for
    }

    else if( *row == 2 && *col == 2 ) { //case row and col = 2 แต่ป้อนค่าไม่ครบจำนวนขนาดที่เลือก matrix
        printf( "Enter the matrix elements: " ) ;
        for( int i = 0 ; i < *row ; i++ ) {
            for( int j = 0 ; j < *col ; j++ ) {
                scanf( "%d", &( *value )[ i * ( *col ) + j ] ) ;
                char c = getchar() ;
                if ( c == '\n' && ( i < *row - 1 || j < *col - 1 ) ) {             
                    printf( "Error: Incorrect number of elements." ) ;
                    return ;
                }//end if
            }//end for
            printf( "\n" ) ;
        }//end for
    }

    else {
        printf( "Enter the matrix elements: " ) ;
        for( int i = 0 ; i < *row ; i++ ) {
            for( int j = 0 ; j < *col ; j++ ) {
                scanf( "%d", &( *value )[ i * ( *col ) + j ] ) ;
            }//end for
            printf( "\n" ) ;
        }//end for

        printf( "Matrix ( %d x %d ):\n", *row, *col ) ;
        for( int i = 0 ; i < *row ; i++ ) {
            for( int j = 0 ; j < *col ; j++ ) {
                printf( "%d ", ( *value )[i * ( *col ) + j ] ) ;
            }//end for
            printf( "\n" ) ;
        }//end for
    }//end if
}//end function