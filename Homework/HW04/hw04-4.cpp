#include <stdio.h>

int main(){
    int h, b = 0;

    printf("Enter height: ");
    scanf("%d",&h);
    printf("Enter base: ");
    scanf("%d",&b);

    float result = 0.5 * h * b;

    printf("Triagle Area : %.1f", result);
    return 0;
}