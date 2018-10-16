#include <iostream>
#include <cstring>

using namespace std;

constexpr int mod = 1000000007;

int pow(int base,int power) {
	int res = 1;
	for(int i = 0;i < power;i++) {
		res = res * base % mod;
	}
	return res;
}

int main(void) {
	int n,a,s[200000];
	memset(s,0,sizeof(int[200000]));
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a;
		s[a]++;
	}
	for(int i = 1+(n%2);i < n;i+=2) {
		if(s[i] != 2) {
			cout << 0 << endl;
			return 0;
		}	       
	}
	if(n%2 && s[0]!=1) {
		cout << 0 << endl;
		return 0;
	}
	cout << pow(2,n/2) << endl;
}
