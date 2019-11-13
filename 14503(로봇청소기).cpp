//#include <iostream>
//using namespace std;
//
//int N, M, robo_x, robo_y, robo_d;
//int dx[4] = {0, 1, 0, -1}; // 북 동 남 서
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
//	map[robo_y][robo_x] = 2; // 현재 위치 청소 (청소했으면 2로 바꿔줌)
//	ans = 1;
//
//	while (1) {
//
//		bool clean = false; // 4방향 모두 탐색했는데도 청소할 곳 없는 경우를 위한 flag !!
//
//		for (int k = 0; k < 4; k++) { // 4번 회전하면서 청소 가능 칸 확인
//
//			int nextdir = (robo_d + 3) % 4; 
//			int nextx = robo_x + dx[nextdir];
//			int nexty = robo_y + dy[nextdir]; 
//
//			robo_d = nextdir; // 2-b. 청소할 공간이 없으면 회전만 함
//
//			if (map[nexty][nextx] == 0) { // 2-a. 아직 청소하지 않은 공간이 존재하면
//				map[nexty][nextx] = 2; // 1번으로 돌아가서 현재 위치 청소
//				ans++;
//				robo_x = nextx; // if문 전에서 이미 회전은 했고,
//				robo_y = nexty; // 한칸 전진도 함
//				clean = true; // 청소가 한 칸이라도 됐으니까 flag 바꿔줌
//				break; // for문 탈출
//			}
//		}
//
//		if (clean == false) { // 네 방향 모두 이미 청소가 되어있거나 벽일 때
//
//			int backx = robo_x - dx[robo_d];
//			int backy = robo_y - dy[robo_d];
//			if (map[backy][backx] == 1) break; // 2-d. 뒤쪽 방향도 벽이여서 후진도 못하면 
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