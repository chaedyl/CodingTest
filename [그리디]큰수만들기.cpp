//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//bool compare(int a, int b) {
//	return a > b;
//}
//
//string solution(string number, int k) {
//	string answer = "";
//
//	int need = number.size() - k; // 필요한 자릿수
//	int cmax = 0;
//	int ccount = 0;
//	int j;
//	vector <int> temp;
//
//	for (int i = need; i > 0; i--) {
//		cmax = 0;
//		ccount = 0;
//
//		// 자리수 맞춰서 최대값 찾기
//		for (int j = 0; j < number.length() - i + 1; j++) {
//			if (cmax < number[j]) {
//				cmax = number[j]; // 최대값
//				ccount = j; // 최대값 위치
//			}
//		}
//		
//		// 인덱스 0부터 ccount+1개를 " "으로 치환
//		number.replace(0, ccount + 1, " "); 
//		
//		// 최대값 저장
//		temp.push_back(cmax);
//	}
//
//	for (int i = 0; i < temp.size(); i++) {
//		answer += temp[i];
//	}
//
//	return answer;
//}