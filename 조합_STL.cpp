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
//	for (int i = 0; i < r; i++) {
//		v.push_back(1); // r만큼은 1로 채우기
//	}
//
//	for (int i = 0; i < n - r; i++) {
//		v.push_back(0); // 나머지는 0으로 채우기
//	}
//
//	sort(v.begin(), v.end(), desc); 
//	// sort 는 기본 오름차순이니까, 맨뒤에 비교함수 desc(내림차순) 추가해줌!
//
//	do {
//		for (int i = 0; i < n; i++) {
//			if (v[i] == 1) { // 1로 채워진 곳의
//				cout << num[i]; // 값 출력
//			}
//		}
//		cout << endl;
//	} while (next_permutation(v.begin(), v.end(), desc));
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