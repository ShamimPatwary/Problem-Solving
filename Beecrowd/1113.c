#include<stdio.h>
int main()
{
    int m,n;
    for(int i=0;i<=99;i++)
    {
        scanf("%d %d",&m,&n);
        if(m==n)break;

        else if(m>n)
        {
            printf("Decrescente\n");
        }

        else if(n>m)
        {
            printf("Crescente\n");
        }
    }
    return 0;
}
