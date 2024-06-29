#include<stdio.h>
int main()
{
    double R;
    scanf("%lf",&R);
    double v;
    v = (4*3.14159*R*R*R)/3;
    printf("VOLUME = %.3lf\n",v);
}
