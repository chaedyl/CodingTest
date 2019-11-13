//#include <iostream>
//#include <queue>
//#include <vector>
//using namespace std;
//
//int number  =  7;
//
//int c[7]; // 방문 의미
//vector<int> a[8]; // 1~7까지 각 노드
//
//void bfs(int start) {
//	queue<int> q; // 큐 생성
//	q.push(start); // 큐의 시작점 넣어주기
//	c[start] = true; // 방문 처리
//
//	while (!q.empty()) { // 큐가 빌 때까지 반복
//		int x = q.front();
//		q.pop();
//		printf("%d", x);
//
//		for (int i = 0;i < a[x].size();i++) { // 큐에서 꺼낸 노드와 인접한 노드 방문
//			int y = a[x][i]; // 각 노드의 인접노드 나타냄
//			if (!c[y]) { // 방문 한 상태가 아닌 경우
//				q.push(y); // 큐에 담아주고,
//				c[y] = true; // 방문 처리
//			}
//		}
//	}
//}
//
//	int main(void) {
//		a[1].push_back(2);
//		a[2].push_back(1);
//
//		a[1].push_back(3);
//		a[3].push_back(1);
//
//		a[2].push_back(3);
//		a[3].push_back(2);
//
//		a[2].push_back(4);
//		a[4].push_back(2);
//
//		a[2].push_back(5);
//		a[5].push_back(2);
//
//		a[3].push_back(6);
//		a[6].push_back(3);
//
//		a[3].push_back(7);
//		a[7].push_back(3);
//
//		a[4].push_back(5);
//		a[5].push_back(2);
//
//		a[6].push_back(7);
//		a[7].push_back(6);
//
//		bfs(1);
//
//		return 0;
//	}