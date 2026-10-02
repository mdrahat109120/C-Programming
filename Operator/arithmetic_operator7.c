#include<stdio.h>
int main()
{
    float cent,F;
    printf("enter centigrade:");
    scanf("%f",&cent);
    F=(cent*1.8)+32;
    printf("Fahrenheit=%f\n",F);
    return 0;
}
