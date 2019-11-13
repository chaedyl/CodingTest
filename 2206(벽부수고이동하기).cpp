//#include <iostream>
//#include <queue>
//using namespace std;
//
//int N, M;
//int map[1001][1001];
//int visit[1001][1001][2]; // ������ �ε����� �� �μ��� ���� ����
//int ans;
//int dx[4] = { 0,0,-1,1 };
//int dy[4] = { -1,1,0,0 };
//queue <pair<pair<int, int>, int>> q;
//
//int bfs() {
//
//	q.push({ { 1,1 } ,0 });
//	visit[1][1][0] = 1;
//
//	while (!q.empty()) {
//
//		int nowx = q.front().first.second;
//		int nowy = q.front().first.first;
//		int bomb = q.front().second;
//		q.pop();
//
//		// ������ ĭ���� �� ��� return
//		if (nowx == M && nowy == N) {
//			return visit[nowy][nowx][bomb];
//		}
//
//		for (int i = 0; i < 4; i++) {
//			int nextx = nowx + dx[i];
//			int nexty = nowy + dy[i];
//
//			if (nexty<1 || nextx<1 || nexty>N || nextx>M) continue;
//
//			// �̹� �湮������
//			if (visit[nexty][nextx][bomb] > 0) continue;
//
//			// ���� ĭ�� ���ε� �̹� ���� �ν� ���
//			if (map[nexty][nextx] == -1 && bomb == 1) continue;
//
//			// ���� ĭ�� ���ε� ���� �ν� ���� ���� ���
//			if (map[nexty][nextx] == -1 && bomb == 0) {
//				visit[nexty][nextx][1] = visit[nowy][nowx][bomb] + 1;
//				q.push({ {nexty, nextx},1 });
//			}
//
//			if (map[nexty][nextx] == 0) {
//				visit[nexty][nextx][bomb] = visit[nowy][nowx][bomb] + 1;
//				q.push({ { nexty,nextx }, bomb });
//			}
//		}
//	}
//
//	return -1;
//}
//
//
//int main() {
//
//	cin >> N >> M;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= M; j++) {
//
//			scanf(" %1d", &map[i][j]);
//
//			if (map[i][j] == 1) {
//				map[i][j] = -1;
//			}
//		}
//	}
//
//	cout << bfs() << endl;
//
//	return 0;
//}