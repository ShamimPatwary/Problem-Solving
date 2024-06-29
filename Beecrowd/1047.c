#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    if (a==b==c==d) printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    else if (a<c && b<d) printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(c-a),(d-b));

}
