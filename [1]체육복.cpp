//#include <string>
//#include <vector>
//
//using namespace std;
//
//int solution(int n, vector<int> lost, vector<int> reserve) {
//	int answer = 0;
//	vector<int> v;
//
//	for (int i = 0; i <= n; i++) {
//		v.push_back(0);
//	}
//
//	for (int i = 0; i < reserve.size(); i++) {
//		v[reserve[i]] += 1; // 여분 있는 사람은 1
//	}
//
//	for (int i = 0; i < lost.size(); i++) {
//		v[lost[i]] += -1; // 잃어버린 사람은 -1
//	}
//
//	for (int i = 1; i <= n; i++) {
//		if (v[i] == -1) {
//			if (v[i - 1] == 1) {
//				v[i] += 1;
//				v[i - 1] += -1;
//			}
//			else if (v[i + 1] == 1) {
//				v[i] += 1;
//				v[i + 1] += -1;
//			}
//		}
//	}
//
//	for (int i = 1; i <= n; i++) {
//		if (v[i] == 0 || v[i] == 1) answer++;
//	}
//
//	return answer;
//}