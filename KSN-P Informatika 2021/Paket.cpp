#include<bits/stdc++.h>
using namespace std;
vector<int>paket;

int binary_search(int P){
    int kiri=0;
    int kanan=paket.size()-1;
    int s=-1;
    while(kiri<=kanan){
        int mid=(kiri+kanan)/2;
        if(paket[mid]>=P){
            s=mid;
            kanan=mid-1;
        }else{
            kiri=mid+1;
        }
    }
    return s;
}


int main(){
    long long N;
    cin >> N;
    long long x;
    cin >> x;
    paket.push_back(x);
    for(int i=1; i<N; i++){
        cin >> x;
        int cari=binary_search(x);
        if(cari==-1){
            paket.push_back(x);
        }else{
            paket[cari]=x;
        }
    }
    cout << paket.size() << endl;
    return 0;
}