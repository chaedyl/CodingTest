//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int N, k, ans;
//int a[101];
//
//void eratos() {
//
//	for (int i = 2; i <= k; i++) {
//		for (int j = 0; j < N; j++) {
//			if (a[j] == i || a[j] == 0) continue;
//			if (a[j] % i == 0 || a[j] == 1) a[j] = 0;
//		}
//	}
//
//	for (int i = 0; i < N; i++) {
//		if (a[i] != 0) ans++;
//	}
//}
//
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> a[i];
//	}
//
//	sort(a, a + N);
//	k = a[N-1];
//
//	eratos();
//
//	cout << ans << endl;
//
//
//	return 0;
//}