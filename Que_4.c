#include<stdio.h>
int Nxtprime(int);
int main()
{
    int x,p;
    printf("Enter a number ");
    scanf("%d",&x);
    p=Nxtprime(x);
    printf("Next prime number is %d",p);
    return 0;
}
int Nxtprime(int x)
{
    int i,count=0;
    while(x>0)
    {
        count=0;
        for(i=x-1;i>1;i--)
        {
            if((x+1)%i==0)
            {
                count++;
                break;
            }
        }
        x++;
        if(count==0)
            return x;
    }
}
