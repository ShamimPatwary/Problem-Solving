#include<stdio.h>
int main()
{
    int x,y;
    float z;
    scanf("%d %d", &x,&y);
    float price[5] = {4.00,4.50,5.00,2.00,1.50};
    float snack = price[x-1]*y;
    printf("Total: R$ %.2f\n",snack);
    return 0;
}
