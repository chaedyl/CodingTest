//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//vector<int> solution(vector<int> arr)
//{
//	vector<int> answer;
//
//	int nowarr = arr.front();
//
//	for (int i = 1; i < arr.size(); i++) {
//		if (nowarr != arr[i]) { // �����̶� �ٸ���
//			answer.push_back(nowarr); // �ٸ� �� �߰�
//			nowarr = arr[i]; // �ٽ� ���ο� �ָ� nowarr�� ����
//		}
//	}
//	// �����̶� ������ �����ļ� ����
//	answer.push_back(nowarr); // ���� �� �߰�
//
//	return answer;
//}