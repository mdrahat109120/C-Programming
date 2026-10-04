#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    if (num1>num2)
    printf("large=%d\n",num1);
    else if(num1<num2)
    printf("large=%d\n",num2);
    else
        printf("number are equal");
    return 0;
}


