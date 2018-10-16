#include <iostream>
#include <cstdint>

#define INF (INT32_MAX/2)

using namespace std;
#define MAXN 50000
#define MAXM 20
int n,m,c[20],t[MAXM+1][MAXN+1];

int main() {
	cin >> n >> m;
	for(int i = 0;i < m;i++) cin >> c[i];
	for(int i = 0;i < MAXM+1;i++) for(int j = 1;j < MAXN+1;j++) t[i][j] = INF;
	for(int i = 1;i <= n;i++) for(int j = 1;j <= m;j++) {
		t[j][i] = min(t[j-1][i],t[j][i - c[j-1]]+1);
	}
	cout << t[m][n] << endl;
}
