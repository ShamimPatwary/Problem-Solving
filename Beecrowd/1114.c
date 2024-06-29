#include<stdio.h>
int main()
{
    int n,m=2002;
    for(int i=0;i<=99;i++)
    {
        scanf("%d",&n);
        if(n==m)
        {
            printf("Acesso Permitido\n");
            break;
        }
        else printf("Senha Invalida\n");
    }
    return 0;
}
