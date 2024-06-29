#include<stdio.h>
int main()
{
    int n,x,y,a=0;;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&x,&y);
        if(x>y)
        {
            int temp = x;
            x = y;
            y = temp;
        }
        if(x%2==0) x--;
        x+=2;
        for(int j=x;j<y;j+=2)
        {
            a+=j;
        }
        printf("%d\n",a);
        a = 0;
    }
    return 0;
}
