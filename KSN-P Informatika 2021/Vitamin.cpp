#include<bits/stdc++.h>
using namespace std;

int obt, uang, hg[10005], kd[1005], ds[1005];
int kd_maks[1005][10005];
int fungsi(int N, int M){
    if(kd_maks[N][M]!=-1){
        return kd_maks[N][M];
    }
    if(N==0 || M==0){
        return 0;
    }
    if(M>=hg[N]){
        int beli=fungsi(N-1, M); //Opsi tdk beli
        if(ds[N]==1){
            beli=max(beli, kd[N]+fungsi(N-1, M-hg[N]));
        }else{
            beli=max(beli, kd[N]+fungsi(N, M-hg[N]));
        }
        kd_maks[N][M]=beli;
    }else{
        return fungsi(N-1, M);
    }
    return kd_maks[N][M];
}

int main(){
    memset(kd_maks, -1, sizeof (kd_maks));
    cin >> obt >> uang;
    for(int i=1; i<=obt; i++){
        cin >> hg[i] >> kd[i] >> ds[i];
    }
    cout << fungsi(obt, uang);
}