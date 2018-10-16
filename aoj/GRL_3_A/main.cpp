#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <stack>
#include <map>
#include <set>

using namespace std;

int main() {
	int v,e;
	cin >> v >> e;
	multimap<int,int> path;
	for(int i = 0;i < e;i++) {
		int ss,tt;
		cin >> ss >> tt;
		path.insert(make_pair(ss,tt));
		path.insert(make_pair(tt,ss));
	}
	stack<int> dfs;
	dfs.push(0);
	int prenum[100000],parent[100000],lowest[100000];
	for(int i = 0;i < 100000;i++) prenum[i] = -1;
	int count = 0,prev = -1;
	while(!dfs.empty()) {
bloop:
		int cur = dfs.top();
		prenum[cur] = count;
		lowest[cur] = min(lowest[cur],prenum[cur]);
		count++;
		int next;
		auto eq = path.equal_range(cur);
		for(auto itr = eq.first;itr != eq.second;itr++) {
			next = itr->second;
			if(prenum[next] != -1) continue;
			parent[next] = cur;
			dfs.push(next);
			goto bloop;			
		}
		
	}	
}
