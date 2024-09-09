#include<stdio.h>
void condition(int n);
void main()
{
    int tempreature;
    printf(" Enter Tempreature \n");
    scanf("%d",& tempreature);
    condition(tempreature);
}
void condition(int n)
{
    if(n<0)
        printf("Freezing weather");
    else if(n>0 && n<10)
        printf("Very cold weather");    
    else if(n>10 && n<20)
        printf("Cold weather"); 
    else if(n>20 && n<30)
        printf("Normal in temp");
    else if(n>30 && n<40)
        printf("Its hot");
    else if(n>=40)
        printf("Its Very hot");         
}   




