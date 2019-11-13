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
//		if (nowarr != arr[i]) { // 다음이랑 다르면
//			answer.push_back(nowarr); // 다른 값 추가
//			nowarr = arr[i]; // 다시 새로운 애를 nowarr로 설정
//		}
//	}
//	// 다음이랑 같으면 지나쳐서 나옴
//	answer.push_back(nowarr); // 같은 값 추가
//
//	return answer;
//}