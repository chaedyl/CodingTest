////yabmoons.tistory.com/161
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int N, M, K;
//vector<int> map[11][11]; // ���� ������, ���� ����
//// => �ϳ��� ĭ�� ���� ���� ������ ���ÿ� �����ϱ� ������
//// ���� �Ϲ����� int ������ ���� �ʰ�, ���������� ����!!!!!!
//
//int A[11][11]; // �ܿ￡ �߰��Ǵ� ����� ��
//int nut[11][11];// �⺻ ���
//// int nut[11][11]= { 5, }; �̷��� �ʱ�ȭ�ϸ� Ʋ��! �Ʒ����� �Է� ���� �� for�� �̿�!
//int dx[8] = { 0, 0, -1, 1, 1, 1, -1, -1 };
//int dy[8] = { -1, 1, 0, 0, -1, 1, -1, 1 };
//int years; // ����� ��������
//int ans; // ����ִ� ������ ��
//
////void plant(int tree_y, int tree_x, int tree_old, int ind) {
////
////	ind = 0;
////	if (map[tree_y][tree_x][ind] == 0) {
////		map[tree_y][tree_x][ind] = tree_old;
////	}
////	else {
////		map[tree_y][tree_x][ind++] = tree_old;
////	}
////}
//
//
//int main() {
//
//	cin >> N >> M >> K;
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			cin >> A[i][j]; 
//			nut[i][j] = 5; // �⺻ ��� �ʱ�ȭ ����
//		}
//	}
//
//	for (int i = 0; i < M; i++) {
//		int tree_x, tree_y, tree_old;
//		cin >> tree_y >> tree_x >> tree_old;
//
//		map[tree_y][tree_x].push_back(tree_old);
//	}
//
//
//	while (1) {
//		
//		years++;
//		if (years > K) break;
//
//		// ��, ����
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				
//				if (map[i][j].size() == 0) continue;
//
//				vector<int> temp;
//				int die_nut = 0;
//				
//				sort(map[i][j].begin(), map[i][j].end());
//
//				for (int k = 0; k < map[i][j].size(); k++) {
//					int age = map[i][j][k];
//
//					if (nut[i][j] >= age) { // ������ ��� ���� ����
//						nut[i][j] -= age;
//						temp.push_back(age + 1);
//					}
//					else { // ���� ���� 
//						die_nut += age / 2; // ���� �ܰ�� �Ѿ
//
//						//nut[i][j] += age / 2; �̷��� �ع�����, �� �ܰ迡 ���� ���ļ� �ȵ�
//					}	
//				}
//				
//				map[i][j].clear();
//				for (int k = 0; k < temp.size(); k++) {
//					map[i][j].push_back(temp[k]);
//				}
//				nut[i][j] += die_nut;
//			}
//		}
//
//		// ����
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				if (map[i][j].size() == 0) continue;
//
//				for (int k = 0; k < map[i][j].size(); k++) {
//
//					if (map[i][j][k] % 5 == 0) {
//						for (int l = 0; l < 8; l++) {
//							int nextx = j + dx[l];
//							int nexty = i + dy[l];
//
//							if (nextx <= 0 || nexty <= 0 || nextx > N || nexty > N) continue;
//
//							//map[nexty][nextx][k] = 1; �̰� �ƴ�!
//							map[nexty][nextx].push_back(1); // �̰� ����!
//						}
//					}
//				}
//			}
//		}
//
//		// �ܿ�
//		for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				nut[i][j] += A[i][j];
//			}
//		}
//		
//	}
//
//	//for (int i = 1; i <= N; i++) {
//	//	for (int j = 1; j <= N; j++) {
//	//		cout << nut[i][j] << ' ';
//	//	}
//	//	cout << endl;
//	//}
//
//	//for (int i = 1; i <= N; i++) {
//	//	for (int j = 1; j <= N; j++) {
//	//		cout << map[i][j] << ' ';
//	//	}
//	//	cout << endl;
//	//}
//
//	for (int i = 1; i <= N; i++) {
//		for (int j = 1; j <= N; j++) {
//			if (map[i][j].size()!=0) {
//				ans += map[i][j].size();
//			}
//		}
//	}
//
//	cout << ans << endl;
//	return 0;
//}