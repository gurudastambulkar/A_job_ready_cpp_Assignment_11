#include<stdio.h>
void Prime(int);
int main()
{
    int x;
    printf("Enter a number ");
    scanf("%d",&x);
    Prime(x);
    return 0;
}
void Prime(int x)
{
    int i=1,j=2,count=0,ab=0;
    while(count<x)
    {
        ab=0;
        if(i==1 || i==2)
        {
            printf("%d ",i);
            count++;
        }
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                ab++;
                break;
            }
        }
        if(i!=1 && i!=2)
        {
            if(ab==0)
            {
                printf("%d ",i);
                count++;
            }
        }
        i++;
    }
}
