#include<stdio.h>
int main()
{
    double n,N[100];
    scanf("%lf",&n);
    for(int i=0;i<100;i++)
    {
        N[i] = n;
        printf("N[%d] = %.4lf\n",i,N[i]);
        n/=2.0;
    }
    return 0;
}
