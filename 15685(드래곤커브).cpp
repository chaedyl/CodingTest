//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <vector>
//using namespace std;
//
//int N;
//int x, y, d, g;
//int map[101][101];
//int dy[4] = { 0, -1, 0, 1 }; // �������
//int dx[4] = { 1, 0, -1, 0 }; // �������
//int ans;
//int nextx, nexty;
//
//vector<int> dir_info; // ���� ������ ������ ��� �ִ� ����
//
////void make_curve(int nexty, int nextx) {
////	int s = dir_info.size();
////	for (int i = s-1; i >= 0; i--) {
////		int nextdir = (dir_info[i] + 1) % 4;
////		int nx = nextx + dx[nextdir];
////		int ny = nexty + dy[nextdir];
////		map[ny][nx] = 1;
////
////		dir_info.push_back(nextdir);
////
////		
////	}
////}
//
//
//void next_direction(int y, int x, int direction, int generation) {
//
//	// direction �� 1 �����ִ� ����
//	nextx = x + dx[direction];
//	nexty = y + dy[direction];
//	map[nexty][nextx] = 1;
//
//	dir_info.push_back(direction);
//
//	for (int j = 0; j < generation; j++) {
//
//		int s = dir_info.size();
//		for (int i = s - 1; i >= 0; i--) {
//			int nextdir = (dir_info[i] + 1) % 4;
//			dir_info.push_back(nextdir);
//
//			nextx = nextx + dx[nextdir];
//			nexty = nexty + dy[nextdir];
//			if(nextx >=0 && nexty>= 0)
//				map[nexty][nextx] = 1;
//		}
//	}
//}
//
//int main() {
//	cin >> N; // �巡�� Ŀ�� ����
//
//	for (int i = 0; i < N; i++) {
//		cin >> x >> y >> d >> g; // ������(x,y) , ����, ����
//
//		dir_info.clear();
//
//		map[y][x] = 1; // ���� �������� �� ����ֱ�
//
//		next_direction(y, x, d, g);
//	}
//
//
//	//for (int i = 0; i <= 10; i++) {
//	//	for (int j = 0; j <= 10; j++) {
//	//		cout << map[i][j];
//	//	}
//	//	cout << endl;
//	//}
//
//
//	// �������� ��� �巡�� Ŀ�� �Ϻ��� ���簢�� ����(ans) ���ϱ�
//	for (int i = 0; i < 101; i++) {
//		for (int j = 0; j < 101; j++) {
//			if (map[i][j] == 1 && map[i+1][j] == 1 &&
//				map[i][j+1] == 1 && map[i+1][j+1] == 1) {
//				ans++;
//			}
//		}
//	}
//
//	cout << ans << endl;
//
//	return 0;
//
//}