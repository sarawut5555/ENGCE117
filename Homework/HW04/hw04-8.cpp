#include <stdio.h>

int main(){
    int n, r;

    printf("Enter Value Hex: ");
    scanf("%x", &n);

    int b = 0;
    int mul = 1;
    while (n != 0)
    {
        r = n % 2;
        b = b + (r * mul);
        mul *= 10;
        n /= 2;
    }
    printf("%d",b);
    return 0;

}