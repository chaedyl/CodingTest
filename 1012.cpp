//#include <iostream>
//#include <vector>
//#include <queue>
//#include <cstring>
//using namespace std;
//
//int T, M, N, K;
//int board[51][51] = { 0, }; // �� 
//int dx[4] = {0, 0, -1, 1}; // �����¿� x ��ǥ �迭
//int dy[4] = {1, -1, 0, 0}; // �����¿� y ��ǥ �迭
//
//void dfs(int y, int x) {
//
//	if (x < 0 || y < 0 || x >= M || y >= N) // ���� �����
//		return; // ��ȯ
//
//	if (board[y][x] != 1) // �ƹ��͵� ������
//		return; // ��ȯ
//
//	board[y][x] = 2; // �湮ó��
//
//	for (int i = 0 ; i < 4 ; i++) { // �����¿� Ž��
//		int nextx = x + dx[i];
//		int nexty = y + dy[i];
//		dfs(nexty, nextx);
//	}
//}
//
//
//int main() {
//	
//	cin >> T; // testcase ����
//	for (int i = 0; i < T; i++) { // testcase ���� ��ŭ �ݺ�
//		int cnt = 0;
//
//		cin >> M >> N >> K;
//
//		for (int j = 0; j < 51; j++) {
//			memset(board[j], 0, sizeof(int) * 51); // �� �迭 �ʱ�ȭ
//		}
//
//		for (int k = 0; k < K; k++) { // ���� �ɾ��� �� �Է�
//			int x, y;
//			cin >> x >> y;
//			board[y][x] = 1;
//		}
//
//		for (int a = 0; a < M; a++)
//			for (int b = 0; b < N; b++)
//				if (board[b][a] == 1)
//					dfs(b, a), cnt++;
//
//		cout << cnt << endl;
//	}
//
//	return 0;
//}