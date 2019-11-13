//#include <iostream>
//#include <queue>
//using namespace std;
//
//int N, M, x, y, K, a;
//int map[21][21];
//queue<int> q;
//int ans;
//int dy[5] = { 0, 1, -1, 0, 0 }; // 없음 동 서 북 남
//int dx[5] = { 0, 0, 0, -1, 1 };
//
//int dice[7]; // 주사위 배열 !!! (문제에서, 가장 처음에 주사위에는 모든 면에 0이 적혀있음!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!)
//int temp[7]; // 주사위 재배치를 위한 배열 !!!
//
//
////// 회전에 따른 도형 전개도를 배열로 만들어줌 !!!!!
////const int direct[5][6] = {
////	{1, 4, 2, 3, 5, 6}, // 0 원본
////	{4, 6, 2, 1, 5, 3}, // 1 동쪽으로 이동
////	{3, 1, 2, 6, 5, 4}, // 2 서쪽으로 이동
////	{5, 4, 1, 3, 6, 2}, // 3 북쪽으로 이동
////	{2, 4, 6, 3, 1, 5}  // 4 남쪽으로 이동
////
////	//{1, 2, 3, 4, 5, 6}, // 0 기본
////	//	{4, 2, 1, 6, 5, 3}, // 1 동쪽
////	//	{3, 2, 6, 1, 5, 4}, // 2 서쪽
////	//	{5, 1, 3, 4, 6, 2}, // 3 북쪽
////	//	{2, 6, 3, 4, 1, 5}  // 4 남쪽
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
//	// 입력
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
//	// 구현
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
//			// 주사위가 지도 밖으로 이동하려고 할 때 ,
//
//			//x -= dx[roll];
//			//y -= dy[roll]; // 명령 무시 (위에서 해줬던 이동을 다시 제자리로)
//			continue; // 출력도 안함
//		}
//
//		//// 주사위 굴렸을 때 숫자 재배치
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
//		// 주사위 굴린 후 점수 변화
//		if (map[nextx][nexty]==0) {
//			map[nextx][nexty] = dice[6];
//		}
//		else {
//			dice[6] = map[nextx][nexty];
//			map[nextx][nexty] = 0;
//		}
//
//		// 주사위의 제일 위에 있는 수 출력
//		ans = dice[1];
//		cout << ans << endl;
//
//		// 마지막에 좌표 업데이트 해줘야함!!!
//		x = nextx;
//		y = nexty;
//	}
//
//	return 0;
//}