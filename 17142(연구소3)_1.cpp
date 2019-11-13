//#include <iostream>
//#include <queue>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//int N, M, k;
//int map[51][51];
//int visit[51][51];
//int selec[11];
//int dx[4] = { 0, 0, -1, 1 };
//int dy[4] = { -1, 1, 0, 0 };
//int ans = 987654321;
//
//struct virus {
//	int y;
//	int x;
//};
//
//queue <virus> q;
//vector <virus> v;
//
//void bfs() {
//
//	int times = 0;
//	int infect = 0;
//
//	while (!q.empty()) {
//
//		int nowx = q.front().x;
//		int nowy = q.front().y;
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int nextx = nowx + dx[i];
//			int nexty = nowy + dy[i];
//
//			if (nexty < 0 || nextx < 0 || nextx >= N || nexty >= N) continue;
//			if (map[nexty][nextx] != 1 && visit[nexty][nextx] == -1) {
//				visit[nexty][nextx] = visit[nowy][nowx] + 1;
//
//				if (map[nexty][nextx] == 0) {
//					infect++;
//					times = visit[nexty][nextx];
//				}
//
//				q.push({ nexty, nextx });
//				
//			}
//		}
//	}
//
//	if (infect == k) {
//		ans = min(ans, times);
//	}
//}
//
//
//// 바이러스 M개 위치 뽑기 
//void dfs(int idx, int cnt, int d) {
//
//	if (cnt == M) { // M개 뽑는 경우
//
//		memset(visit, -1, sizeof(visit)); // 매 경우마다 visit 초기화
//
//		for (int i = 0; i < d; i++) {
//			if (selec[i]==1) { 
//				q.push({ v[i].y, v[i].x });
//				visit[v[i].y][v[i].x] = 0; // 바이러스 위치를 0으로
//			}
//		}
//
//		bfs();
//		return;
//	}
//
//	for (int i = idx; i < d; i++) {
//		if (selec[i]==0) {
//			selec[i] = 1;
//			dfs(i + 1, cnt + 1, d);
//			selec[i] = 0;
//		}
//	}
//}
//
//
//int main() {
//
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> map[i][j];
//
//			if (map[i][j] == 2) { // 바이러스 위치
//				v.push_back({ i,j });
//			}
//
//			if (map[i][j] == 0) { // 빈칸 위치
//				k++;
//			}
//		}
//	}
//
//	dfs(0, 0, v.size());
//
//	if (ans == 987654321) ans = -1;
//
//	cout << ans << endl;
//
//	return 0;
//}