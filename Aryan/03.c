#include<stdio.h>
void check(int a, int b, int c);
void main()
{
    int a,b,c;
    printf(" Enter the sides of the triangle \n");
    scanf("%d %d %d",&a,&b,&c);
    check(a,b,c);
}
void check(int a, int b, int c)
{
    if(a==b && b==c && c==a)
        printf(" It is an 'Equilateral Triangle' ");
    else if(a==b || b==c || c==a)
        printf(" It is an 'Isosceles Triangle' ");    
    else if(a!=b && b!=c && c!=a)
        printf(" It is an 'Scalene Triangle' ");             
}   




