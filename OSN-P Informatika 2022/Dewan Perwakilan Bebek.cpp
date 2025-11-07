#include<bits/stdc++.h>
using namespace std;

long long N, P, Q, i, j, awal, selisih;
long long arr_anggota[100001], pilihan[100001];
pair <long long, long long>bebek[100001];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> N >> P >> Q;
    for(i=1; i<=N; i++){
        cin >> bebek[i].first;
        bebek[i].second=i;
    }
    sort(bebek+1, bebek+N+1);
    awal=1;
    selisih=-bebek[1].first;
    for(i=1; i<=N; i++){
        selisih+=bebek[i].first-bebek[i-1].first;
        while(awal<=i && selisih>P){
            awal++;
            selisih-=bebek[awal].first-bebek[awal-1].first;
        }
        for(j=awal; j<=i; j++){
            arr_anggota[bebek[j].second]=max(arr_anggota[bebek[j].second], i-awal+1);
        }
    }
    for(i=1; i<=Q; i++){
        cin >> pilihan[i];
        cout << arr_anggota[pilihan[i]] << '\n';
    }
    return 0;
}