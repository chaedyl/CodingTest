//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int N;
//
//bool compare(string a, string b) {
//	if (a.at(N) != b.at(N)) { // n��° ���Ұ� �ٸ���
//		return a.at(N) < b.at(N);
//	}
//	else { // n��° ���Ұ� ������
//		return a < b;
//	}
//}
//
//vector<string> solution(vector<string> strings, int n) {
//	vector<string> answer;
//	answer = strings;
//
//	N = n;
//	sort(answer.begin(), answer.end(), compare);
//
//	return answer;
//}