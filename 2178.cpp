#include <iostream>
#include <vector>
#include <cstring>
#include <queue>
using namespace std;

int N, M;
int map[101][101];
//bool visit[101][101];
int dy[4] = {1, -1, 0, 0};
int dx[4] = {0, 0, -1, 1};

void bfs(int y, int x) {
	queue<pair<int, int>> q;
	if (x < 0 || y < 0 || x >= N || y >= M) return;
	//if (visit[y][x]) return;

	q.push(make_pair(y,x));

	//visit[y][x] = true;

	while(!q.empty()) {
		x = q.front().second;
		y = q.front().first;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nextx = x + dx[i];
			int nexty = y + dy[i];
			if (nextx < 0 || nexty < 0 || nextx >= N || nexty >= M) return;

			if (map[nexty][nextx] == 1) {
				q.push(make_pair(nexty, nextx));
				map[nexty][nextx] = map[y][x] + 1;
			}
		}
	}
}

int main() {
	cin >> N >> M;

	for (int i = 0;i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf("%1d", &map[i][j]); 
			// 붙어있는 입력 하나씩 받을 때, %1d 로 써야함, %d 아님!
		}
	}

	bfs(0, 0);
	cout << map[N-1][M-1]-1 << endl;

	return 0;
}