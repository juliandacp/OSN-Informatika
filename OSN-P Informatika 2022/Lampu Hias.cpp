#include<bits/stdc++.h>
using namespace std;

int main(){
    long long P, Q, R, N, T;
    cin >> P >> Q >> R >> N;
    for(int i=0; i<N; i++){
        cin >> T;
        if(T%P==0 && T%Q==0 && T%R==0){
            cout << "YA" << endl;
        }else{
            cout << "TIDAK" << endl;
        }
    }
    return 0;
}