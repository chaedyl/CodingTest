//#include <iostream>
//#include <string>
//#include <deque>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int T, N, K;
//int ans;
//string str;
//deque<int> dq;
//vector<int> v;
//
//void move() {
//	int temp = dq.back();
//	dq.pop_back();
//	dq.push_front(temp);
//}
//
//int main() {
//
//	cin >> T;
//	for (int k = 1; k <= T; k++) {
//		cin >> N >> K;
//		cin >> str;
//
//		int num = N / 4;
//
//		// 입력 받은 값을 숫자로 변환해서 dq에 저장
//		for (int i = 0; i < str.size(); i++) {
//			if (str[i] >= 'A' && str[i] <= 'F') {
//				dq.push_back(str[i] - 'A' + 10);
//			}
//			else {
//				dq.push_back(str[i] - '0');
//			}
//		}
//		
//		// n번 회전
//		for (int i = 0; i < num; i++) {
//			move();
//			string temp;
//			for (int j = 0; j < N; j++) {
//				if (j % num == 0) temp.clear)();
//			}
//		}
//
//		cout << "#" << k << " " << ans << endl;
//	}
//
//	
//	return 0;
//}