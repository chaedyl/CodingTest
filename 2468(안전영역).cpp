//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//int N;
//int map[101][101];
//int visit[101][101];
//int dx[4] = { 0, 0, -1, 1 };
//int dy[4] = { -1, 1, 0, 0 };
//int height = -987654321;
//int ans = -987654321;
//int cnt;
//
//void dfs(int y, int x, int height) {
//
//	visit[y][x] = true;
//
//	for (int i = 0; i < 4; i++) {
//		int nextx = x + dx[i];
//		int nexty = y + dy[i];
//
//		if (nextx < 0 || nexty < 0 || nextx >= N || nexty >= N) continue;
//		if (visit[nexty][nextx] == 1 || map[nexty][nextx] <= height) continue;
//		
//		dfs(nexty, nextx, height);			
//	}
//}
//
//int main() {
//
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> map[i][j];
//			height = max(map[i][j], height);
//		}
//	}
//
//	for (int h = 0; h < height; h++) {
//
//		memset(visit, 0, sizeof(visit));
//		cnt = 0;
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				if (visit[i][j] == 0 && map[i][j] > h) {
//					dfs(i, j, h);
//					cnt++;
//				}				
//			}
//		}
//
//		ans = max(ans, cnt);
//
//	}
//
//	cout << ans;
//	return 0;
//}