#include<bits/stdc++.h>
using namespace std;

long long y[100005], energi[100005];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    long long N, lbiasa, lsuper, bolak_balik;
    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> y[i];
        if(i==1){
            energi[i]=0;
        }
        if(i==2){
            lbiasa=(y[i]-y[i-1])*(y[i]-y[i-1]);
            energi[i]=lbiasa+energi[i-1];
        }
        else if(i>2){
            lbiasa=(y[i]-y[i-1])*(y[i]-y[i-1])+energi[i-1];
            lsuper=3*((y[i]-y[i-2])*(y[i]-y[i-2]))+energi[i-2];
            bolak_balik=((y[i-1]-y[i-2])*(y[i-1]-y[i-2])+3*((y[i]-y[i-2])*(y[i]-y[i-2])))+energi[i-1];
            energi[i]=min(lbiasa, lsuper);
            energi[i]=min(energi[i], bolak_balik);
        }
    }
    cout << energi[N];
    return 0;
}