#include<stdio.h>
int main()
{
    int i=0;
    float n,arr[3],avg;
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
    return 0;
}
