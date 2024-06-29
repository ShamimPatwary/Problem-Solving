#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    scanf("%d",&d);
    if (a%2==0 && c>0 && d>0 && c+d>a+b && b>c && d>a){
            printf("Valores aceitos\n");
    }
    else {
        printf("Valores nao aceitos\n");
    }
    return 0;
}
