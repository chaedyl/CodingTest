//#include <iostream>
//#include <cstring>
//#include <queue>
//using namespace std;
//
//int R, C, T;
//int map[51][51];
//int visit[51][51];
//int dx[4] = { 0, 0, -1, 1 };
//int dy[4] = { -1, 1, 0, 0 };
//int ans;
//queue <int> q;
//queue <int> q1;
//bool flag = false;
//
//
//void blow(int y, int x, int origin) {
//	int dust = origin / 5;
//	int cnt = 0;
//
//	for (int i = 0; i < 4; i++) {
//		int nextx = x + dx[i];
//		int nexty = y + dy[i];
//
//		if (nextx < 1 || nexty < 1 || nextx > C || nexty > R
//			|| map[nexty][nextx] == -1) continue;
//
//		visit[nexty][nextx] += dust;
//		cnt++;
//	}
//
//	map[y][x] -= dust * cnt;
//}
//
//
//void start_high(int y, int x) {
//
//	for (int i = x + 1; i <= C; i++) q1.push(map[y][i]);
//	for (int i = y - 1; i >= 1; i--) q1.push(map[i][C]);
//	for (int i = C - 1; i >= 1; i--) q1.push(map[1][i]);
//	for (int i = 2; i < y - 1; i++) q1.push(map[i][x]);
//
//	map[y][x + 1] = 0;
//
//	for (int i = x + 2; i <= C; i++) {
//		int new_dust = q1.front();
//		map[y][i] = new_dust;
//		q1.pop();
//	}
//	for (int i = y - 1; i >= 1; i--) {
//		int new_dust = q1.front();
//		map[i][C] = new_dust;
//		q1.pop();
//	}
//	for (int i = C - 1; i >= 1; i--) {
//		int new_dust = q1.front();
//		map[1][i] = new_dust;
//		q1.pop();
//	}
//	for (int i = 2; i < y ; i++) {
//		int new_dust = q1.front();
//		map[i][x] = new_dust;
//		q1.pop();
//	}
//}
//
//void start_low(int y, int x) {
//
//	for (int i = x + 1; i <= C; i++) q.push(map[y][i]);
//	for (int i = y + 1; i <= R; i++) q.push(map[i][C]);
//	for (int i = C - 1; i >= 1; i--) q.push(map[R][i]);
//	for (int i = R - 1; i > y + 1; i--) q.push(map[i][x]);
//
//	map[y][x + 1] = 0;
//
//	for (int i = x + 2; i <= C; i++) {
//		int new_dust = q.front();
//		map[y][i] = new_dust;
//		q.pop();
//	}
//	for (int i = y + 1; i <= R; i++) {
//		int new_dust = q.front();
//		map[i][C] = new_dust;
//		q.pop();
//	}
//	for (int i = C - 1; i >= 1; i--) {
//		int new_dust = q.front();
//		map[R][i] = new_dust;
//		q.pop();
//	}
//	for (int i = R - 1; i > y ; i--) {
//		int new_dust = q.front();
//		map[i][x] = new_dust;
//		q.pop();
//	}
//}
//
//
//int main() {
//
//	cin >> R >> C >> T;
//
//	for (int i = 1; i <= R; i++) {
//		for (int j = 1; j <= C; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	while (T--) {
//
//		memset(visit, 0, sizeof(visit));
//		flag = false;
//
//		// 1. 확산
//		for (int i = 1; i <= R; i++) {
//			for (int j = 1; j <= C; j++) {
//				if (map[i][j] != 0 && map[i][j] != -1) {
//					blow(i, j, map[i][j]);
//				}
//			}
//		}
//
//		for (int i = 1; i <= R; i++) {
//			for (int j = 1; j <= C; j++) {
//				map[i][j] += visit[i][j];
//			}
//		}
//
//		// 2. 공기청정기 동작
//		for (int i = 1; i <= R; i++) {
//			for (int j = 1; j <= C; j++) {
//				if (map[i][j] == -1 && flag == false) {
//					start_high(i, j);
//					start_low(i + 1, j);
//					//start_low(i, j);
//					flag = true;
//				}
//			}
//		}
//	}
//
//
//	// 결과 MAP 확인
//	/*cout << endl;
//	for (int i = 1; i <= R; i++) {
//		for (int j = 1; j <= C; j++) {
//			cout << map[i][j] << " ";
//		}
//		cout << endl;
//	}
//	cout << endl;*/
//
//
//	// 3. 최종적으로 미세먼지 양 구하기
//	for (int i = 1; i <= R; i++) {
//		for (int j = 1; j <= C; j++) {
//			if (map[i][j] != 0 && map[i][j] != -1) {
//				ans += map[i][j];
//			}
//		}
//	}
//	
//	cout << ans << endl;
//
//	return 0;
//}