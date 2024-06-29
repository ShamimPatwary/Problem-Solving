#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f %f %f",&a,&b,&c);
    float f,g;
    f = a+b+c;
    g = ((a+b)*c)/2;
    if (a+b>c && a+c>b && c+b>a){
        printf("Perimetro = %.1f\n",f);
    }
    else printf("Area = %.1f\n",g);
    return 0;

}
