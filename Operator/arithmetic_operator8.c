#include<stdio.h>
int main()
{
    float cent,F;
    printf("enter Fahrenheit:");
    scanf("%f",&F);
    cent=(F-32)/1.8;
    printf("Centigrade=%.2f\n",cent);
    return 0;
}

