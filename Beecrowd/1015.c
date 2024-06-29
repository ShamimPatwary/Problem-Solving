#include<stdio.h>
int main()
{
    double x1,y1,x2,y2;
    scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
    double a,b,c;
    a = (x2-x1)*(x2-x1);
    b = (y2-y1)*(y2-y1);
    c = sqrt(a+b);
    printf("%.4lf\n",c);
    return 0;
}
