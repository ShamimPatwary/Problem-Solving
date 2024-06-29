#include<stdio.h>
int main()
{
    int a,b,c=0,d=0,e;
    scanf("%d",&a);
    for (b=0; b<a; b++){
        scanf("%d",&e);
        if (e>=10 && e<=20) c++;
        else d++;
    }
    printf("%d in\n",c);
    printf("%d out\n",d);
    return 0;
}
