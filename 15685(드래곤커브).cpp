//#include <iostream>
//#include <algorithm>
//#include <cstring>
//#include <vector>
//using namespace std;
//
//int N;
//int x, y, d, g;
//int map[101][101];
//int dy[4] = { 0, -1, 0, 1 }; // 우상좌하
//int dx[4] = { 1, 0, -1, 0 }; // 우상좌하
//int ans;
//int nextx, nexty;
//
//vector<int> dir_info; // 이전 방향의 정보를 담고 있는 벡터
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
//	// direction 값 1 더해주는 과정
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
//	cin >> N; // 드래곤 커브 개수
//
//	for (int i = 0; i < N; i++) {
//		cin >> x >> y >> d >> g; // 시작점(x,y) , 방향, 세대
//
//		dir_info.clear();
//
//		map[y][x] = 1; // 먼저 시작점에 점 찍어주기
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
//	// 꼭짓점이 모두 드래곤 커브 일부인 정사각형 개수(ans) 구하기
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