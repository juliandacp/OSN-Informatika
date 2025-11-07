#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,i,j, patok_terlewati;
    cin>>n>>k;
    int patok[n], bebek[k], jarak[n];
    for(i=0; i<n; i++){
        cin >> patok[i];
    }
    jarak[0]=patok[0];
    for(i=1; i<n; i++){
        jarak[i]=patok[i]+jarak[i-1];
    }
    for(i=0;i<k;i++){
        cin >> bebek[i];
    }
    for(i=0; i<k; i++){
       patok_terlewati=0;
       for(j=0; j<n; j++){
           if(bebek[i]>=jarak[j]){
               patok_terlewati++;
           }
           else{
               break;
           }
       }
       cout << patok_terlewati << endl;
    }
}