#include<stdio.h>
int main()
{
    double M[12][12],sum=0.0;
    int m;
    char X[2];
    scanf("%d %s",&m,&X);
    for(int i=0;i<12;i++)
    {
        for(int j=0;j<12;j++)
        {
            scanf("%lf",&M[i][j]);
        }
    }
    for(int i=0;i<12;i++)
    {
        sum+=M[m][i];
    }
    if(X[0]=='S')printf("%.1lf\n",sum);
    else if(X[0]=='M')printf("%.1lf\n",sum/12.0);
    return 0;
}
