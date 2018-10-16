#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
	int n;
	cin >> n;
	int m = (int)sqrt(n);
	cout << n << ":";
	for(int i = 2;i <= m;i++) {
		while(n % i == 0) {
			cout << " " << i;
			n = n / i;
		}
	}
	if(n != 1) cout << " " << n;
	cout << endl;
}
