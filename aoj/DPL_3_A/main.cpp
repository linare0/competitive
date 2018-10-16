#include <iostream>

using namespace std;

int h,w,c[1401][1401],dp[1401][1401];

int dfs(int x,int y) {
	if(x <= 0 || y <= 0) return 0;
	if(dp[y][x] == -1) {
		if(c[y][x]) dp[y][x] = 0;
		else {
			dp[y][x] = min(dfs(x-1,y-1),min(dfs(x,y-1),dfs(x-1,y)))+1;
		}
	}
	return dp[y][x];
}

int main(){
	cin >> h >> w;
	for(int y = 1;y <= h;y++) for(int x = 1;x <= w;x++) cin >> c[y][x];
	for(int i = 0;i < 1401;i++)for(int j=0;j<1401;j++) dp[i][j] = -1;
	int res = 0;
	for(int i = 1;i <= h;i++) for(int j = 1;j <= w;j++) res = max(res,dfs(j,i));
	cout << res*res << endl;
}
