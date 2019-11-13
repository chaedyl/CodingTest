//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//int M, N;
//int map[1001][1001][1001];
//int visit[1001][1001][1001];
//int dx[6] = { 0, 0, -1, 1, 0, 0 }; // 상 하 좌 우 앞 뒤
//int dy[6] = { 0, 0, 0, 0, 1, -1 };
//int dz[6] = { -1, 1, 0, 0, 0, 0 };
//
//struct tomato {
//	int x;
//	int y;
//	int z;
//};
//
//vector<tomato> t; // 익은 토마토 저장
//queue<tomato> q;
//
//int ans = -987654321;
//
//void bfs() {
//
//	while (!q.empty()) {
//		int nowx = q.front().second;
//		int nowy = q.front().first;
//
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int nextx = nowx + dx[i];
//			int nexty = nowy + dy[i];
//
//			if (nextx < 0 || nexty < 0 || nextx >= M || nexty >= N) continue;
//			if (visit[nexty][nextx]) continue;
//			if (map[nexty][nextx] == -1) {
//				visit[nexty][nextx] = -2;
//				continue;
//			}
//
//			if (map[nexty][nextx] == 0) {
//				visit[nexty][nextx] = visit[nowy][nowx] + 1;
//				q.push({ nexty, nextx });
//			}
//
//
//		}
//	}
//
//}
//
//int main() {
//	cin >> M >> N;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map[i][j];
//
//			if (map[i][j] == 1) {
//				tomato.push_back({ i,j });
//				visit[i][j] = 1;
//			}
//		}
//	}
//
//	for (int k = 0; k < tomato.size(); k++) {
//		q.push({ tomato[k].first, tomato[k].second });
//	}
//
//	bfs();
//
//	cout << endl;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cout << visit[i][j] << ' ';
//		}
//		cout << endl;
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//
//			if (visit[i][j] == 0 && map[i][j] == 0) { // 안익은 토마토가 있으면
//				cout << "-1" << endl; // -1출력하고
//				return 0; // 종료
//			}
//
//			if (ans < visit[i][j]) {
//				ans = visit[i][j];
//			}
//		}
//	}
//
//	cout << ans - 1 << endl;
//
//	return 0;
//}