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
//		cnt += months[i]; // �� �� �ϼ� ��ħ
//	}
//
//	cnt += b - 1; // �ϼ� ��ħ (1�� �����̴ϱ� 1 ����)
//
//	int ans = cnt % 7;
//	answer = days[ans];
//
//	return answer;
//}