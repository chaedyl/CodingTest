//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(string s) {
//	string answer = "";
//	string a = "";
//	string b = "";
//
//	int mys = s.size();
//	int mid = mys / 2;
//
//	if (mys % 2 == 0) {	
//		a = s[mid - 1];
//		b = s[mid];
//
//		answer = a + b;
//	}
//	
//	if (mys % 2 == 1) {
//		answer = s[mid];
//	}
//		
//	return answer;
//}