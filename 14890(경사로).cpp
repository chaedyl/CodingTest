// ���� : rebas.kr/788


//#include <iostream>
//using namespace std;
//
//int N, L, ans;
//int map[101][101];
//
//void slope(int i, bool check) {
//	int cnt = 1; // �ʱ�ȭ
//
//	for (int j = 1; j <N; j++) {
//
//		// �� or �� ���� ����
//		int d = check == 1 ? map[i][j + 1] - map[i][j] : map[j + 1][i] - map[j][i];
//
//		// ���̰� ���� ���
//		if (d == 0) cnt++;
//
//		// �ö󰡴� ��
//		else if (d == 1 && cnt >= L) {
//			cnt = 1; // ���θ� ���� �� �ִ� ���
//		}
//
//		// �������� ��
//		else if (d == -1 && cnt >= 0) {
//			cnt = 1 - L; // 
//		}
//
//		else return;
//	}
//
//	if (cnt >= 0) ans += 1;
//}
//
//void solve() {
//	for (int i = 1; i <= N; i++) {
//		slope(i, 1); // 1: �� ���� ������
//		slope(i, 0); // 2. �� ���� ������
//	}
//
//	cout << ans << endl;
//}
//
//int main() {
//	cin >> N >> L;
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			scanf("%d", &map[i][j]);
//		}
//	}
//
//	solve();
//
//
//	return 0;
//}