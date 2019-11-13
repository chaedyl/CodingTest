//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int N, K;
//int A[11];
//int fin_answer;
//
//bool compare(int a, int b) {
//	return a > b;
//}
//
//int main() {
//
//	cin >> N >> K;
//	for (int i = 0; i < N; i++) {
//		cin >> A[i];
//	}
//
//	sort(A, A + N, compare);
//
//	for (int i = 0; i < N; i++) {
//		
//		int ans = 0;
//
//		if (K - A[i] < 0) continue;
//
//		else if (K - A[i] >= 0) {
//			ans = K / A[i];
//			K -= ans * A[i];
//			fin_answer += ans;
//		}
//
//		if (K == 0) break;
//	}
//
//	cout << fin_answer << endl;
//	return 0;
//}