#include <iostream>
#include <algorithm>

using namespace std;

int n,a[100000],l[100000],length;

int main(void) {
	for(int i = 0;i < 100000;i++) l[i] = 1000000001;
	cin >> n;
	for(int i = 0;i < n;i++) cin >> a[i];
	for(int i = 0;i < n;i++) {
		auto itr = lower_bound(l,l+n,a[i]);
		*itr = a[i];
	}
	for(int i = 0;i <= n;i++) {
		if(l[i] == 1000000001) {
			cout << i << endl;
			break;
		}
	}
#ifdef DEBUG
	for(int i = 0;i <= n;i++) cout << l[i] << " ";
#endif
}
