//#include <iostream>
//#include <vector>
//#include <algorithm>
//#include <cstring>
//using namespace std;
//
//int k, n;
//int lotto[13];
//int v[13];
//
//void dfs(int start, int depth) { // 7개의 숫자를 dfs 로 완전탐색
//
//	// 탈출 조건
//	if (depth == 6) { // 배열이 6개가 찬 경우
//		for (int i = 0; i < 6; i++) {
//			cout << v[i] << ' '; // 조합 출력
//		}
//		cout << endl;
//		return;
//	}
//
//	for (int i = start; i < k; i++) { // lotto 배열의 0 ~ k-1까지 탐색
//		v[depth] = lotto[i]; // 0~5번째까지 재귀를 통해서 새로 탐색한 숫자 넣음
//		dfs(i + 1, depth + 1); // 재귀 부분
//	}
//}
//
//int main() {
//
//	while (cin >> k) {
//		if (k == 0) break;
//		for (int i = 0; i < k; i++) {
//			cin >> lotto[i];
//		}
//
//		dfs(0, 0);
//		cout << endl;
//	}
//	return 0;
//}