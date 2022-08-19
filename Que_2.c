#include<stdio.h>
int HCF(int,int);
int main()
{
    int x,y,h;
    printf("Enter two numbers ");
    scanf("%d%d",&x,&y);
    h=HCF(x,y);
    printf("HCF is %d",h);
    return 0;
}
int HCF(int x,int y)
{
    int h;
    for(h=x<y?x:y;h>1;h--)
    {
        if(x%h==0 && y%h==0)
            return h;
    }
}
