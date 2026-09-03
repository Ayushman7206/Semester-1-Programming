#include <stdio.h>

int main()
{   int a;
    printf("Enter the number for a:");
    scanf("%d",&a);
    (a%2) && (a%5)?printf("Number is divisible by 2 and 5:%d\n",a):
    printf("Number is not divisible by 2 and 5:%d\n",a);

    return 0;
}