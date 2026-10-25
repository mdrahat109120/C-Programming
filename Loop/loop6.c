#include<stdio.h>
int main()
{
int i;
i=1;
rahat:
printf("%d\t",i);
i++;
if(i<10)
goto rahat;
return 0;

}

