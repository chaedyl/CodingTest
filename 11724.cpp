//#include <iostream>
//#include <vector>
//#include <cstring>
//using namespace std;
//
//int N, M;
//vector<int> n[1001];
//bool visited[1001];
//
//void dfs(int start) {
//
//	visited[start] = true;
//
//	for (int i = 0;i<n[start].size(); i++) {
//		int next = n[start][i];
//		if (!visited[next]) {
//			dfs(next);
//		}
//	}
//}
//
//int main() {
//	cin >> N >> M;
//	for (int i = 0;i < M; i++) {
//		int innode, outnode;
//		cin >> innode >> outnode;
//
//		n[innode].push_back(outnode);
//		n[outnode].push_back(innode);
//
//	}
//
//	int cnt = 0;
//	for (int i = 1;i <= N; i++) {
//		if (!visited[i]) {
//			dfs(i);
//			cnt++;
//		}
//	}
//
//	cout << cnt << endl;
//
//	return 0;
//}