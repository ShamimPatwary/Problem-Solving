#include<stdio.h>
int main()
{
    int n,arr[72][72];
    while(scanf("%d",&n)!=EOF)
    {
        int k = n-1;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j) arr[i][j] = 1;
                else arr[i][j] = 3;
                if(j==k) arr[i][j] = 2;
            }
            k--;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                printf("%d",arr[i][j]);
            }
            printf("\n");
        }
    }
}
