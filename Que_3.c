#include<stdio.h>
int Prime(int);
int main()
{
    int x,p;
    printf("Enter a number ");
    scanf("%d",&x);
    p=Prime(x);
    if(p==1)
        printf("%d is a prime number",x);
    else
        printf("%d is not a prime number",x);
    return 0;
}
int Prime(int x)
{
    int y=x-1;
    while(y>1)
    {
        if(x%y==0)
            return 0;
        y--;
    }
    if(y==0 || y==2)
        return 1;
}
