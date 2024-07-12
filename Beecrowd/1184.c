#include<stdio.h>
int main()
{
    double M[12][12],sum=0.0;
    char x[2];
    scanf("%c",&x);
    int n=1;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            scanf("%lf",&M[i][j]);
        }
    }
    for(int i=1;i<12;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum+=M[i][j];
        }
        n++;
    }
    if(x[0]=='S') printf("%.1lf\n",sum);
    else if(x[0]=='M') printf("%.1lf\n",sum/66.0);
    return 0;
}
