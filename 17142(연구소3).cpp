//#include <iostream>
//#include <queue>
//#include <algorithm>
//#include <cstring>
//#include <vector>
//using namespace std;
//
//int N, M, k;
//int map[51][51];
//int visit[51][51];
//int dx[4] = { 0, 0, -1, 1 };
//int dy[4] = { -1, 1, 0, 0 };
//int ans;
//int ans_time = 987654321;
//int testcnt;
//
//struct virus {
//	int y;
//	int x;
//};
//
//vector <virus> v; // ���̷����� ���� �� �ִ� ��
//vector <int> vec; // �������� ���ؼ� 0,1 �־����
//queue <virus> q; // Ȱ�� ���̷��� ��ġ
//
//void bfs() {
//
//	while (!q.empty()) {
//
//		int nowx = q.front().x;
//		int nowy = q.front().y;
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int nextx = nowx + dx[i];
//			int nexty = nowy + dy[i];
//
//			if (nextx < 0 || nexty < 0 || nextx >= 7 || nexty >= 7) continue;
//			if (visit[nexty][nextx] > 0 || map[nexty][nextx] == 1) continue;
//
//			if (map[nexty][nextx] == 0) {
//				visit[nexty][nextx] = visit[nowy][nowx] + 1;
//				q.push({ nexty, nextx });
//			}
//
//			if (visit[nexty][nextx] == -2) {
//				visit[nexty][nextx] = 1;
//				q.push({ nexty, nextx });
//			}
//		}
//	}
//}
//
//
//int main() {
//
//	cin >> N >> M;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> map[i][j];
//
//			if (map[i][j] == 2) { // ���̷����̸�
//				v.push_back({ i, j }); // ���̷��� ���� ��ġ �־���
//			}
//
//			else if (map[i][j] == 0) { // ��ĭ�̸�
//				k++; // �������Ѿ� �ϴ� �� ĭ�� ����
//			}
//
//			//else if (map[i][j] == 1) { // ���̸�
//			//	visit[i][j] = -1;
//			//}
//
//		}
//	}
//
//	for (int i = 0; i < M; i++) {
//		vec.push_back(1);
//	}
//
//	for (int i = 0; i < v.size() - M; i++) {
//		vec.push_back(0);
//	}
//
//	sort(vec.begin(), vec.end());
//
//	do {
//	
//		memset(visit, 0, sizeof(visit));
//		ans = 0;
//		testcnt++;
//		
//		for (int i = 0; i < vec.size(); i++) {
//			if (vec[i] == 1) {
//				int x = v[i].x;
//				int y = v[i].y;
//				q.push({y, x});
//				visit[y][x] = 1;
//			}
//			else {
//				int x = v[i].x;
//				int y = v[i].y;
//				visit[y][x] = -2;
//			}
//		}
//
//		// Test
//	/*	cout << endl;
//		cout << "TEST" << testcnt << endl;
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				cout << visit[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;*/
//
//
//		bfs();
//
//		// Test
//		cout << endl;
//		cout << "TEST" << testcnt << endl;
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				cout << visit[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;
//
//
//		for (int a = 0; a < N; a++) {
//			for (int b = 0; b < N; b++) {
//				ans = max(ans, visit[a][b]);
//			}
//		}
//
//		cout << "ans : " << ans-1 << endl;
//
//		ans_time = min(ans_time, ans-1);
//
//	} while (next_permutation(vec.begin(), vec.end()));
//
//	cout << ans_time << endl;
//
//	return 0;
//}