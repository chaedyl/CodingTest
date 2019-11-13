//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstring>
//using namespace std;
//
//int T, M, N, K;
//int board[51][51] = { 0, }; // 밭 
//int dx[4] = {0, 0, -1, 1}; // 상하좌우 x 좌표 배열
//int dy[4] = {1, -1, 0, 0}; // 상하좌우 y 좌표 배열
//
//void dfs(int y, int x) {
//
//	if (x < 0 || y < 0 || x >= M || y >= N) // 범위 벗어나면
//		return; // 반환
//
//	if (board[y][x] != 1) // 아무것도 없으면
//		return; // 반환
//
//	board[y][x] = 2; // 방문처리
//
//	for (int i = 0 ; i < 4 ; i++) { // 상하좌우 탐색
//		int nextx = x + dx[i];
//		int nexty = y + dy[i];
//		dfs(nexty, nextx);
//	}
//}
//
//
//int main() {
//	
//	cin >> T; // testcase 개수
//	for (int i = 0; i < T; i++) { // testcase 개수 만큼 반복
//		int cnt = 0;
//
//		cin >> M >> N >> K;
//
//		for (int j = 0; j < 51; j++) {
//			memset(board[j], 0, sizeof(int) * 51); // 밭 배열 초기화
//		}
//
//		for (int k = 0; k < K; k++) { // 배추 심어진 곳 입력
//			int x, y;
//			cin >> x >> y;
//			board[y][x] = 1;
//		}
//
//		for (int a = 0; a < M; a++)
//			for (int b = 0; b < N; b++)
//				if (board[b][a] == 1)
//					dfs(b, a), cnt++;
//
//		cout << cnt << endl;
//	}
//
//	return 0;
//}