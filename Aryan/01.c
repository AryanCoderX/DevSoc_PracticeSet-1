#include<stdio.h>
void grade(int n);
void main()
{
    int marks;
    printf(" Enter your marks \n");
    scanf("%d",& marks);
    grade(marks);
}
void grade(int n)
{
    if(n>=90 && n<=100)
        printf(" Your grade is 'O' ");
    else if(n>=80 && n<=89)
        printf(" Your grade is 'E' ");    
    else if(n>=70 && n<=79)
        printf(" Your grade is 'A' "); 
    else if(n>=60 && n<=69)
        printf(" Your grade is 'B' "); 
    else if(n>=50 && n<=59)
        printf(" Your grade is 'c' "); 
    else if(n>=40 && n<=49)
        printf(" Your grade is 'D' ");  
    else if( n<=40)
        printf(" Your grade is 'FAIL' ");         
    else 
        printf("INVALID INPUT"); 
}   




