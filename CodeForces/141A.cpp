#include<bits/stdc++.h>
using namespace std;
int main(){
    string x,y,z;
    cin >> x >> y >> z;
    string s = x + y;
    sort(z.begin(), z.end());
    sort(s.begin(), s.end());
    if(s == z){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}