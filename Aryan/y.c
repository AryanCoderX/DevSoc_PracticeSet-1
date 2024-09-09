#include<stdio.h>
void work(int x, int y, int *sum, int *prod, int *avg);
void main()
{    
    int a, b, sum, prod, avg;
    printf(" Enter two numbers \n");
    scanf("%d %d",&a,&b);
    work(a,  b,  &sum,  &prod,  &avg);

    printf(" Sum= %d",sum);
    printf(" product= %d",prod);
    printf(" Average= %d",avg);

}
void work(int x, int y, int *sum, int *prod, int *avg)
{
    *sum = x+y;
    *prod = x*y;
    *avg = (x+y)/2;
}