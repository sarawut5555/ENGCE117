#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    float height;
} 
;
void Ascending( struct Student arr[], int n ) ;
void Descending( struct Student arr[], int n ) ;
void printRoom( char roomName[], struct Student arr[], int n) ;

int main() {
    struct Student roomA[ 50 ], roomB[ 50 ], school[ 100 ] ;
    int countA = 0, countB = 0, totalStudents = 0 ;

    printf( "Room A\n" ) ;
    while( true ) {
        printf( "Name : " ) ;
        char name[ 50 ] ;
        scanf( "%s", name ) ;

        if( strcmp( name, "-1" ) == 0 ) {
            break ;
        }

        printf( "Height (cm) : " ) ;
        float height ;
        scanf( "%f", &height ) ;

        strcpy( roomA[ countA ].name, name ) ;
        roomA[ countA ].height = height ;
        school[ totalStudents ] = roomA[ countA ] ;

        countA++ ;
        totalStudents++ ;
    }

    printf( "\nRoom B\n" ) ;
    while( true ) {
        printf( "Name : " ) ;
        char name[ 50 ] ;
        scanf( "%s", name ) ;

        if( strcmp( name, "-1" ) == 0 ) {
            break ;
        }

        printf( "Height (cm) : " ) ;
        float height ;
        scanf( "%f", &height ) ;

        strcpy( roomB[ countB ].name, name ) ;
        roomB[ countB ].height = height ;
        school[ totalStudents ] = roomB[ countB ] ;

        countB++ ;
        totalStudents++ ;
    }

    Ascending( roomA, countA ) ;
    Ascending( roomB, countB ) ;
    Descending( school, totalStudents ) ;

    printf( "\n" ) ;
    printRoom( "Room A", roomA, countA ) ;
    printRoom( "Room B", roomB, countB ) ;
    printRoom( "School", school, totalStudents ) ;

    return 0 ;
}
void Ascending( struct Student arr[], int n ) {
    struct Student temp ;
    for( int i = 0 ; i < n - 1 ; i++ ) {
        int minIndex = i ;
        for( int j = i + 1 ; j < n ; j++ ) {
            if( arr[ j ].height < arr[ minIndex ].height ) {
                minIndex = j ;
            }
        }
        temp = arr[ i ] ;
        arr[ i ] = arr[ minIndex ] ;
        arr[ minIndex ] = temp ;
    }
}

void Descending( struct Student arr[], int n ) {
    struct Student temp ;
    for( int i = 0 ; i < n - 1 ; i++ ) {
        int maxIndex = i ;
        for( int j = i + 1 ; j < n ; j++ ) {
            if( arr[ j ].height > arr[ maxIndex ].height ) {
                maxIndex = j ;
            }
        }
        temp = arr[ i ] ;
        arr[ i ] = arr[ maxIndex ] ;
        arr[ maxIndex ] = temp ;
    }
}

void printRoom( char roomName[], struct Student arr[], int n ) {
    printf( "%s -> ", roomName ) ;
    for( int i = 0 ; i < n ; i++ ) {
        printf( "%s", arr[ i ].name ) ;
        if( i < n - 1 ) printf(" ") ;
    }
    printf( "\n" ) ;
}