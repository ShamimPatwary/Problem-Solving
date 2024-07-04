#include<stdio.h>
int main()
{
    int x,z,c=1,sum=0;
    scanf("%d %d",&x,&z);
    while(z<x || z==x) scanf("%d",&z);
    for(int i=x;i<z;i++)
    {
        sum+=i;
        if(sum>z) break;
        c++;
    }
    printf("%d\n",c);
    return 0;
}
