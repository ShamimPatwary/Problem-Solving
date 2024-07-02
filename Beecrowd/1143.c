#include<stdio.h>
int main()
{
    int a=1,b=1,c=1,n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        printf("%d %d %d\n",a,b,c);
        a+=1;
        b = a*a;
        c = a*b;
    }
    return 0;
}
