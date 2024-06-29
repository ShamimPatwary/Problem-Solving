#include<stdio.h>
int main()
{
    int m,n,i,sum=0;
    for(int j=0;j<=99;j++)
    {
        scanf("%d %d",&m,&n);
        if(m<=0 || n<=0)break;
        if(m>n)
        {
            i = m;
            m = n;
            n = i;
        }
        for(int i=m; i<=n; i++)
        {
            printf("%d ",i);
            sum+=i;
        }
        printf("Sum=%d\n",sum);
        sum = 0;
    }
    return 0;
}
