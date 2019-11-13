//#include <iostream>
//#include <queue>
//using namespace std;
//
//int N, K;
//int cnt;
//bool visit[100001];
//int calculation(int x, int i) {
//	int ans;
//
//	if (i == 0) {
//		ans = x + 1;
//	}
//	else if (i == 1) {
//		ans = x - 1;
//	}
//	else if (i == 2) {
//		ans = x * 2;
//	}	
//
//	return ans;
//}
//
//
//void bfs() {
//
//	queue<pair<int, int>> q;
//
//	q.push({ N, 0 });
//	visit[N] = true;
//	while (!q.empty()) {
//		int now = q.front().first;
//		int nowcnt = q.front().second;
//		q.pop();
//
//		if (now == K) {
//			cout << nowcnt << endl;
//			break;
//		}
//
//		for (int i = 0; i < 3; i++) {
//			int next = calculation(now, i);
//			
//			if (next < 0 || next > 100000) continue;
//			if (visit[next] == true) continue;
//
//			q.push({ next, nowcnt + 1});
//			visit[next] = true;
//		}
//	}
//
//}
//
//int main() {
//	cin >> N >> K;
//
//	bfs();
//
//	return 0;
//}