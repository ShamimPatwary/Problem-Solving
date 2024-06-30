#include<stdio.h>
int main()
{
    float n,arr[4],avg;
    int i=0,j;
    while(1)
    {
    while(1)
    {
        scanf("%f",&n);
        if(n>=0 && n<=10)
        {
            arr[i] = n;
            i++;
        }
        else printf("nota invalida\n");
         if(i>1) break;
    }
    avg = (arr[0]+arr[1])/2.0;
    printf("media = %.2f\n",avg);
    i=0;
    while(1)
    {
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&j);
        if(j==1 || j==2) break;
    }
    if(j==1) continue;
    else break;
    }
}
