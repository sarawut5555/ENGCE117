#include <stdio.h>

int main(){
    int c;
    printf("Enter Value degree Celsius: ");
    scanf("%d", &c);

    float f = (1.8 * c) + 32;
    printf("%d degree Celsius = %.1f degree Fahrenheit",c ,f);
    return 0;

}