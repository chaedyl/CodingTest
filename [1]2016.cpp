//#include <string>
//#include <vector>
//
//using namespace std;
//
//string solution(int a, int b) {
//	string answer = "";
//
//	vector<string> days = { "FRI", "SAT", "SUN", "MON", "TUE", "WED", "THU" };
//	int months[13] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//	int cnt = 0;
//
//	for (int i = 0; i < a - 1; i++) {
//		cnt += months[i]; // 월 별 일수 합침
//	}
//
//	cnt += b - 1; // 일수 합침 (1일 기준이니까 1 빼줌)
//
//	int ans = cnt % 7;
//	answer = days[ans];
//
//	return answer;
//}