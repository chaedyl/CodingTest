//#include <iostream>
//#include <queue>
//#include <vector>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int N, M, k;
//int map[51][51];
//int visit[51][51];
//int dx[4] = { 0, 0, -1, 1 };
//int dy[4] = { -1, 1, 0, 0 };
//int selec[11];
//int ans = 987654321;
//
//struct virus {
//	int y;
//	int x;
//};
//
//queue <virus> q;
//vector <virus> v;
//
//void bfs() {
//	int infect = 0, times = 0;
//	while (!q.empty()) {
//		int nowx = q.front().x;
//		int nowy = q.front().y;
//		q.pop();
//
//		times = visit[nowy][nowx];
//
//		for (int i = 0; i < 4; i++) {
//			int nextx = nowx + dx[i];
//			int nexty = nowy + dy[i];
//			if (nextx < 0 || nextx >= N || nexty < 0 || nexty >= N) continue;
//			if (map[nexty][nextx] != 1 && visit[nexty][nextx] == -1) {
//				visit[nexty][nextx] = visit[nowy][nowx] + 1;
//				q.push({ nexty, nextx });
//				infect ++;
//			}
//		}
//	}
//	if (infect == k) {
//		ans = min(ans, times);
//	}
//}
//
//void dfs(int idx, int r, int n) {
//
//	if (r == M) {
//
//		memset(visit, -1, sizeof(visit));
//
//		for (int i = 0; i < n; i++) {
//			if (selec[i] == 1) {
//				q.push({ v[i].y, v[i].x });
//				visit[v[i].y][v[i].x] = 0;
//			}
//		}
//
//		bfs();
//		return;
//	}
//
//	for (int i = idx; i < n; i++) {
//
//		if (selec[i] == 0) {
//			selec[i] = 1;
//			dfs(i + 1, r + 1, n);
//			selec[i] = 0;
//		}
//
//	}
//
//
//}
//
//
//int main() {
//
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> map[i][j];
//
//			if (map[i][j] == 2) {
//				v.push_back({ i,j });
//			}
//
//			if (map[i][j] == 0) {
//				k++;
//			}
//		}
//	}
//
//	k = k + v.size() - M;
//	dfs(0, 0, v.size());
//
//	if (ans == 987654321) ans = -1;
//
//	cout << ans << endl;
//
//	return 0;
//}