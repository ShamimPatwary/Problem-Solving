#include<stdio.h>
int main()
{
    double M[12][12],sum=0.0;
    char O[2];
    scanf("%c",&O);
    int n=11;
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            scanf("%lf",&M[i][j]);
        }
    }
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<n;j++)
        {
            sum+=M[i][j];
        }
        n--;
    }
    if(O[0]=='S') printf("%.1lf\n",sum);
    else if(O[0]=='M') printf("%.1lf\n",sum/66.0);
    return 0;
}
