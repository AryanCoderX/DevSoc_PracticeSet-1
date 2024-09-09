#include<stdio.h>
float commission(int n);
void main()
{
    int saleAmount;
    printf(" Enter your Sale Amount \n");
    scanf("%d",& saleAmount);
    commission(saleAmount);
    printf(" Commission is :%f",commission(saleAmount));
}
float commission(int n)
{
    if(n<500)
        return 35.0;
    else if(n>=500 && n<=2000)
        return 0.1*n; 
    else if(n>=2001 && n<=5000)
        return 0.15*n; 
    else if(n>5000 )
        return 0.2*n;               
}   




