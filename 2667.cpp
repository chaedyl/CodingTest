//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int N;
//int cnt = 0;
//int map[25][25];
//int temp[500];
//int dx[4] = {0, 0, -1, 1}; 
//int dy[4] = {1, -1, 0, 0};
//
//void dfs(int y, int x, int key) {
//	if (x < 0 || y < 0 || x >= N || y >= N) return;
//	if (map[y][x] != 1) return;
//
//	map[y][x] = key;
//
//	for (int i = 0; i < 4; i++) {
//		int nextx = x + dx[i];
//		int nexty = y + dy[i];
//		dfs(nexty, nextx, key);
//	}
//}
//
//int main() {
//	cin >> N;
//
//	/*for (int k = 0; k < 25; k++) {
//		memset(map[k], 0, sizeof(int) * 25);
//	}*/
//
//	for (int i = 0;i < N; i++) {
//		for (int j = 0; j < N; j++) {
//
//			int num;
//			scanf(" %1d", &map[j][i]);
//
//			/*if (num == 1) {
//				map[i][j] = 1;
//			}*/
//		}
//	}
//
//	cnt = 0;
//
//	for (int a = 0; a < N; a++) {
//		for (int b = 0; b < N; b++) {
//			if (map[b][a] == 1) {
//				cnt++;
//				dfs(b, a, cnt + 1);
//			}
//		}
//	}
//
//	for (int c = 0; c < N; c++) {
//		for (int d = 0; d < N; d++) {
//			if (map[d][c] > 1) {
//				temp[map[d][c] - 2]++;
//			}
//		}
//	}
//
//	sort(temp, temp + cnt);
//
//	cout << cnt<< endl;
//
//	for (int i = 0;i<cnt;i++) {
//		cout << temp[i] << endl;
//	}
//
//	return 0;
//}