//#include <iostream>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//int N; // 건물 개수
//int number; // 테스트케이스 번호
//int map[1001];
//
//
//int solve() {
//
//	int ans=0;
//
//	for (int i = 2; i < N - 2; i++) {
//		int temp = map[i] - max(max(map[i - 1], map[i - 2]), max(map[i + 1], map[i + 2]));
//		if (temp > 0) {
//			ans += temp;
//		}
//	}
//	return ans;
//}
//
//int main() {
//
//	memset(map,0,sizeof(map));
//
//	for (int i = 0; i < 10; i++) {
//		cin >> N;
//		number++;
//
//		for (int j = 0; j < N; j++) {
//			cin >> map[j];
//		}
//
//		cout << "#" << number << " " << solve() << endl;
//	}
//
//	return 0;
//}