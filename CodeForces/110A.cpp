#include<iostream> //normal method
using namespace std;
int main(){
    long long n;
    cin >> n;
    int lucky=0;
    while(n!=0){
        if(n%10==4 || n%10==7){
            lucky++;
        }
        n = n / 10;
    }
    if(lucky==7 || lucky==4){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

#include<iostream> //to_string method
using namespace std;
int main(){
    long long n;
    cin >> n;
    int lucky = 0;
    string s = to_string(n);
    for(int i=0; i<s.size(); i++){
        if(s[i] == '4' || s[i] == '7'){
            lucky++;
        }
    }
    if(lucky==7 || lucky==4){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

}