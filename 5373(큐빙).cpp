//#include <iostream>
//#include <cstring>
//#include <string>
//using namespace std;
//
//int T, n; // 테스트케이스 개수, 돌린횟수
//string a; // 돌린면, 돌린방향
//char temp[3][3]; 
//char t[3];
//char cube[6][3][3]; // [면][한면의y][한면의x]
//const char color[6] = {'w','y','r','o','g','b'}; // U D F B L R
//
//void rotation(int d) { // 해당 면을 시계방향 회전
//	memcpy(temp, cube[d], sizeof(cube[d])); //d면의 현재 상태를 temp로 복사
//	cube[d][0][0] = temp[2][0];
//	cube[d][0][1] = temp[1][0];
//	cube[d][0][2] = temp[0][0];
//	cube[d][1][0] = temp[2][1];
//	cube[d][1][2] = temp[0][1];
//	cube[d][2][0] = temp[2][2];
//	cube[d][2][1] = temp[1][2];
//	cube[d][2][2] = temp[0][2];
//}
//
//void anti_rotation(int d) { // 해당 면을 반시계방향 회전
//	memcpy(temp, cube[d], sizeof(cube[d]));
//	cube[d][0][0] = temp[0][2];
//	cube[d][0][1] = temp[1][2];
//	cube[d][0][2] = temp[2][2];
//	cube[d][1][0] = temp[0][1];
//	cube[d][1][2] = temp[2][1];
//	cube[d][2][0] = temp[0][0];
//	cube[d][2][1] = temp[1][0];
//	cube[d][2][2] = temp[2][0];
//}
//
//void U_rotation(int k) { // 윗면의 옆 4면 회전 
//	for (int i = 0; i < 3; i++) t[i] = cube[4][k][i];
//	for (int i = 0; i < 3; i++) cube[4][k][i] = cube[2][k][i];
//	for (int i = 0; i < 3; i++) cube[2][k][i] = cube[5][k][i];
//	for (int i = 0; i < 3; i++) cube[5][k][i] = cube[3][k][i];
//	for (int i = 0; i < 3; i++) cube[3][k][i] = t[i];
//}
//
//void D_rotation(int k) { // 아랫면의 옆 4면 회전
//	for (int i = 0; i < 3; i++) t[i] = cube[4][k][i];
//	for (int i = 0; i < 3; i++) cube[4][k][i] = cube[3][k][i];
//	for (int i = 0; i < 3; i++) cube[3][k][i] = cube[5][k][i];
//	for (int i = 0; i < 3; i++) cube[5][k][i] = cube[2][k][i];
//	for (int i = 0; i < 3; i++) cube[2][k][i] = t[i];
//}
//
//void F_rotation(int k) {
//	int j = k == 0 ? 2 : 0; // k가 0이면 뒷면 반시계 회전
//	for (int i = 0; i < 3; i++) t[i] = cube[0][k][i];
//	for (int i = 0; i < 3; i++) cube[0][k][i] = cube[4][2 - i][k];
//	for (int i = 0; i < 3; i++) cube[4][i][k] = cube[1][j][i];
//	for (int i = 0; i < 3; i++) cube[1][j][i] = cube[5][2 - i][j];
//	for (int i = 0; i < 3; i++) cube[5][i][j] = t[i];
//}
//
//void B_rotation(int k) {
//	int j = k == 0 ? 2 : 0;
//	for (int i = 0; i < 3; i++) t[i] = cube[0][k][i];
//	for (int i = 0; i < 3; i++) cube[0][k][i] = cube[5][i][j];
//	for (int i = 0; i < 3; i++) cube[5][i][j] = cube[1][j][2 - i];
//	for (int i = 0; i < 3; i++) cube[1][j][i] = cube[4][i][k];
//	for (int i = 0; i < 3; i++) cube[4][i][k] = t[2 - i];
//}
//
//void L_rotation(int k) {
//	int j = k == 0 ? 2 : 0;
//	for (int i = 0; i < 3; i++) t[i] = cube[0][i][k];
//	for (int i = 0; i < 3; i++) cube[0][i][k] = cube[3][2 - i][j];
//	for (int i = 0; i < 3; i++) cube[3][i][j] = cube[1][2 - i][k];
//	for (int i = 0; i < 3; i++) cube[1][i][k] = cube[2][i][k];
//	for (int i = 0; i < 3; i++) cube[2][i][k] = t[i];
//}
//
//void R_rotation(int k) {
//	int j = k == 0 ? 2 : 0;
//	for (int i = 0; i < 3; i++) t[i] = cube[0][i][k];
//	for (int i = 0; i < 3; i++) cube[0][i][k] = cube[2][i][k];
//	for (int i = 0; i < 3; i++) cube[2][i][k] = cube[1][i][k];
//	for (int i = 0; i < 3; i++) cube[1][i][k] = cube[3][2 - i][j];
//	for (int i = 0; i < 3; i++) cube[3][i][j] = t[2 - i];
//}
//
//
//void solve() {
//	switch (a[0]) {
//	case'U':
//		if (a[1] == '+') {
//			rotation(0); // 시계방향 회전
//			U_rotation(0); //맨 윗면에 붙은 옆면들 시계방향으로 회전
//		}
//		else {
//			anti_rotation(0); // 반시계방향 회전
//			D_rotation(0); //맨 윗면에 붙은 옆면들 반시계방향으로 회전
//		}
//		break;
//	case 'D':
//		if (a[1] == '-') {
//			anti_rotation(1);
//			U_rotation(2); // 맨 아래면에 붙은 옆면들 시계방향으로 회전
//		}
//		else {
//			rotation(1);
//			D_rotation(2); // 맨 아래면에 붙은 옆면들 반시계방향으로 회전
//		}
//		break;
//	case 'F':
//		if (a[1] == '+') {
//			rotation(2);
//			F_rotation(2);
//		}
//		else {
//			anti_rotation(2);
//			B_rotation(2);
//		}
//		break;
//	case 'B':
//		if (a[1] == '-') {
//			anti_rotation(3);
//			F_rotation(0);
//		}
//		else {
//			rotation(3);
//			B_rotation(0);
//		}
//		break;
//	case 'L':
//		if (a[1] == '+') {
//			rotation(4);
//			L_rotation(0);
//		}
//		else {
//			anti_rotation(4);
//			R_rotation(0);
//		}
//		break;
//	case 'R':
//		if (a[1] == '-') {
//			anti_rotation(5);
//			L_rotation(2);
//		}
//		else {
//			rotation(5);
//			R_rotation(2);
//		}
//		break;
//	default:
//		break;
//	}
//}
//
//int main() {
//	
//	cin >> T;
//
//	while (T--) {
//
//		// 초기상태 큐브
//		for (int i = 0; i < 6; i++) {
//			for (int j = 0; j < 3; j++) {
//				for (int k = 0; k < 3; k++) {
//					cube[i][j][k] = color[i];
//				}
//			}
//		}
//
//		// 회전
//		cin >> n;
//		for (int i = 0; i < n; i++) {
//			cin >> a;
//			solve();
//		}
//
//
//		for (int i = 0; i < 3; i++) {
//			for (int j = 0; j < 3; j++) {
//				cout << cube[0][i][j];
//			}
//			cout << endl;
//		}
//	}
//	
//
//
//	return 0;
//}