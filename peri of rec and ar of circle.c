#include <stdio.h>

void main()
{   float r,l,b,area,perimeter;
    printf("enter your radius:");
    scanf("%f",&r);
    printf("enter your length:");
    scanf("%f",&l);
    printf("enter your breadth:");
    scanf("%f",&b);
    area=3.14*r*r;
    perimeter=2*l+2*b;
    printf("perimeter of rectangle=%f\n",perimeter);
    printf("area of circle=%f\n",area);
    
    
}
