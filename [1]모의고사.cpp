//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int supo1[5] = { 1,2,3,4,5 };
//int supo2[8] = { 2,1,2,3,2,4,2,5 };
//int supo3[10] = { 3,3,1,1,2,2,4,4,5,5 };
//
//vector<int> solution(vector<int> answers) {
//	vector<int> answer;
//
//	int ans1 = 0;
//	int ans2 = 0;
//	int ans3 = 0;
//
//	for (int i = 0; i < answers.size(); i++) {
//
//		int i1 = i % 5;
//		int i2 = i % 8;
//		int i3 = i % 10;
//
//		if (supo1[i1] == answers[i]) {
//			ans1++;
//		}
//
//		if (supo2[i2] == answers[i]) {
//			ans2++;
//		}
//
//		if (supo3[i3] == answers[i]) {
//			ans3++;
//		}
//	}
//
//	int lastans = max(ans1, max(ans2, ans3));
//
//	if (lastans == ans1) answer.push_back(1);
//	if (lastans == ans2) answer.push_back(2);
//	if (lastans == ans3) answer.push_back(3);
//
//
//	return answer;
//}
