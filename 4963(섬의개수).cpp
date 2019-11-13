//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int w, h;
//int map[51][51];
//int visit[51][51];
//int dx[8] = { 0, 0, -1, -1, -1, 1, 1, 1 };
//int dy[8] = { -1, 1, -1, 0, 1, -1, 0, 1 };
//int cnt;
//
//void dfs(int y, int x, int key) {
//
//	if (x < 0 || y < 0 || x >= w || y >= h) return;
//	if (map[y][x] != 1) return;
//
//	map[y][x] = key;
//
//	for (int i = 0; i < 8; i++) {
//		int nextx = x + dx[i];
//		int nexty = y + dy[i];
//
//		dfs(nexty, nextx, key);
//	}
//}
//
//
//int main() {
//
//	while (cin >> w >> h) {
//
//		if (w == 0 && h == 0) break;
//
//		cnt = 0;
//		memset(map, 0, sizeof(map));
//
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				cin >> map[i][j];
//			}
//		}
//
//		for (int i = 0; i < h; i++) {
//			for (int j = 0; j < w; j++) {
//				if (map[i][j] == 1) {
//					cnt++;
//					dfs(i, j, cnt + 1);
//				}
//			}
//		}
//
//
//		cout << cnt << endl;
//	}
//
//	return 0;
//}