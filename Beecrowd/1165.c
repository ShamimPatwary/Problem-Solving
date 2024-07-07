#include<stdio.h>
int main()
{
    int n,x,p;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        x=0,p=0;
        scanf("%d",&x);
        for(int j=2;j<x;j++)
        {
            if(x%j==0)
            {
                p=1;
                break;
            }
        }
        if(p==0)
            printf("%d eh primo\n",x);
        else
            printf("%d nao eh primo\n",x);
    }
    return 0;
}
