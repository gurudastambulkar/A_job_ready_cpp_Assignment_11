#include<stdio.h>
#include<conio.h>
int LCM(int,int);
int main()
{
    int num1,num2,lcm;
    printf("Enter two numbers: ");
    scanf("%d%d",&num1,&num2);
    lcm=LCM(num1,num2);
    printf("LCM of %d and %d is %d",num1,num2,lcm);
    return 0;
}
int LCM(int a,int b)
{
    int x=a,y=b,i=2,j=2;
    while(x!=a*b)
    {
        if(x<y)
        {
            x=a*i;
            i++;
        }
        if(y<x)
        {
            y=b*j;
            j++;
        }
        if(x==y)
            return x;

    }

}
