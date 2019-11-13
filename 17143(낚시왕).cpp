//#include <iostream>
//#include <algorithm>
//#include <cstring>
//
//using namespace std;
//
//
//typedef struct shark {
//	int s; // 상어 속력
//	int d; // 상어 이동방향 
//	int z; // 상어 크기
//};
//
//int R, C, M; // 격자판 세로, 격자판 가로, 상어 수
//
//shark map[101][101]; // 현재 상태 격자판
////shark temp[101][101]; // 상어 이동 후 격자판
//int ans; // 답
//
//int dy[5] = { 0, -1, 1, 0, 0 }; 
//int dx[5] = { 0, 0, 0, 1, -1 }; // 상하좌우
////shark temp[101][101]; // 상어 이동 후 결과를 나타내는 맵 초기화 해줌
//shark temp[101][101];
//
//void solve() {
//	for (int t = 1; t <= C; t++) { // 시간의 흐름
//
//		temp[101][101] = { 0, }; // 상어 이동 후 결과를 나타내는 맵 초기화 해줌
//
//		// 1. 상어 잡기
//		for (int i = 1; i <= R; i++) {
//			if (map[i][t].z) { // 상어가 있으면
//				ans += map[i][t].z; // 상어 낚시 완료 > 상어 크기만큼 점수 추가
//				map[i][t] = { 0, 0, 0 }; // 잡힌 상어는 원래 map에서 삭제
//				break; // 한 열에서, 땅에서 제일 가까운 한개 상어 잡으면 낚시 끝
//			}
//		}
//
//		// 2. 상어 이동
//		for (int i = 1; i <= R; i++) { // map 전체 돌면서
//			for (int j = 1; j <= C; j++) {
//				if (map[i][j].z) { // 상어가 존재할 때
//					if (map[i][j].d == 1 || map[i][j].d ==2) { // 방향이 위, 아래인 경우
//						int s = map[i][j].s % ((R - 1) * 2); // 이동해야하는 칸 수
//						int d = map[i][j].d; // 방향
//						int nowi = i; // 현재 위치한 행
//						while (s--) { // 이동해야하는 칸수만큼 실행
//
//							// 격자판의 경계 닿을 때 예외 처리
//							if (nowi == 1 && d == 1) d = 2; // 위쪽 경계 닿을 때, 방향 아래로 전환
//							if (nowi == R && d == 2) d = 1; // 아래쪽 경계 닿을 때, 방향 위로 전환
//
//							// 격자판의 경계에 닿지 않을 때
//							nowi += dy[d]; // 행 값 변화
//						}
//
//						// 3. 상어끼리 잡아먹기
//						if (map[i][j].z > temp[nowi][j].z) { // 이동 완료 후 상어 크기가 원래 상어 크기보다 작으면
//							temp[nowi][j] = { map[i][j].s , d, map[i][j].z }; // 새로운 맵에 원래 상어 저장
//						}
//					}
//					else { // 방향이 좌, 우인 경우
//						int s = map[i][j].s % ((C - 1) * 2);
//						int d = map[i][j].d;
//						int nowj = j; // 현재 위치한 열
//						while (s--) {
//							if (nowj == 1 && d == 4) d = 3; // 왼쪽 경계 닿을 때, 방향 오른쪽으로
//							if (nowj == C && d == 3) d = 4; // 오른쪽 경계 닿을 때, 방향 왼쪽으로
//							nowj += dx[d]; // 열값 변화
//						}
//						if (map[i][j].z > temp[i][nowj].z) {
//							temp[i][nowj] = { map[i][j].s, d, map[i][j].z };
//						}
//
//						map[i][j] = { 0, 0, 0 }; // 이동처리가 끝난 상어는 지워줌
//					}
//				}
//			}
//		}
//		memcpy(map, temp, sizeof(temp)); // temp 를 다시 map 에 복사해줌
//	}
//
//}
//
//
//int main() {
//
//	// 입력
//	cin >> R >> C >> M;
//	for (int i = 1; i <= M; i++) {
//		int r, c, s, d, z; // 상어위치 세로, 상어위치 가로
//		cin >> r >> c >> s >> d >> z;
//		map[r][c] = {s, d, z};
//	}
//
//	solve();
//	cout << ans << endl;
//
//	return 0;
//}