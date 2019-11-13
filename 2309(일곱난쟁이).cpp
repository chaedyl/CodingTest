//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int nanjang[10];
//int max_ans = 987654321;
//int result;
//bool flag = false;
//
//int main() {
//
//	for (int i = 1; i <= 9; i++) {
//		cin >> nanjang[i];
//		result += nanjang[i]; // 먼저 9명 난쟁이의 키의 합을 구함
//	}
//
//	for (int i = 1; i <= 9; i++) {
//		for (int j = i+1; j <= 9; j++) {
//			if ((result - nanjang[i] - nanjang[j]) == 100) {
//				nanjang[i] = max_ans;
//				nanjang[j] = max_ans;
//				flag = true;
//				break;
//			}
//		}
//		if (flag) break;
//	}
//
//	sort(nanjang, nanjang + 10);
//
//	for (int i = 1; i <= 7; i++) {
//		if (nanjang[i] != max_ans) {
//			cout << nanjang[i] << endl;
//		}
//	}
//
//	return 0;
//}