//#include <iostream>
//using namespace std;
//
//char arr[4] = { 'A','B', 'C', 'D' }; // ��ü �迭
//int N = 4; // ���� ��
//bool visit[4]; // arr ����� ����
//int order[4]; // N ����� ����
//
//void dfs(int cnt) { // idx�� �ʿ����
//	if (cnt == N) {
//		for (int i = 0; i < N; i++) {
//			cout << arr[order[i]] << " ";
//		}
//		cout << endl;
//		return;
//	}
//
//
//	for (int i = 0; i < N; i++) { // 0���� ����
//		if (!visit[i]) {
//			
//			visit[i] = 1;
//			order[cnt] = i; // ������ ����
//			dfs(cnt + 1); // ������ ����
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