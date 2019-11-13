//#include <iostream>
//#include <vector>
//#include <cstring>
//#include <algorithm>
//
//using namespace std;
//
//int N;
//char num;
//char map[101][101];
//bool visit[101][101];
//int dx[4] = {0, 0, -1, 1};
//int dy[4] = {1, -1, 0, 0};
//int cnt, cnt2;
//
//void dfs(int y, int x) {
//
//	if (x < 0 || y < 0 || x >= N || y >= N) return;
//	if (visit[y][x]) return;
//
//	visit[y][x] = true;
//
//	for (int i = 0; i < 4; i++) {
//		int nextx = x + dx[i];
//		int nexty = y + dy[i];
//
//		if (map[nexty][nextx] == map[y][x]) {
//			dfs(nexty, nextx);
//		}
//	}
//}
//
//int main() {
//
//	cin >> N;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> num;
//			map[i][j] = num;
//		}
//	}
//
//	/*for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cout << map[i][j];
//		}
//		cout << endl;
//	}*/
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (!visit[i][j]) {
//				cnt++;
//				dfs(i,j);
//			}
//		}
//	}
//
//	memset(visit, false, sizeof(visit));
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (map[i][j] == 'G') {
//				map[i][j] = 'R';
//			}
//		}
//	}
//
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if(!visit[i][j]) {
//				cnt2++;
//				dfs(i, j);
//			}
//		}
//	}
//
//	cout << cnt << " " << cnt2 << endl;
//
//}