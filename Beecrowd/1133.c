#include<stdio.h>
int main()
{
    int n,m,temp;
    scanf("%d %d",&n,&m);
    if(n>m)
    {
        temp = n;
        n = m;
        m = temp;
    }
    n++;
    for(int i=n;i<m;i++)
    {
        if(i%5==2 || i%5==3)
        {
            printf("%d\n",i);
        }
    }
    return 0;
}
