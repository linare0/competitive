#include <iostream>
using namespace std;
int main() {
	int n,t[100],s=0,p,x;
	cin >> n;
	for(int i =0;i<n;i++){
		cin >> t[i];
		s += t[i];
	}
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> p >> x;
		cout << s - t[p-1] + x << endl;
	}
}
