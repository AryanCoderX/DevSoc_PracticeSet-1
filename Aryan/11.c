#include<stdio.h>
void check(int a);
void main()
{
    int a;
    printf(" Enter any number \n");
    scanf("%d",&a);
    check(a);
}
void check(int a)
{
    if(a%2==0)
        printf("EVEN");
       
    else 
        printf("ODD");             
}   




