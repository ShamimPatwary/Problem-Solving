#include<stdio.h>
int main()
{
    int A,B,C,D;
    scanf("%d",&A);
    scanf("%d",&B);
    scanf("%d",&C);
    scanf("%d",&D);
    int x,y,z;
    x = A*B;
    y = C*D;
    z = x-y;
    printf("DIFERENCA = %d\n",z);
    return 0;
}
