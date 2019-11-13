//#include <iostream>
//#include <queue>
//#include <vector>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//int W, H;
//char map[51][51];
//int visit[51][51];
//int dx[4] = { 0, 0, -1, 1 };
//int dy[4] = { -1, 1, 0, 0 };
//int ans;
//
//struct treasure {
//	int y;
//	int x;
//	int d; // 이동거리 저장
//};
//
//queue <treasure> q;
//
//int bfs(int y, int x) {
//
//	int distance = 0;
//
//	q.push({ y, x, 0 });
//	visit[y][x] = 1;
//
//	while (!q.empty()) {
//
//		int nowx = q.front().x;
//		int nowy = q.front().y;
//		int d = q.front().d;
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int nextx = nowx + dx[i];
//			int nexty = nowy + dy[i];
//
//			if (nexty < 0 || nextx < 0 || nexty >= H || nextx >= W) continue;
//			if (visit[nexty][nextx] || map[nexty][nextx] == 'W') continue;
//
//			visit[nexty][nextx] = 1;
//			q.push({ nexty, nextx, d+1 });
//
//			distance = max(distance, d+1); // 이동거리 중 가장 큰 곳을 저장
//		
//		}
//	}
//	return distance;
//}
//
//
//int main() {
//
//	cin >> H >> W;
//
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	for (int i = 0; i < H; i++) {
//		for (int j = 0; j < W; j++) {
//
//			if (map[i][j] == 'L') {
//				memset(visit, 0, sizeof(visit));
//
//				// bfs 결과 나오는 이동 거리 중 가장 큰 값이 정답
//				ans = max(ans, bfs(i, j));
//			}
//		}
//	}
//
//
//	cout << ans << endl;
//	return 0;
//}