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
//	int need = number.size() - k; // �ʿ��� �ڸ���
//	int cmax = 0;
//	int ccount = 0;
//	int j;
//	vector <int> temp;
//
//	for (int i = need; i > 0; i--) {
//		cmax = 0;
//		ccount = 0;
//
//		// �ڸ��� ���缭 �ִ밪 ã��
//		for (int j = 0; j < number.length() - i + 1; j++) {
//			if (cmax < number[j]) {
//				cmax = number[j]; // �ִ밪
//				ccount = j; // �ִ밪 ��ġ
//			}
//		}
//		
//		// �ε��� 0���� ccount+1���� " "���� ġȯ
//		number.replace(0, ccount + 1, " "); 
//		
//		// �ִ밪 ����
//		temp.push_back(cmax);
//	}
//
//	for (int i = 0; i < temp.size(); i++) {
//		answer += temp[i];
//	}
//
//	return answer;
//}