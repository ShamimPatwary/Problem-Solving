#include<stdio.h>
int main()
{
    int n,z;
    while(1)
    {
        z = 0;
        scanf("%d",&n);
        if(n==0) break;
        else if(n%2!=0)n++;
        for(int i=0;i<5;i++)
        {
            z+=n;
            n+=2;
        }
        printf("%d\n",z);
    }
}
