//#include <iostream>
//#include <queue>
//#include <cstring>
//using namespace std;
//
//int N;
//int map[101][101]; // �Է� ���� map
//int visit[101][101];
//int dist[101][101]; // �Ÿ� ����� map
//int ans = 987654321;
//int cnt;
//int dx[4] = { 0, 0, -1, 1 };
//int dy[4] = { -1, 1, 0, 0 };
//
//struct bridge {
//	int y;
//	int x;
//};
//
//// ������ �� ������ ����
//void dfs(int y, int x) {
//
//	visit[y][x] = 1;
//	map[y][x] = cnt;
//
//	for (int i = 0; i < 4; i++) {
//		int nextx = x + dx[i];
//		int nexty = y + dy[i];
//
//		if (nextx < 0 || nexty < 0 || nextx >= N || nexty >= N) continue;
//
//		if (map[nexty][nextx] == 1 && visit[nexty][nextx] == 0) {
//			dfs(nexty, nextx);
//		}	
//	}
//}
//
//// ���� �� ������ �Ÿ� ���ϱ�
//void bfs(int z) {
//
//	queue<bridge> q;
//	memset(dist, -1, sizeof(dist));
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (map[i][j] == z) {
//				q.push({ i, j });
//				dist[i][j] = 0;
//			}
//		}
//	}
//
//	while (!q.empty()) {
//
//		int x = q.front().x;
//		int y = q.front().y;
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int nextx = x + dx[i];
//			int nexty = y + dy[i];
//
//			if (nextx < 0 || nexty < 0 || nextx >= N || nexty >= N) continue;
//
//			if (map[nexty][nextx] != 0 && map[nexty][nextx] != z) { // �ٸ� �� ������
//				/*if (ans > dist[y][x]) {
//					ans = dist[y][x];
//				}*/
//				ans = min(ans, dist[y][x]); // �̵��Ÿ��� �ּڰ����� ������Ʈ
//				return;
//			}
//			if (map[nexty][nextx] == 0 && dist[nexty][nextx] == -1) { // �ٴ��̸�
//				dist[nexty][nextx] = dist[y][x] + 1;
//				q.push({ nexty, nextx });
//			}
//		}
//	}
//
//}
//
//
//int main() {
//
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> map[i][j];
//		}
//	}
//
//	// 1. ���� ����
//	cnt = 1;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			if (map[i][j] == 1 && visit[i][j] == 0) {
//				dfs(i, j);
//				cnt++;
//			}
//		}
//	}
//
//	// map Test
//	///*cout << endl;
//	//for (int i = 0; i < N; i++) {
//	//	for (int j = 0; j < N; j++) {
//	//			cout << map[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}*/
//
//	// visit Test
//	//cout << endl;
//	//for (int i = 0; i < N; i++) {
//	//	for (int j = 0; j < N; j++) {
//	//		cout << map[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//
//
//	// 2. �� ����
//	for (int i = 1; i < cnt; i++) {
//		bfs(i);
//	}
//
//	//cout << endl;
//	//for (int i = 0; i < N; i++) {
//	//	for (int j = 0; j < N; j++) {
//	//		cout << dist[i][j] << " ";
//	//	}
//	//	cout << endl;
//	//}
//
//	cout << ans << endl;
//
//	return 0;
//}