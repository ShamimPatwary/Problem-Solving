#include<stdio.h>
int main()
{
    float s=0,j=1.0;
    for(int i=1;i<=100;i++)
    {
        s+=(1/j);
        j++;
    }
    printf("%.2f\n",s);
    return 0;
}
