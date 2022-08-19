#include<stdio.h>
void Prime(int,int);
int main()
{
    int x,y,a,b;
    printf("Enter two numbers ");
    scanf("%d%d",&x,&y);
    a=x<y?x:y;
    b=x>y?x:y;
    Prime(a,b);
    return 0;
}
void Prime(int x,int y)
{
    int j=2,ab;
    x=x+1;
    y=y-1;
    while(x<=y)
    {
        ab=0;
        if(x==1 || x==2)
        {
            printf("%d ",x);
        }
        for(j=2;j<x;j++)
        {
            if(x%j==0)
            {
                ab++;
                break;
            }
        }
        if(x!=1 && x!=2)
        {
            if(ab==0)
            {
                printf("%d ",x);
            }
        }
        x++;
    }
}
