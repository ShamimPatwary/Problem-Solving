#include<stdio.h>
int main()
{
    int f,k;
    long long int F[60];
    F[0] = 0;
    F[1] = 1;
    for(int i=2;i<61;i++)
    F[i] = F[i-1]+F[i-2];
    scanf("%d",&k);
    for(int i=0;i<k;i++)
    {
        scanf("%d",&f);
        printf("Fib(%d) = %lld\n",f,F[f]);
    }
    return 0;
}
