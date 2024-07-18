#include<stdio.h>
int main()
{
    int n,s,m,l;
    while(scanf("%d",&n)!=EOF)
    {
        m = 0;
        for(int i=0;i<n;i++)
        {
            scanf("%d",&s);
            if(s>m) m = s;
        }
        if(m<10) l=1;
        else if(m>=10 && m<20) l=2;
        else if(m>=20) l=3;
        printf("%d\n",l);
    }
    return 0;
}
