//#include <iostream>
//#include <queue>
//using namespace std;
//
//int N, M, x, y, K, a;
//int map[21][21];
//queue<int> q;
//int ans;
//int dy[5] = { 0, 1, -1, 0, 0 }; // ���� �� �� �� ��
//int dx[5] = { 0, 0, 0, -1, 1 };
//
//int dice[7]; // �ֻ��� �迭 !!! (��������, ���� ó���� �ֻ������� ��� �鿡 0�� ��������!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!)
//int temp[7]; // �ֻ��� ���ġ�� ���� �迭 !!!
//
//
////// ȸ���� ���� ���� �������� �迭�� ������� !!!!!
////const int direct[5][6] = {
////	{1, 4, 2, 3, 5, 6}, // 0 ����
////	{4, 6, 2, 1, 5, 3}, // 1 �������� �̵�
////	{3, 1, 2, 6, 5, 4}, // 2 �������� �̵�
////	{5, 4, 1, 3, 6, 2}, // 3 �������� �̵�
////	{2, 4, 6, 3, 1, 5}  // 4 �������� �̵�
////
////	//{1, 2, 3, 4, 5, 6}, // 0 �⺻
////	//	{4, 2, 1, 6, 5, 3}, // 1 ����
////	//	{3, 2, 6, 1, 5, 4}, // 2 ����
////	//	{5, 1, 3, 4, 6, 2}, // 3 ����
////	//	{2, 6, 3, 4, 1, 5}  // 4 ����
////};
//
//void moving_dice(int roll) {
//
//	for (int i = 1; i < 7 ; i++) {
//		temp[i] = dice[i];
//	}
//
//	switch (roll)
//	{
//	case 1:
//		dice[1] = temp[3];
//		dice[3] = temp[6];
//		dice[4] = temp[1];
//		dice[6] = temp[4];
//		break;
//	case 2:
//		dice[1] = temp[4];
//		dice[3] = temp[1];
//		dice[4] = temp[6];
//		dice[6] = temp[3];
//		break;
//	case 3:
//		dice[1] = temp[2];
//		dice[2] = temp[6];
//		dice[5] = temp[1];
//		dice[6] = temp[5];
//		break;
//	case 4:
//		dice[1] = temp[5];
//		dice[2] = temp[1];
//		dice[5] = temp[6];
//		dice[6] = temp[2];
//		break;
//	}
//}
//
//int main() {
//
//	// �Է�
//	cin >> N >> M >> x >> y >> K;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	for (int i = 0; i < K; i++) {
//		cin >> a;
//		q.push(a);
//	}
//
//	// ����
//	while (!q.empty()) {
//		int roll;
//		roll = q.front();
//		q.pop();
//
//		//x += dx[roll];
//		//y += dy[roll];
//
//		int nextx = x + dx[roll];
//		int nexty = y + dy[roll];
//
//		if (nextx < 0 || nexty < 0 || nextx >= N || nexty >= M) {
//			// �ֻ����� ���� ������ �̵��Ϸ��� �� �� ,
//
//			//x -= dx[roll];
//			//y -= dy[roll]; // ��� ���� (������ ����� �̵��� �ٽ� ���ڸ���)
//			continue; // ��µ� ����
//		}
//
//		//// �ֻ��� ������ �� ���� ���ġ
//		//for (int i = 0; i < 6; i++) {
//		//	temp[i] = dice[i];
//		//}
//
//		//for (int i = 0; i < 6; i++) {
//		//	dice[direct[roll][i] - 1] = temp[i];
//		//}
//
//		moving_dice(roll);
//
//
//		// �ֻ��� ���� �� ���� ��ȭ
//		if (map[nextx][nexty]==0) {
//			map[nextx][nexty] = dice[6];
//		}
//		else {
//			dice[6] = map[nextx][nexty];
//			map[nextx][nexty] = 0;
//		}
//
//		// �ֻ����� ���� ���� �ִ� �� ���
//		ans = dice[1];
//		cout << ans << endl;
//
//		// �������� ��ǥ ������Ʈ �������!!!
//		x = nextx;
//		y = nexty;
//	}
//
//	return 0;
//}