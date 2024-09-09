#include<stdio.h>
int fibonacci(int n);
void main()
{
    int lenghth;
    printf(" Enter the length of fibonacci series \n");
    scanf("%d",&lenghth);
    printf(" Fibbonacci series: ");
    for(int i=1; i<=lenghth; i++)
    {
    printf("%d \t",fibonacci(i));
    }

}
int fibonacci(int n)
{
    if(n==1)
    return 0;
    else if(n==2)
    return 1;
    return (fibonacci(n-2)+fibonacci(n-1));
}
