#include <stdio.h>

int main()
{   
    int A;
    printf("Enter Age:");
    scanf("%d",&A);
    (A>=18)?printf("A is eligible:%d",A):printf("A is not eligible:%d",A);

    return 0;
}
