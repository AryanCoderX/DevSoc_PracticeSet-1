#include<stdio.h>
float charge(int n);
void main()
{
    int customerId, units;
    printf(" Enter your Customer Id \n");
    scanf("%d",& customerId);
    printf(" Enter your units consumed \n");
    scanf("%d",& units);
    printf(" Your Customer Id is:%d",customerId);
    printf ("\n Total amount to be paid: %f",charge(units));
}
float charge(int n)
{
    if(n<200)
        return n*1.20;
    else if(n>=200 && n<400)
        return n*1.50;    
    else if(n>=400 && n<600)
        return n*1.80; 
    else if(n>=600)
        return n*2.0; 
}   




