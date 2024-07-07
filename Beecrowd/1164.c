#include<stdio.h>
int main()
{
    int n,x,r,sum;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        x = 0,r=0,sum=0;
        scanf("%d",&x);
        for(int i=1;i<x;i++)
        {
            r = x%i;
            if(r==0)
            {
                sum+=i;
            }
        }
        if(x==sum)
            printf("%d eh perfeito\n",x);
        else
            printf("%d nao eh perfeito\n",x);
    }
    return 0;
}
