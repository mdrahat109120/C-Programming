#include<stdio.h>
#include <math.h>

int main()
{
    float radius,area;
    printf("enter radius:");
    scanf("%f",&radius);
    area=3.1416*radius*radius;
    printf("area=%.2f\n",area);
    return 0;
}
