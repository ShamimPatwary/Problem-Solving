#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    char one[8], char two[8];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s %s",&one,&two);
    }
    printf("%c",one);
}
