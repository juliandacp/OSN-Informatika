#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    string s;
    cin >> s;
    string a="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int banyak[26];
    memset(banyak, 0, sizeof banyak);
    for(int i=0; i<s.length(); i++){
        for(int j=0; j<26; j++){
            if(s[i]==a[j]){
                banyak[j]++;
            }
        }
    }
    sort(banyak, banyak+26, greater<int>());

    if(banyak[2]==0){
        cout << "-1";
    }
    else if(banyak[0]==banyak[2]){
        cout << banyak[0]*3;
    }
    else if(banyak[0]>banyak[1] && banyak[1]==banyak[2]){
        cout << banyak[1]*3+1;
    }
    else if(banyak[1]>banyak[2]){
        cout << banyak[2]*3+2;
    }
    return 0;
}