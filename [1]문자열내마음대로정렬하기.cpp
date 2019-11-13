//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int N;
//
//bool compare(string a, string b) {
//	if (a.at(N) != b.at(N)) { // n번째 원소가 다르면
//		return a.at(N) < b.at(N);
//	}
//	else { // n번째 원소가 같으면
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