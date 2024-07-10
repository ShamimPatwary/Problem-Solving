#include<stdio.h>
int main()
{
    int n,m,p=0;
    scanf("%d",&n);
    int N[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&m);
        N[i] = m;
    }
    int minimum = N[0];
    for(int j=0;j<n;j++)
    {
        if(minimum>N[j])
        {
            minimum = N[j];
            p = j;
        }
    }
    printf("Menor valor: %d\n",minimum);
    printf("Posicao: %d\n",p);
}
