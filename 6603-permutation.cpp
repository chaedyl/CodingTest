//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int lotto[12]; // 입력 되는 숫자 담을 벡터
//int v[12]; // 0,1 을 저장할 벡터
//
//int k, n;
//
//bool desc(int a, int b) {
//	return a > b;
//}
//
//int main() {
//
//	while(cin>>k){
//		if (k == 0) break;
//
//		for (int i = 0; i < k; i++) {
//			cin >> lotto[i];
//		}
//
//		sort(lotto,lotto+7);
//
//		// k개의 1 추가
//		for (int i = 0; i < 6; i++) {
//			v[i] = 1;
//		}
//
//		// k-6개의 0 추가
//		for (int i = 6; i < k; i++) {
//			v[i] = 0;
//		}
//
//		// 정렬
//		sort(v, v+7, desc);
//	
//		int v_size = sizeof(v) / sizeof(v[0]);
//
//		//순열
//		do {
//			//// 출력
//			for (int i = 0; i < v_size; i++) {
//				if (v[i] == 1) {
//					printf("%d ", lotto[i]);
//				}
//			}
//
//			printf("\n");
//
//		} while (prev_permutation(v, v+7));
//	}
//	return 0;
//}