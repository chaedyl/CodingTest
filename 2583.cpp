//#include <iostream>
//#include <cstring>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int M, N, K; // 세로, 가로, 1개수
//int num[4];
//int cnt =0;
//int map[100][100] = { 0, };
//int temp[500];
//int dx[4] = { 0, 0, -1, 1 };
//int dy[4] = { 1, -1, 0, 0 };
//
//void dfs(int y, int x, int key) {
//	if (x >= N || y >= M || x < 0 || y < 0) return;
//	if (map[y][x] != 0) return;
//
//	map[y][x] = key;
//
//	for (int i = 0; i < 4; i++) {
//		int nexty = y + dy[i];
//		int nextx = x + dx[i];
//
//		dfs(nexty, nextx, key);
//	}
//}
//
//int main() {
//
//	cin >> M >> N >> K;
//	for (int a = 0; a < K; a++) {
//
//		/*for (int b = 0; b < 4; b++) {
//			scanf(" %d", &num[b]);
//		}
//		int x1 = num[0];
//		int x2 = num[2];
//		int y1 = num[1];
//		int y2 = num[3];*/
//
//		int x1, x2, y1, y2;
//		cin >> x1 >> y1 >> x2 >> y2;
//
//		for (int j = y1; j < y2; j++) {
//			for (int i = x1; i < x2; i++) {
//				map[j][i] = 1;
//			}
//		}
//	}
//
//	for (int b = 0; b < M; b++) {
//		for (int a = 0; a < N; a++) {
//			if (map[b][a] == 0) {
//				cnt++;
//				dfs(b, a, cnt + 1);
//			}
//		}
//	}
//
//	//for (int j = 0; j < M; j++) {
//	//	for (int i = 0; i < N; i++) {
//	//		printf(" %d", map[j][i]);
//	//	}
//	//	cout << endl;
//	//}
//
//	for (int d = 0; d < N; d++) {
//		for (int c = 0; c < N; c++) {
//			if (map[d][c] > 1) {
//				temp[map[d][c] - 2]++;
//			}
//		}
//	}
//
//	sort(temp, temp + cnt);
//
//	cout << cnt << endl;
//
//	for (int i = 0; i < cnt; i++) {
//		cout << temp[i] << " ";
//	}
//	return 0;
//}