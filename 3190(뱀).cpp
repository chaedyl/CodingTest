//#include <iostream>
//#include <queue>
//using namespace std;
//
//int N, K, L, apple_y, apple_x, z;
//int X[101];
//char C[101];
//int cnt;
//int map[101][101];
//int dx[4] = { 1, 0, -1, 0 }; // �� �� �� ��
//int dy[4] = { 0, 1, 0, -1 };
//queue<pair<int, int>> q; // ���� �̵� ��ǥ�� �����ϱ� ���� Queue ��� !!!
//int L_rot[4] = { 3, 0, 1, 2 };
//int D_rot[4] = { 1, 2, 3, 0 };
//
//int main() {
//
//	cin >> N >> K;
//	for (int i = 0; i < K; i++) {
//		cin >> apple_y >> apple_x;
//		map[apple_y-1][apple_x-1] = 1;
//	}
//	cin >> L;
//	for (int i = 0; i < L; i++) {
//		cin >> X[i] >> C[i];
//	}
//
//	int x = 0; // ���� ó�� ��ġ(x)
//	int y = 0; // ���� ó�� ��ġ(y)
//	int dir = 0; // ���� ó�� ����(������)
//
//	map[y][x] = 3;
//	q.push({ 0, 0 }); // ó�� ���� ��ġ �־���
//
//	while (1) {
//		
//		x += dx[dir];
//		y += dy[dir];
//
//		cnt++;
//		if (x < 0 || y < 0 || x >= N || y >= N) break; // ���� �ε����ų�
//		if (map[y][x] == 3) break; // �ڱ� �ڽ� ���� �ε�����, ���� ��
//
//		if (map[y][x] == 0) { // ����� ������  
//			int prex = q.front().second;
//			int prey = q.front().first;
//			q.pop();
//			map[prey][prex] = 0;
//		}
//
//		map[y][x] = 3; // ����� ���ְ� ���� �� ĭ ����
//		q.push({ y, x });
//
//		// if (x < 0 || y < 0 || x >= N || y >= N) break; // ���� �ε����ų�
//		// if (map[y][x] == 3) break; // �ڱ� �ڽ� ���� �ε�����, ���� ��
//		// cnt++;
//
//		if (cnt == X[z]) {
//			if (C[z] == 'D') dir = D_rot[dir];
//			else dir = L_rot[dir];
//			z++;
//		}
//	}
//
//	cout << cnt << endl;
//	return 0;
//}