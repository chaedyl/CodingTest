//#include <iostream>
//using namespace std;
//
//char arr[4] = { 'A','B', 'C', 'D' }; // 전체 배열
//int N = 4; // 고르는 수
//bool visit[4]; // arr 사이즈에 맞춤
//int order[4]; // N 사이즈에 맞춤
//
//void dfs(int cnt) { // idx가 필요없음
//	if (cnt == N) {
//		for (int i = 0; i < N; i++) {
//			cout << arr[order[i]] << " ";
//		}
//		cout << endl;
//		return;
//	}
//
//
//	for (int i = 0; i < N; i++) { // 0부터 주의
//		if (!visit[i]) {
//			
//			visit[i] = 1;
//			order[cnt] = i; // 순서를 저장
//			dfs(cnt + 1); // 개수만 증가
//			visit[i] = 0;
//		}
//	}
//}
//
//int main() {
//	dfs(0);
//
//	return 0;
//}