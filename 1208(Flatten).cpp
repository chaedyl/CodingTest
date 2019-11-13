//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int dump;
//int ans;
//int map[101];
////int maxnum = -987654321;
////int minnum = 987654321;
//
////int solve(int dump) {
////
////	for (int i = 0; i < dump; i++) {
////		for (int j = 0; j < 100; j++) {
////			int maxnum = max(maxnum, map[j]);
////			int minnum = min(minnum, map[j]);
////			if (map[j] == 0) break;
////
////
////		}
////	}
////
////	return ans;
////}
//
//int main() {
//
//	for (int i = 1; i <= 10; i++) {
//		
//		cin >> dump; // 덤프 횟수
//		for (int j = 0; j < 100; j++) {
//			cin >> map[j]; // 상자 높이 입력 받기
//		}
//
//		while (dump--) {
//			sort(map, map + 100); // 상자 높이를 낮~높은 순으로 정렬
//			map[0]++;
//			map[99]--;
//		}
//
//		sort(map, map + 100);
//		ans = map[99] - map[0];
//
//		cout << "#" << i << " " << ans << endl;
//	}
//
//	return 0;
//}