#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n, k,s, next = 0;
    cin >> n >> k;

    vector <int> score;
    for(int i=0;i<n;i++){
        cin >> s;
        score.push_back(s);
    }
    for(int i=0;i<n;i++){
        if(score[i]>=score[k-1] && score[i]>0){
            next++;
        }
    }
    cout <<next <<endl;

}