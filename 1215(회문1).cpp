//#include <iostream>
//#include <cstring>
//#include <vector>
//using namespace std;
//
//int L;
//char map[10][10];
//int ans;
//vector<char> v;
//
//void solve(int y, int x) {
//
//	// �� �����ϸ鼭 Ȯ�� (����)
//	bool flag = true;
//	v.clear();
//	v.push_back(map[y][x]);
//
//	for (int i = 1; i < L; i++) {
//		int nextx = x + i;
//		if (nextx > 7) {
//			flag = false; // �� �ƴ� ó��
//			break;
//		}
//		v.push_back(map[y][nextx]);
//	}
//
//	for (int i = 0; i <= v.size()/2; i++) {
//		if (v[i] != v[v.size() - 1 - i]) {
//			flag = false;
//			break;
//		}
//	}
//
//	if (flag) { ans += 1; }
//	v.clear();
//
//	// �� �����ϸ鼭 Ȯ�� (����)
//	flag = true;
//	v.push_back(map[y][x]);
//	for (int i = 1; i < L; i++) {
//		int nexty = y + i;
//		if (nexty > 7) {
//			flag = false;
//			break;
//		}
//		v.push_back(map[nexty][x]);
//	}
//
//	for (int i = 0; i < v.size()/2; i++) {
//		if (v[i] != v[v.size() - 1 - i]) {
//			flag = false;
//			break;
//		}
//	}
//
//	if (flag) { ans += 1; }
//	v.clear();
//}
//
//
//int main() {
//
//	
//	for (int k = 1; k <= 10; k++) {
//
//		cin >> L; // ȸ���� ����
//		for (int i = 0; i < 8; i++) {
//			for (int j = 0; j < 8; j++) {
//				//scanf(" %1c", &map[i][j]);
//				cin >> map[i][j];
//			}
//		}	
//
//		for (int i = 0; i < 8; i++) {
//			for (int j = 0; j < 8; j++) {
//				solve(j, i);
//			}
//		}
//
//		cout << "#" << k <<" "<< ans << endl;
//		ans = 0;
//	}
//
//	return 0;
//}