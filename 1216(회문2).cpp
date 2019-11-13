//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//char map[101][101];
//int ans;
//int cnt;
//int maxcnt = -987654321;
//vector<char> v;
//
//void solve(int y, int x) {
//	
//	bool flag = true;
//	v.clear();
//	v.push_back(map[y][x]);
//
//	for (int i = 0;i<cnt; i++) {
//		int nextx = x + i;
//		if (nextx > 99) {
//			flag = false;
//			break;
//		}
//	}
//	
//	
//
//	if (flag) {
//		cnt = max(cnt, maxcnt);
//		cnt++;
//	}
//	
//}
//
//int main() {
//
//	for (int k = 1; k < 11; k++) {
//
//		for (int i = 0;i<100; i++) {
//			for (int j = 0; j < 100; j++) {
//				cin >> map[i][j];
//			}
//		}
//
//		for (int i = 0; i < 100; i++) {
//			for (int j = 0; j < 100; j++) {
//				solve(i, j);
//			}
//		}
//
//		cout << "#" << k << " " << ans << endl;
//		ans = 0;
//	}
//
//	return 0;
//}