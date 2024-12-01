#include <stdio.h>
#include <string.h>

void explode( char str1[], char splitter, char str2[][10], int *count ) ;

int main() {
    char out[ 20 ][ 10 ] ;
    int num ;
    explode( "I/Love/You", '/-,: ', out, &num ) ;
    
    for (int i = 0; i < num; i++) {
        printf("str2[%d] = \"%s\"\n", i, out[i]);
    }
    printf("count = %d\n", num);
    return 0 ;
}//end function

void explode( char str1[], char splitter, char str2[][10], int *count ) {
    *count = 0 ;
    char *token = strtok(str1, &splitter);
    
    while (token != NULL) {
        strcpy(str2[*count], token);
        (*count)++;
        token = strtok(NULL, &splitter);
    }
}