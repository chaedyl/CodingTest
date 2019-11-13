//#include <iostream>
//#include <queue>
//using namespace std;
//
//int N, M, K;
//int map[1001][1001];
//int visit[1001][1001][11];
//int dx[4] = { 0, 0, -1, 1 };
//int dy[4] = { -1, 1, 0, 0 };
//
//struct route {
//	int y;
//	int x;
//	int flag;
//};
//
//queue <route> q;
//
//int bfs() {
//
//	visit[1][1][0] = 1;
//	q.push({ 1, 1, 0 });
//
//	while (!q.empty()) {
//
//		int x = q.front().x;
//		int y = q.front().y;
//		int flag = q.front().flag;
//		q.pop();
//
//		if (x == M && y == N) return visit[y][x][flag];
//
//		for (int i = 0; i < 4; i++) {
//			int nextx = x + dx[i];
//			int nexty = y + dy[i];
//			int nflag = flag + 1;
//
//			if (nextx <1 || nexty<1 || nextx>M || nexty>N) continue;
//			if (visit[nexty][nextx][flag] > 0) continue;
//			if (map[nexty][nextx] == -1 && nflag > K) continue;
//
//			if (map[nexty][nextx] == -1 && nflag <= K) {
//				visit[nexty][nextx][nflag] = visit[y][x][flag] + 1;
//				q.push({ nexty, nextx, nflag });
//			}
//
//			if (map[nexty][nextx] == 0) {
//				visit[nexty][nextx][flag] = visit[y][x][flag] + 1;
//				q.push({ nexty, nextx, flag });
//			}
//			
//		}
//
//	}
//
//	return -1;
//}
//
//int main() {
//
//	cin >> N >> M >> K;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//			scanf(" %1d", &map[i][j]);
//
//			if (map[i][j] == 1) map[i][j] = -1;
//		}
//	}
//
//	cout << bfs() << endl;
//
//	return 0;
//}