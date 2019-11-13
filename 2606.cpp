//#include <iostream>
//#include <vector>
//#include <queue>
//#include <string>
//using namespace std;
//
//int c[7]; // 방문처리
//vector<int> a[7]; // 노드
//
//
//int bfs(int start) {
//
//	queue<int> q; // 큐
//	q.push(start);
//	c[start] = true;
//	int count_ = 0;
//
//
//	while (!q.empty()) { // 큐가 빌 때까지 반복
//		int x = q.front();
//		q.pop();
//		count_ = count_ + 1;
//
//		for (int i = 0;i < a[x].size();i++) { // 큐에서 꺼낸 노드와 인접한 노드 방문
//			int y = a[x][i]; // 각 노드의 인접노드 나타냄
//			if (!c[y]) { // 방문 한 상태가 아닌 경우
//				q.push(y); // 큐에 담아주고,
//				c[y] = true; // 방문 처리
//			}
//		}
//	}
//	return count_ -1;
//}
//
//int main() {
//	
//	int com; // 컴퓨터 개수
//	cin >> com;
//
//	int com_pair; // 연결 개수
//	cin >> com_pair;
//
//	int innode, outnode; // 두개의 노드 연결
//	for (int i = 0;i < com_pair;i++) {
//		cin >> innode >> outnode;
//		a[innode].push_back(outnode);
//		a[outnode].push_back(innode);
//	}
//
//	cout << bfs(1);
//
//	return 0;
//}