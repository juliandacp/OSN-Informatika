#include<bits/stdc++.h>
using namespace std;

int M, s[10005], e[10005], p[10005], gater[10005];

int main(){
    int i, j;
    cin >> M;
    memset(gater, 0, sizeof gater);
    for(i=1; i<=M; i++){
        cin >> s[i] >> e[i] >> p[i];
    }
    for(i=0; i<=10005; i++){
        for(j=1; j<=M; j++){
            if(i==e[j]){
                gater[i]=max(gater[i], gater[s[j]-1]+p[j]);
            }
        }
        gater[i]=max(gater[i], gater[i-1]);
    }
    cout << gater[10005];
    return 0;
}