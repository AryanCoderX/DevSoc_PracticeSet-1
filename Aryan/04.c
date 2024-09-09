#include<stdio.h>
void quadrant(int a, int b);
void main()
{
    int x,y;
    printf(" Enter 'x' and 'y' coordinate \n");
    scanf("%d %d",&x, &y);
    quadrant(x,y);
}
void quadrant(int a, int b)
{
    if(a>0 && b>0)
        printf(" Quadrant-I(++) ");
    else if(a<0 && b>0)
        printf(" Quadrant-II(-+) ");    
    else if(a<0 && b<0)
        printf(" Quadrant-III(--) "); 
    else if(a>0 && b<0)
        printf(" Quadrant-IV(+-) ");         
    else 
        printf("THE COORDINATE IS ON THE AXIS"); 
}   




