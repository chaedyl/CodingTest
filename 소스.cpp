//#include <iostream>
//using namespace std;
//
//int N;
//char A[4] = { 'A', 'B', 'C', 'D' };
//int order[4];
//int visit[4];
//
//void dfs(int cnt) {
//
//	for (int i = 0; i < cnt; i++) {
//		cout << A[order[i]] << " ";
//	}
//
//	cout << endl;
//
//	for (int i = 0; i < 4; i++) {
//		if (visit[i] != 1) {
//
//			visit[i] = 1;
//			order[cnt] = i;
//			dfs(cnt + 1);
//			visit[i] = 0;
//		}
//	}
//}
//
//
//int main() {
//
//	dfs(0);
//
//	return 0;
//}