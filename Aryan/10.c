#include<stdio.h>
void check(int a, int b, int c);
void main()
{
    int a,b,c;
    printf(" Enter the angle of the triangle \n");
    scanf("%d %d %d",&a,&b,&c);
    check(a,b,c);
}
void check(int a, int b, int c)
{
    if(a+b+c==180)
        printf(" Triangle is Possible ");
       
    else 
        printf(" Triangle is not possible ");             
}   




