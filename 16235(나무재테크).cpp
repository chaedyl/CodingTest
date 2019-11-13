////yabmoons.tistory.com/161
//
//#include <iostream>
//#include <algorithm>
//#include <vector>
//using namespace std;
//
//int N, M, K;
//vector<int> map[11][11]; // 나무 심은곳, 나이 저장
//// => 하나의 칸에 여러 개의 나무가 동시에 존재하기 때문에
//// 맵을 일반적인 int 형으로 받지 않고, 벡터형으로 받음!!!!!!
//
//int A[11][11]; // 겨울에 추가되는 양분의 양
//int nut[11][11];// 기본 양분
//// int nut[11][11]= { 5, }; 이렇게 초기화하면 틀림! 아래에서 입력 받을 때 for문 이용!
//int dx[8] = { 0, 0, -1, 1, 1, 1, -1, -1 };
//int dy[8] = { -1, 1, 0, 0, -1, 1, -1, 1 };
//int years; // 몇년이 지났는지
//int ans; // 살아있는 나무의 수
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
//			nut[i][j] = 5; // 기본 양분 초기화 해줌
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
//		// 봄, 여름
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
//					if (nut[i][j] >= age) { // 나무가 양분 섭취 가능
//						nut[i][j] -= age;
//						temp.push_back(age + 1);
//					}
//					else { // 나무 죽음 
//						die_nut += age / 2; // 여름 단계로 넘어감
//
//						//nut[i][j] += age / 2; 이렇게 해버리면, 봄 단계에 영향 미쳐서 안됨
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
//		// 가을
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
//							//map[nexty][nextx][k] = 1; 이거 아님!
//							map[nexty][nextx].push_back(1); // 이게 맞음!
//						}
//					}
//				}
//			}
//		}
//
//		// 겨울
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