// 참고 : rebas.kr/788


//#include <iostream>
//using namespace std;
//
//int N, L, ans;
//int map[101][101];
//
//void slope(int i, bool check) {
//	int cnt = 1; // 초기화
//
//	for (int j = 1; j <N; j++) {
//
//		// 행 or 열 기준 선택
//		int d = check == 1 ? map[i][j + 1] - map[i][j] : map[j + 1][i] - map[j][i];
//
//		// 높이가 같은 경우
//		if (d == 0) cnt++;
//
//		// 올라가는 길
//		else if (d == 1 && cnt >= L) {
//			cnt = 1; // 경사로를 놓을 수 있는 경우
//		}
//
//		// 내려오는 길
//		else if (d == -1 && cnt >= 0) {
//			cnt = 1 - L; // 
//		}
//
//		else return;
//	}
//
//	if (cnt >= 0) ans += 1;
//}
//
//void solve() {
//	for (int i = 1; i <= N; i++) {
//		slope(i, 1); // 1: 행 기준 따지기
//		slope(i, 0); // 2. 열 기준 따지기
//	}
//
//	cout << ans << endl;
//}
//
//int main() {
//	cin >> N >> L;
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			scanf("%d", &map[i][j]);
//		}
//	}
//
//	solve();
//
//
//	return 0;
//}