#include <iostream>
#include <stack>
#include <set>

using namespace std;

int cb[8];
int gb[8];
int main(void) {
	int k,r,c;
	set<int> uc;
	cin >> k;
	for(int i = 0;i < 8;i++) {cb[i] = -1;gb[i]=-1;}
	for(int i = 0;i < k;i++) {
		cin >> r >> c;
		cb[r] = c;
		gb[r] = c;
	}
	for(int i =0;i <8;i++) cout << gb[i] << " ";
}
