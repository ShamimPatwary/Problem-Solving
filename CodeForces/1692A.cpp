#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int arr[4];
        int count = 0;
        for(int i=0; i<4; i++){
            cin >> arr[i];
        }
        int n = arr[0];
        for(int i=1; i<4; i++){
            if(n < arr[i]){
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}