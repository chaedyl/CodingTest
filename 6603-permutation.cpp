//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int lotto[12]; // �Է� �Ǵ� ���� ���� ����
//int v[12]; // 0,1 �� ������ ����
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
//		// k���� 1 �߰�
//		for (int i = 0; i < 6; i++) {
//			v[i] = 1;
//		}
//
//		// k-6���� 0 �߰�
//		for (int i = 6; i < k; i++) {
//			v[i] = 0;
//		}
//
//		// ����
//		sort(v, v+7, desc);
//	
//		int v_size = sizeof(v) / sizeof(v[0]);
//
//		//����
//		do {
//			//// ���
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