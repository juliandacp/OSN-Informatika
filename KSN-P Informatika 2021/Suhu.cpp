#include<bits/stdc++.h>
using namespace std;

int main(){
    long long baris, kolom, A, B, Q, orang_ke;
    cin >> baris >> kolom >> A >> B >> Q;
    for(long long i=1; i<=Q; i++){
        cin >> orang_ke;
        double l=double(B+1)/double(A+baris);
        double r=double(B+kolom)/double(A+1);
        for(long long j=1; j<=1005; j++){
            long long hitung=0;
            double mid=(l+r)/2;
                for(long long k=1; k<=baris; k++){
                    long long sementara=mid*double(A+k)-double(B);
                    if(sementara<0) sementara=0;
                    if(sementara>kolom) sementara=kolom;
                    hitung+=sementara;
                }
                if(hitung>=orang_ke)r=mid;
                else l=mid;
            }
            long long s=0;
            long long t=1;
            long long pembilang, penyebut;
            for(long long i=1; i<=baris; i++){
                pembilang=r*double(A+i);
                if(pembilang>B+kolom) continue;
                penyebut=A+i;
                if(s*penyebut<t*pembilang){
                    s=pembilang;
                    t=penyebut;
            }
        }
        long long FPB=__gcd(s, t);
        cout << s/FPB << "/" << t/FPB << endl;
    }
    return 0;
}