#include<stdio.h>
int main()
{
    int n,j=0,N[1000];
    scanf("%d",&n);
    for(int i=0;i<1000;i++)
    {
        N[i] = j;
        printf("N[%d] = %d\n",i,N[j]);
        j++;
        if(n==j) j=0;
    }
    return 0;
}
