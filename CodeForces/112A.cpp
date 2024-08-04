#include<iostream>
using namespace std;
int main(){
    string a;
    string b;
    cin >> a >> b;
    if((a.size() && b.size()) <= 100){

        for(int i=0; i<a.size(),i<b.size(); i++){
            a[i] = towlower(a[i]);
            b[i] = towlower(b[i]);
        }
        if(a==b){
            cout << "0" << endl;
        }
        else if(a<b){
            cout << "-1" << endl;
        }
        else{
            cout << "1" << endl;
        }
    }
    return 0;
}