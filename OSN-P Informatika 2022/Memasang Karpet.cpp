#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long N, M;
    cin >> N >> M;
    long long mod=1e9+7;
    if(N==1){
        long long hasil1=2;
        for(int i=2; i<=M; i++){
            hasil1=(hasil1*3)%mod;
        }
        cout << hasil1;
    }else{
        long long hasil2[M], a[M], b[M], c[M];
        hasil2[0]=1;
        a[0]=b[0]=c[0]=0;
        for(int i=1; i<=M; i++){
            a[i]=(2*hasil2[i-1]+3*b[i-1]+2*c[i-1])%mod;
            b[i]=(hasil2[i-1]+3*a[i-1]+2*c[i-1])%mod;
            c[i]=(hasil2[i-1]+a[i-1]+b[i-1]+3*c[i-1]%mod);
            hasil2[i]=(a[i]+2*b[i]+2*c[i])%mod;
        }
        cout << hasil2[M];
    }
    return 0;
}