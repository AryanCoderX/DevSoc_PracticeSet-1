#include<stdio.h>
void division(int a, int b);
void main()
{
    int x,y;
    printf(" Enter two numbers \n");
    scanf("%d %d",&x, &y);
    division(x,y);
}
void division(int a, int b)
{
    if(a%b==0)
    {
        float calculate = a/b;
        printf("%f",calculate);
    }
        
    else if (a%b!=0)
        printf("Division not possible");   
}   




