#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        int d = abs(y-x);
        if(d%10==0) cout << d/10 << endl;
        else cout << d/10+1 << endl;
    }
}