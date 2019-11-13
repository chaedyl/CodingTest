//#include <iostream>
//using namespace std;
//
//int N, M, robo_x, robo_y, robo_d;
//int dx[4] = {0, 1, 0, -1}; // �� �� �� ��
//int dy[4] = {-1, 0, 1, 0};
//int map[55][55];
//int ans;
//
//int main() {
//
//	cin >> N >> M;
//	cin >> robo_y >> robo_x >> robo_d;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	map[robo_y][robo_x] = 2; // ���� ��ġ û�� (û�������� 2�� �ٲ���)
//	ans = 1;
//
//	while (1) {
//
//		bool clean = false; // 4���� ��� Ž���ߴµ��� û���� �� ���� ��츦 ���� flag !!
//
//		for (int k = 0; k < 4; k++) { // 4�� ȸ���ϸ鼭 û�� ���� ĭ Ȯ��
//
//			int nextdir = (robo_d + 3) % 4; 
//			int nextx = robo_x + dx[nextdir];
//			int nexty = robo_y + dy[nextdir]; 
//
//			robo_d = nextdir; // 2-b. û���� ������ ������ ȸ���� ��
//
//			if (map[nexty][nextx] == 0) { // 2-a. ���� û������ ���� ������ �����ϸ�
//				map[nexty][nextx] = 2; // 1������ ���ư��� ���� ��ġ û��
//				ans++;
//				robo_x = nextx; // if�� ������ �̹� ȸ���� �߰�,
//				robo_y = nexty; // ��ĭ ������ ��
//				clean = true; // û�Ұ� �� ĭ�̶� �����ϱ� flag �ٲ���
//				break; // for�� Ż��
//			}
//		}
//
//		if (clean == false) { // �� ���� ��� �̹� û�Ұ� �Ǿ��ְų� ���� ��
//
//			int backx = robo_x - dx[robo_d];
//			int backy = robo_y - dy[robo_d];
//			if (map[backy][backx] == 1) break; // 2-d. ���� ���⵵ ���̿��� ������ ���ϸ� 
//			else {
//				robo_x = backx;
//				robo_y = backy;
//			}
//		}
//
//	}
//
//
//	cout << ans << endl;
//	
//	return 0;
//}