#include<stdio.h>
int main()
{
    int x,y,z,l,m=1;
    scanf("%d %d",&x,&y);
    z = y/x;
    l = x;
    for(int i=1;i<=z;i++)
    {
        printf("%d",m);
        for(int j=m+1;j<=l;j++)
        {
            printf(" %d",j);
        }
            printf("\n");
            m += x;
            l +=x;
    }
    return 0;
}
