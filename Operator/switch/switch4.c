#include<stdio.h>
int main()
{
    int choice;
    float temp,converteadTemp;
    printf("temperature conversion menu\n");
    printf("1.fahrenheit to celsius\n");
    printf("2.celsius to fahrenheit\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        {
            printf("Enter the frhrenheit temperature:");
            scanf("%f",&temp);
            converteadTemp=(temp-32)/1.8;
            printf("the thmperature in celcius is=%f\n",converteadTemp);
            break;
        }
    case 2:
        {
         printf("Enter the celcius temperature:");
            scanf("%f",&temp);
            converteadTemp=(temp*1.8)+32;
            printf("the thmperature in celcius is=%f\n",converteadTemp);
            break;
        }
    default:

            printf("not a correct option");
    }
    return 0;

}
