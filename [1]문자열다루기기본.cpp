//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool solution(string s) {
//	bool answer = true;
//	
//	// 1. ���ڿ� ����
//	if (s.size() != 4 && s.size() != 6) answer = false;
//
//	// 2. ����/����
//	for (int i = 0; i < s.size(); i++) {
//		if (abs(s[i] - '0') < 0 || abs(s[i] - '0') > 9) answer = false;
//	}
//
//	return answer;
//}