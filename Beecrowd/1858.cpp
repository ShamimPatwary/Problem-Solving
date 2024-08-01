#include<iostream>
using namespace std;
int main()
{
    int n,x[100];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    int min=0;
    for(int j=0;j<n;j++)
    {
        if(x[min]>x[j])
        {
            min = j;
        }
    }
    cout << min+1 <<endl;

    return 0;
}
