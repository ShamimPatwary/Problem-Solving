#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i=1;;i++){
            if(i%3==0 || i%10==3){
                continue;
            }
            else{
                --n;
                if(n==0){
                    cout << i << endl;
                    break;
                }
            }
        }
    }
}