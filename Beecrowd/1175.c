#include<stdio.h>
int main()
{
    int N[20];
    for(int i=19;i>=0;i--)
    {
        scanf("%d",&N[i]);
    }
    for(int j=0;j<20;j++)
    {
        printf("N[%d] = %d\n",j,N[j]);
    }
    return 0;
}
