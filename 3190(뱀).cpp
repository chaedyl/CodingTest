//#include <iostream>
//#include <queue>
//using namespace std;
//
//int N, K, L, apple_y, apple_x, z;
//int X[101];
//char C[101];
//int cnt;
//int map[101][101];
//int dx[4] = { 1, 0, -1, 0 }; // 동 남 서 북
//int dy[4] = { 0, 1, 0, -1 };
//queue<pair<int, int>> q; // 뱀의 이동 좌표를 저장하기 위해 Queue 사용 !!!
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
//	int x = 0; // 뱀의 처음 위치(x)
//	int y = 0; // 뱀의 처음 위치(y)
//	int dir = 0; // 뱀의 처음 방향(오른쪽)
//
//	map[y][x] = 3;
//	q.push({ 0, 0 }); // 처음 뱀의 위치 넣어줌
//
//	while (1) {
//		
//		x += dx[dir];
//		y += dy[dir];
//
//		cnt++;
//		if (x < 0 || y < 0 || x >= N || y >= N) break; // 벽과 부딪히거나
//		if (map[y][x] == 3) break; // 자기 자신 몸과 부딪히면, 게임 끝
//
//		if (map[y][x] == 0) { // 사과가 없으면  
//			int prex = q.front().second;
//			int prey = q.front().first;
//			q.pop();
//			map[prey][prex] = 0;
//		}
//
//		map[y][x] = 3; // 사과를 없애고 뱀이 그 칸 차지
//		q.push({ y, x });
//
//		// if (x < 0 || y < 0 || x >= N || y >= N) break; // 벽과 부딪히거나
//		// if (map[y][x] == 3) break; // 자기 자신 몸과 부딪히면, 게임 끝
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