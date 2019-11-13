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
//	map[y][x] = '.'; // ���� ����
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
//		bool changebreak = false; // �ѿ��� ���� ��ȭ�� �˱� ����
//		memset(visit, false, sizeof(visit));
//
//		for (int i = 0; i < 12; i++) {
//			for (int j = 0; j < 6; j++) {
//
//				cnt = 0; // �ٸ� ���� �ѿ䰡 4�� ������ �� �����Ƿ�, 0���� �ٽ� �ʱ�ȭ
//
//				if (visit[i][j] != true && map[i][j] != '.') { // color �� ��
//					cnt++;
//
//					dfs(i, j, map[i][j]);
//
//					if (cnt >= 4) { // ���� �ѿ䰡 4�� �̻� �� ������
//						changebreak = true; // ��ȭ�� �ִ� ���´ϱ� �ٲ���
//						cleanmap(i, j, map[i][j]); // �� �ٲ��ֱ�
//					}
//				}
//			}
//		}
//
//		// ��� ������
//		for (int row = 11; row >= 0; row--) {
//			for (int column = 0; column < 6; column++) {
//
//				if (map[row][column] == '.') {
//					int new_row = row - 1; // ��ĭ ���� ���� new_row
//
//					while (new_row >= 0 && map[new_row][column] == '.') {
//
//						// ���� 0 �̻��̸�, '.'�϶��� ����� (�ѿ� ������ Ż��)
//						new_row--;
//					}
//
//					if (new_row <= 0) new_row = 0; // ���� ������ ���� �� �����ϱ�
//
//					// ��� ���� (��ġ ��ȯ)
//					swap(map[new_row][column], map[row][column]);
//				}
//			}
//		}
//
//
//		if (changebreak == false) break; // ���ŵ� �ѿ䰡 ���� ���, Ż��!
//		// ���� �ѿ䰡 ������ �ʴ� ��찡 �ö����� while �� ���ư�
//
//		ans++;
//	}
//
//	cout << ans << endl;
//
//	return 0;
//}