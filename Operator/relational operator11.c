#include<stdio.h>
int main()
{
    int mark;
    printf("enter mark:");
    scanf("%d",&mark);
    if(mark>100||mark<0)
        printf("invalid mark");
    else if(mark>=ss80)
        printf("A+");
        else if(mark>=70)
        printf("A");
        else if(mark>=60)
        printf("A-");
        else if(mark>=50)
        printf("B");
        else if(mark>40)
        printf("C");
        else if(mark>=33)
        printf("D");
        else
        printf("fail");
    return 0;
}
