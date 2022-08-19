#include<stdio.h>
int square(int);
int main()
{
    int x,y;
    printf("Enter a number ");
    scanf("%d",&x);
    y=square(x);
    printf("Square of %d is %d",x,y);
    return 0;
}
int square(int x)
{
    int y;
    y=x*x;
    return y;
}


