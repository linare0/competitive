#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

class unionfind {
private:
	int* parent;
public:
	unionfind(int nodes) {
		parent = new int[nodes];
		for(int i = 0;i < nodes;i++) parent[i] = -1;
	}
	~unionfind() {
		delete parent;
	}
	int root(int n) {
		if(parent[n] == -1) return n;
		int res = root(parent[n]);
		parent[n] = res;
		return res;
	}
	bool same(int a,int b) {
		return root(a) == root(b);
	}
	void merge(int a,int b) {
		parent[root(a)] = root(b);
	}
};

int main(void) {
	int v,e,s,t,w;
	cin >> v >> e;
	vector<pair<int,pair<int,int>>> path;
	for(int i = 0;i < e;i++) {
		cin >> s >> t >> w;
		path.push_back(make_pair(w,make_pair(s,t)));
	}
	sort(path.begin(),path.end());
	int res = 0;
	unionfind u = unionfind(v);
	for(auto& e:path) {
		if(!u.same(e.second.first,e.second.second)) {
			res += e.first;
			u.merge(e.second.first,e.second.second);
		}
	}
	cout << res << endl;
}
