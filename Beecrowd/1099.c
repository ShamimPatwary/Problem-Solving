#include<stdio.h>

void sum_odd(int x, int y)
{
    int z=0;
    if(x==y)
    {
        printf("The sum of odd is : %d\n",z);
    }
    else if(x%2==0 && x<y)
    {
        for(int i=x+1; i<y; i++)
        {
            z+=i;
            printf("The sum of odd is : %d\n",z);
            i+=2;
        }
    }
    else if(y%2==0 && y<x)
    {
        for(int i=y+1; i<x; i++)
        {
            z+=i;
            printf("The sum of odd is : %d\n",z);
            i+=2;
        }
    }
    return;
}



int main()
{
    int n,x,y;
    printf("Enter test cases : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("Enter the value of X : ");
        scanf("%d",&x);
        printf("Enter the value of Y : ");
        scanf("%d",&y);
        sum_odd(x,y);
    }
    return;
}
