#include <stdio.h>

int main(){
    int d;
    printf("Enter Value Days: ");
    scanf("%d",&d);

    int result = d * 86400;
    printf("%d days = %d seconds",d ,result);
    return 0;
}