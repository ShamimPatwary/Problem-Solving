#include<stdio.h>
int main()
{
    int n,k,l;
    while(1)
    {
        scanf("%d",&n);
        if(n==0)break;
        int arr[n][n];
        l=1;
        for(int i=1;i<=n;i++)
        {
            k = l;
            for(int j=1;j<=n;j++)
            {
                arr[i][j] = k;
                printf("%d ",arr[i][j]);
                k+=k;
            }
            l+=l;
            printf("\n");
        }
    }
}
