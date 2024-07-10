#include<stdio.h>
int main()
{
    int n,even[5],odd[5],l=0,k=0;
    for(int i=0;i<15;i++)
    {
        scanf("%d",&n);
        if(n%2==0)
        {
            even[l]=n;
            l++;
            if(l==5)
            {
                for(int m=0;m<5;m++)
                {
                    printf("par[%d] = %d\n",m,even[m]);
                    even[m] = 0;
                }
                l=0;
            }
        }
        else
        {
            odd[k]=n;
            k++;
            if(k==5)
            {
                for(int n=0;n<5;n++)
                {
                    printf("impar[%d] = %d\n",n,odd[n]);
                    odd[n] = 0;
                }
                k=0;
            }
        }
    }

    for(int i=0;i<5;i++)
    {
        if(odd[i]==0)break;
        printf("impar[%d] = %d\n",i,odd[i]);
    }
    for(int j=0;j<5;j++)
    {
        if(even[j]==0)break;
        printf("par[%d] = %d\n",j,even[j]);
    }
    return 0;
}
