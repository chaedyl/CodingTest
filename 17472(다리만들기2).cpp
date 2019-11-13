//#include <iostream>
//using namespace std;
//
//int N, M;
//int map[11][11];
//int dx[4] = { 0, 0, -1, 1 };
//int dy[4] = { -1, 1, 0, 0 };
//int dan;
//
//void dfs(int y, int x, int danji) {
//
//	if (x < 0 || y < 0 || x >= M || y >= N) return;
//	if (map[y][x] != 1) return;
//
//	map[y][x] = danji;
//
//	for (int i = 0; i < 4; i++) {
//
//		int nextx = x + dx[i];
//		int nexty = y + dy[i];
//
//		dfs(nexty, nextx, danji);
//	}
//}
//
//
//int main() {
//
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (map[i][j] == 1) {
//				dan++;
//				dfs(i, j, dan + 1);
//			}
//		}
//	}
//
//	cout << endl;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cout << map[i][j];
//		}
//		cout << endl;
//	}
//
//
//	// 확인용 출력
//	//cout << endl;
//	//for (int i = 0; i < N; i++) {
//	//	for (int j = 0; j < M; j++) {
//	//		cout << map[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//	cout << dan << endl;
//
//	return 0;
//}