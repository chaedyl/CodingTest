//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int> v;
//vector<int> num;
//int n, r, mynum;
//
//bool desc(int a, int b) { // 내림차순
//	return a > b;
//}
//
//void combination() {
//
//	sort(num.begin(), num.end(), desc);
//	 //sort 는 기본 오름차순이니까, 맨뒤에 비교함수 desc(내림차순) 추가해줌!
//
//	do {
//		for (int i = 0; i < num.size(); i++) {
//			cout << num[i]; // 값 출력
//		}
//		cout << endl;
//	} while (next_permutation(num.begin(), num.end(), desc));
//
//}
//
//int main() {
//
//	cout << "몇 개의 원소를 가진 배열입니까?" << '\n';
//	cin >> n;
//
//	cout << "몇 개의 원소를 뽑아냅니까?" << '\n';
//	cin >> r;
//
//
//	cout << "원소를 삽입하세요" << '\n';
//	for (int i = 0; i < n; i++) {
//		cin >> mynum;
//		num.push_back(mynum);
//	}
//
//	combination();
//
//	return 0;
//}