#include<stdio.h>
void Fibo(int);
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    Fibo(x);
    return 0;
}
void Fibo(int x)
{
    int a=1,b=0,i,c;
    for(i=1;i<=x;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
