#include<stdio.h>
int main()
{
    int n,c=0;
    float avg=0,r=0;
    while(1)
    {
        scanf("%d",&n);
        if(n<0) break;
        c+=n;
        r++;
    }
    avg = c/r;
    printf("%.2f\n",avg);
    return 0;
}
