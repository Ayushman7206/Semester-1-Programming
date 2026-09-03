#include <stdio.h>

int main()
{   int a,b;
    printf("Enter the number for a:");
    scanf("%d",&a);
    printf("Enter the number for b:");
    scanf("%d",&b);
    (a>b)?printf("A is largest:%d\n",a):printf("B is largest:%d\n",b);

    return 0;
}
