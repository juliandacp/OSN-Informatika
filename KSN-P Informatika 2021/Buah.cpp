#include<bits/stdc++.h>
using namespace std;

int main(){
	long long N, A, B, KPK;
	cin >> N >> A >> B;
	KPK = A*B/__gcd(A, B);
	cout << (KPK/A) + (KPK/B) << endl; 
	return 0;
}