#include <stdio.h>

int main()
{   int a;
    printf("Enter a number:");
    scanf("%d",&a);
    (a>=0)?printf("Number is +ve:%d",a):printf("Number is -ve:%d",a);

    return 0;
}