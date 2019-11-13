//#include <iostream>
//#include <vector>
//using namespace std;
//
//int number = 7;
//int c[7]; // 방문
//vector<int> a[8]; // 노드
//
//void dfs(int x) {
//	if (c[x])
//		return;
//
//	c[x] = true; // 노드를 처음 방문하는거면 방문처리
//	cout << x << ' '; // 방문처리 한 다음 그 노드 출력
//
//	for (int i = 0; i < a[x].size();i++) { // 인접노드 탐색
//		int y = a[x][i]; // 가장 인접한 노드에 대해서
//		dfs(y); // 다시 dfs 실행 (recursion)
//	}
//}
//
//int main(void) {
//	a[1].push_back(2);
//	a[2].push_back(1);
//
//	a[1].push_back(3);
//	a[3].push_back(1);
//
//	a[2].push_back(3);
//	a[3].push_back(2);
//
//	a[2].push_back(4);
//	a[4].push_back(2);
//
//	a[2].push_back(5);
//	a[5].push_back(2);
//
//	a[3].push_back(6);
//	a[6].push_back(3);
//
//	a[3].push_back(7);
//	a[7].push_back(3);
//
//	a[4].push_back(5);
//	a[5].push_back(4);
//
//	a[6].push_back(7);
//	a[7].push_back(6);
//
//	dfs(1);
//
//	return 0;
//}