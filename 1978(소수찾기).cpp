//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//long long N, a, ans;
//long long k = -987654321;
//long long map[1001];
//vector <long long> v;
//
//int main() {
//
//	cin >> N;
//
//	for (int i = 1; i <= N; i++) {
//		cin >> a;
//		v.push_back(a);
//		k = max(a, k);
//	}
//
//	for (int i = 1; i <= k; i++) {
//		map[i] = i;
//	}
//
//	for (int i = 2; i <= k; i++) {
//
//		if (map[i] == 0) continue;
//
//		for (int j = 2 * i; j <= k; j += i) {
//			map[j] = 0;
//		}
//	}
//
//	for (int i = 0; i < v.size(); i++) {
//
//		int frst = v[i];
//
//		if (map[frst] != 0 && frst!=1) {
//			ans++;
//			//cout << map[i] << endl;
//		}
//	}
//
//	cout << ans << endl;
//	return 0;
//}