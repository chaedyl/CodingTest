//#include <iostream>
//#include <cstring>
//using namespace std;
//
//int K;
//int num, dir;
//int map[5][9]; 
//bool change[5];
//int nextnum;
//int ans;
//
//void dir_tf() {
//
//	if (map[1][3] != map[2][7]) change[1] = 1;
//	if (map[2][3] != map[3][7]) change[2] = 1;
//	if (map[3][3] != map[4][7]) change[3] = 1;
//}
//
//void rotation(int num, int dir) {
//
//	// 시계방향 회전
//	if (dir == 1) {
//		int temp = map[num][8];
//		for (int i = 8; i > 1 ; i--) {
//			map[num][i] = map[num][i-1];
//		}
//		map[num][1] = temp;
//		
//	}
//	
//	// 반시계방향 회전
//	else {
//		int temp = map[num][1];
//		for (int i = 1;i<8; i++) {
//			map[num][i] = map[num][i+1];
//		}
//		map[num][8] = temp;
//	}
//}
//
//
//void start(int num, int dir) {
//	memset(change, 0, sizeof(change));
//
//	dir_tf(); // TF 칸 채우기
//
//	rotation(num, dir); // 자기 자신 돌리기
//
//	int temp_n = num;
//	int temp_d = dir;
//	while (temp_n >= 2) {
//		if (change[temp_n--] == true) { // 바퀴의 왼쪽이 일치하면
//			rotation(temp_n, temp_d *= (-1));
//			continue;
//		}
//		break;
//	}
//
//	int temp_n2 = num;
//	int temp_d2 = dir;
//	while (temp_n2 <= 3) {
//		if (change[temp_n2] == true) { // 바퀴의 오른쪽이 일치하면
//			rotation(++temp_n2, temp_d2 *= (-1));
//			continue;
//		}
//		break;
//	}
//}
//
//
//int main() {
//
//	for (int i = 1; i <= 4; i++) {
//		for (int j = 1; j <= 8; j++) {
//			scanf("%1d", &map[i][j]);
//		}
//	}
//
//	cin >> K;
//	for (int i = 0; i < K; i++) {
//		cin >> num >> dir;
//		start(num, dir);
//	}
//
//	if (map[1][1]) ans += 1;
//	if (map[2][1]) ans += 2;
//	if (map[3][1]) ans += 4;
//	if (map[4][1]) ans += 8;
//
//	// test
//	/*for (int i = 1; i <= 4; i++) {
//		for (int j = 1; j <= 8; j++) {
//			cout << map[i][j];
//		}
//		cout << endl;
//	}*/
//
//	cout << ans << endl;
//
//	return 0;
//}