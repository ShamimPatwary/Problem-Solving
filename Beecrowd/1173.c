#include<stdio.h>
int main()
{
    int n,N[10];
    scanf("%d",&n);
    for(int i=0;i<10;i++)
    {
        N[i] = n;
        n = n*2;
    }
    for(int j=0;j<10;j++)
    {
        printf("N[%d] = %d\n",j,N[j]);
    }
    return 0;
}
