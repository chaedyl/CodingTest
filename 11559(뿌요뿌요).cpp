//#include <iostream>
//#include <vector>
//#include <cstring>
//#include <algorithm>
//using namespace std;
//
//char map[15][10];
//bool visit[15][10];
//int dx[4] = {0, 0, -1, 1};
//int dy[4] = {-1, 1, 0, 0};
//int ans;
//int cnt;
//
//void dfs(int y, int x, char color) {
//
//	visit[y][x] = true;
//
//	for (int i = 0; i < 4; i++) {
//		int nextx = x + dx[i];
//		int nexty = y + dy[i];
//
//		if (nextx < 0 || nexty < 0 || nextx >= 6 || nexty >= 12) continue;
//		if (visit[nexty][nextx]) continue;
//
//		if (map[nexty][nextx] == color) {
//			cnt++;
//			
//			dfs(nexty, nextx, color);
//		}
//	}
//}
//
//
//void cleanmap(int y, int x, char color) {
//
//	map[y][x] = '.'; // 새로 갱신
//	
//	for (int i = 0; i < 4; i++) {
//		int nextx = x + dx[i];
//		int nexty = y + dy[i];
//
//		if (nextx < 0 || nexty < 0 || nextx >= 6 || nexty >= 12) continue;
//		if (map[nexty][nextx] == color) {
//			cleanmap(nexty, nextx, color);
//		}
//	}
//}
//
//
//int main() {
//
//	for (int i = 0; i < 12; i++) {
//		for (int j = 0; j < 6; j++) {
//			scanf("%1s", &map[i][j]);
//		}
//	}
//
//	/*for (int i = 0; i < 12; i++) {
//		for (int j = 0; j < 6; j++) {
//			cout << map[i][j] << " ";
//		}
//		cout << endl;
//	}*/
//
//	while (1) {
//
//		bool changebreak = false; // 뿌요의 상태 변화를 알기 위함
//		memset(visit, false, sizeof(visit));
//
//		for (int i = 0; i < 12; i++) {
//			for (int j = 0; j < 6; j++) {
//
//				cnt = 0; // 다른 색의 뿌요가 4개 모여있을 수 있으므로, 0으로 다시 초기화
//
//				if (visit[i][j] != true && map[i][j] != '.') { // color 일 때
//					cnt++;
//
//					dfs(i, j, map[i][j]);
//
//					if (cnt >= 4) { // 같은 뿌요가 4개 이상 모여 있으면
//						changebreak = true; // 변화가 있는 상태니까 바꿔줌
//						cleanmap(i, j, map[i][j]); // 맵 바꿔주기
//					}
//				}
//			}
//		}
//
//		// 블록 내리기
//		for (int row = 11; row >= 0; row--) {
//			for (int column = 0; column < 6; column++) {
//
//				if (map[row][column] == '.') {
//					int new_row = row - 1; // 한칸 위의 행이 new_row
//
//					while (new_row >= 0 && map[new_row][column] == '.') {
//
//						// 행은 0 이상이며, '.'일때만 진행됨 (뿌요 만나면 탈출)
//						new_row--;
//					}
//
//					if (new_row <= 0) new_row = 0; // 행이 음수가 나올 수 있으니까
//
//					// 블록 내림 (위치 교환)
//					swap(map[new_row][column], map[row][column]);
//				}
//			}
//		}
//
//
//		if (changebreak == false) break; // 갱신된 뿌요가 없는 경우, 탈출!
//		// 따라서 뿌요가 터지지 않는 경우가 올때까지 while 문 돌아감
//
//		ans++;
//	}
//
//	cout << ans << endl;
//
//	return 0;
//}