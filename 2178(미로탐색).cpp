//#include <iostream>
//#include <queue>
//#define _CRT_SECURE_NO_WARNINGS
//using namespace std;
//
//int N, M;
//int map[101][101];
//int visit[101][101];
//int dx[4] = {0, 0, -1, 1};
//int dy[4] = {-1, 1, 0, 0};
//int ans;
//
//void bfs() {
//
//	queue<pair<int,int>> q;
//
//	int x = 0;
//	int y = 0;
//	int cnt = 1;
//	q.push({ y,x });
//
//	visit[y][x] = cnt;
//
//	while (!q.empty()) {
//
//		int nowx = q.front().second;
//		int nowy = q.front().first;
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int nextx = nowx + dx[i];
//			int nexty = nowy + dy[i];
//			if (nextx < 0 || nexty < 0 || nextx >= M || nexty >= N) continue;
//			if (visit[nexty][nextx] != 0) continue;
//
//			if (map[nexty][nextx] == 1) {
//				visit[nexty][nextx] = visit[nowy][nowx] + 1;
//				q.push({ nexty, nextx });
//			}
//
//			if (nexty == N - 1 && nextx == M - 1) {
//				ans = visit[nexty][nextx];
//			}
//		}
//
//	}
//}
//
//
//int main() {
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			scanf("%1d", &map[i][j]);
//		}
//	}
//
//	bfs();
//
//	cout << ans << endl;
///*
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cout << visit[i][j] << ' ';
//		}
//		cout << endl;
//	}*/
//	
//	return 0;
//}