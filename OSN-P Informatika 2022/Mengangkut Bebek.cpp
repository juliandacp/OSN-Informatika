#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    ll k;
    cin >> k;
    pair<ll,ll>c[k];
    int i;
    for(i=0; i<k; i++){
        cin >> c[i].second;
    }
    for(i=0; i<k; i++){
        cin >> c[i].first;
    }
    sort(c, c+k);
    ll n;
    cin >> n;
    ll b[n];

    for(i=0; i<n; i++){
        cin >> b[i];
    }
    sort(b, b+n, greater<int>());
    ll a=0;
    ll y=0;
    for(i=0; i<n; i++){
        if(c[y].second > 0){
            c[y].second--;
            a=a+c[y].first*b[i];
        }else{
            y++;
            i--;
        }
    }
    cout << a;
}