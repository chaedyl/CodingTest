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
//void dfs(int start, int depth) { // 7���� ���ڸ� dfs �� ����Ž��
//
//	// Ż�� ����
//	if (depth == 6) { // �迭�� 6���� �� ���
//		for (int i = 0; i < 6; i++) {
//			cout << v[i] << ' '; // ���� ���
//		}
//		cout << endl;
//		return;
//	}
//
//	for (int i = start; i < k; i++) { // lotto �迭�� 0 ~ k-1���� Ž��
//		v[depth] = lotto[i]; // 0~5��°���� ��͸� ���ؼ� ���� Ž���� ���� ����
//		dfs(i + 1, depth + 1); // ��� �κ�
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