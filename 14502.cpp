//#include <iostream>
//#include <vector>
//#include <cstring>
//
//using namespace std;
//
//int N, M;
//int map[10][10];
//int copymap[10][10]; // 원본 맵을 복사한 맵
//bool visit[10][10];
//int dx[4] = { 0, 0, -1, 1 };
//int dy[4] = { 1, -1, 0, 0 };
//int wall_cnt, virus_cnt, virus_temp;
//int MAX;
//
//// 바이러스 퍼뜨리기
//void dfs_virus(int y, int x) {
//
//	if (x < 0 || y < 0 || x >= M || y >= N) return;
//	if (visit[y][x]) return;
//
//	visit[y][x] = true;
//	map[y][x] = 2;
//
//	for (int i = 0; i < 4; i++) {
//		int nextx = x + dx[i];
//		int nexty = y + dy[i];
//		if (map[nexty][nextx] == 0) {
//			dfs_virus(nexty, nextx);
//		}
//	}
//}
//
//void dfs_wall(int cnt) {
//	// 안전 영역 구하기
//	if (cnt == 3) {
//		virus_cnt = 0;
//		memset(visit, 0, sizeof(visit));
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				map[i][j] = copymap[i][j];
//			}
//		}
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				if (map[i][j] == 2) {
//					dfs_virus(i, j);
//				}
//			}
//		}
//
//
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				if (map[i][j] == 0) {
//					virus_cnt++;
//				}
//			}
//		}
//			
//		if (virus_cnt > virus_temp) virus_temp = virus_cnt;
//		return;
//	}
//
//	// 벽 3개 세워질 수 있는 모든 경우의 수 완전탐색
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (copymap[i][j] == 0) {
//				copymap[i][j] = 1;
//				dfs_wall(cnt + 1);
//				copymap[i][j] = 0;
//			}
//		}
//	}
//}
//
//int main() {
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map[i][j];
//			copymap[i][j] = map[i][j]; // map 을 복사한 copymap
//		}
//	}
//
//	dfs_wall(0);
//	cout << virus_temp;
//
//	return 0;
//}