#include<stdio.h>
int main()
{
    int n,x,y,z;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        z=0;
        scanf("%d %d",&x,&y);
        if(x%2==0)x++;
        for(int j=0;j<y;j++)
        {
            z+=x;
            x+=2;
        }
        printf("%d\n",z);
    }
    return 0;
}
