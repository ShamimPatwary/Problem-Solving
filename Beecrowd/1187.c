#include<stdio.h>
int main()
{
    double M[12][12],sum=0.0;
    char x[2];
    scanf("%c",&x);
    int n=1,m=10;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            scanf("%lf",&M[i][j]);
        }
    }
    for(int i=0;i<5;i++)
    {
        for(int j=n;j<=m;j++)
        {
            sum+=M[i][j];
        }
        n++;
        m--;
    }
    if(x[0]=='S') printf("%.1lf\n",sum);
    else if(x[0]=='M') printf("%.1lf\n",sum/30.0);
    return 0;
}
