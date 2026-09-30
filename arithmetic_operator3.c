#include<stdio.h>
#include <math.h>

int main()
{
    int num1,num2,num3,sum;
    float avg;
    printf("enter 3 number:");
    scanf("%d,%d,%d",&num1,num2,num3);
    sum=num1+num2+num3;
    avg=sum/3.0;
    printf("sum=%d\n",sum);
    printf("avg=%.2f\n",avg);
    return 0;
}

