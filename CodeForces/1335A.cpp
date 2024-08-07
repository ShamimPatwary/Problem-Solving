#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        int t;
        cin >> t;
        if(t==1 || t==0){
            cout << "0" << endl;
        }
        else{
            cout << (t-1)/2 << endl;
        }
    }
}