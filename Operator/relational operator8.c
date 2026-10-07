#include<stdio.h>
int main()
{
    char ch;
    printf("enter any latter:");
    scanf("%c",&ch);
    if(ch>='A' && ch<='Z')
        printf("chapital");
    else if(ch>='a' && ch<='z')
        printf("small");
    else
        printf("not a latter");
    return 0;
}

