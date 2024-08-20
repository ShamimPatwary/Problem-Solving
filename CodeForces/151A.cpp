#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int total_drink = k * l;
    total_drink = total_drink / nl;
    int total_slice = c * d;
    int total_salt = p / np;
    int ans = min(min(total_drink,total_slice),total_salt)/n;
    cout << ans << endl;
}