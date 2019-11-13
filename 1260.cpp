//#include <iostream>
//#include <vector>
//#include <string>
//#include <queue>
//#include <utility>
//#include <algorithm>
//using namespace std;
//
//int c[1001];
//vector<int> a[1001];
//
//void bfs(int start) {
//	queue<int> q;
//	q.push(start);
//	c[start] = true;
//
//	while (!q.empty()) {
//		int x = q.front();
//		q.pop();
//		printf("%d ", x);
//
//		for (unsigned int i = 0; i < a[x].size(); i++) {
//			int y = a[x][i];
//			if (!c[y]) {
//				q.push(y);
//				c[y] = true;
//			}
//		}
//	}
//}
//
//void dfs(int start) {
//	if (c[start])
//		return;
//
//	c[start] = true;
//	cout << start << ' ';
//
//	for (unsigned int i = 0; i < a[start].size(); i++) {
//		int y = a[start][i];
//		dfs(y);
//	}
//}
//
//
//int main() {
//
//	int V, N, M;
//	cin >> N >> M >> V;
//
//	/*
//		int* a = new int[N];
//		delete a;
//
//
//		int** b = new int*[N];
//		for (int i = 0; i < N; i++) {
//			b[i] = new int[M];
//		}
//
//		for (int i = 0; i < N; i++) {
//			delete[] b[i];
//		}
//		delete[] b;
//
//		b[0][0] = 1;
//		b[1][3] = 2;
//		*/
//
//	int innode, outnode;
//	for (int i = 0; i < M; i++) {
//		cin >> innode >> outnode;
//		a[innode].push_back(outnode);
//		a[outnode].push_back(innode);
//	}
//
//	for (int i = 0; i < N+1; i++) {
//		sort(a[i].begin(), a[i].end());
//	}
//
//	dfs(V);
//
//	for (int i = 0; i < N+1; i++) {
//		c[i] = 0;
//	}
//
//	cout << endl;
//
//	bfs(V);
//	return 0;
//}