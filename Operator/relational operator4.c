#include<stdio.h>
int main ()
{
    float marks;
    printf("enter your marks:");
    scanf("%f",&marks);
    if(marks>=80)
    printf("A+");
    else if(marks>=70)
    printf("A");
    else if(marks>=60)
    printf("B");
    else if(marks>=50)
    printf("c");
    else if(marks>=40)
    printf("D");
    else
        printf("Fail");
    return 0;
}
