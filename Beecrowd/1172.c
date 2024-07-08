#include<stdio.h>
int main()
{
    int x[10];
    for(int i=0;i<10;i++)
    {
        scanf("%d",&x[i]);
    }
    for(int j=0;j<10;j++)
    {
        if(x[j]==0 ||x[j]<0)
        {
            x[j]=1;
        }
    }
    for(int k=0;k<10;k++)
    {
        printf("X[%d] = %d\n",k,x[k]);
    }
    return 0;
}
