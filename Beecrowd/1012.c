#include<stdio.h>
int main()
{
    double A,B,C;
    scanf("%lf %lf %lf",&A,&B,&C);
    double T,Cir,Tra,S,R;
    T = (A*C)/2;
    Cir = 3.14159*C*C;
    Tra = ((A+B)*C)/2;
    S = B*B;
    R = A*B;
    printf("TRIANGULO: %.3lf\n",T);
    printf("CIRCULO: %.3lf\n",Cir);
    printf("TRAPEZIO: %.3lf\n",Tra);
    printf("QUADRADO: %.3lf\n",S);
    printf("RETANGULO: %.3lf\n",R);
}
