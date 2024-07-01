#include<stdio.h>
int main()
{
    int n,m,temp,sum=0;
    scanf("%d %d",&n,&m);
    if(n>m)
    {
        temp = m;
        m = n;
        n = temp;
    }
    for(int i=n; i<=m; i++)
    {
        if(i%13!=0)
            sum+=i;
    }
    printf("%d\n",sum);
    return 0;
}
