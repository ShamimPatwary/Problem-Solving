#include<stdio.h>
int main()
{
    int n,m,a,b;
    while(1)
    {
        scanf("%d",&n);
        if(n==0) break;
        int arr[n][n];
        m = n/2;
        if(n%2==1)m++;
        a = 0;
        b = n-1;
        for(int l=1;l<=m;l++)
        {
            for(int i=a;i<=b;i++)
            {
                for(int j=a;j<=b;j++)
                {
                    arr[i][j] = l;
                }
            }
            a++;
            b--;
        }

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(j==0) printf("%3d",arr[i][j]);
                else printf(" %3d",arr[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
}
