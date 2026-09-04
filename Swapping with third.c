#include <stdio.h>

int main()
{   int a=10, b=20,c;
    c=a;
    a=b;
    b=c;
    printf("After Swapping a=%d\n, b=%d\n",a,b);

    return 0;
}