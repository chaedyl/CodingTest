//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//vector<int> v;
//vector<int> num;
//int n, r, mynum;
//
//bool desc(int a, int b) { // ��������
//	return a > b;
//}
//
//void combination() {
//
//	sort(num.begin(), num.end(), desc);
//	 //sort �� �⺻ ���������̴ϱ�, �ǵڿ� ���Լ� desc(��������) �߰�����!
//
//	do {
//		for (int i = 0; i < num.size(); i++) {
//			cout << num[i]; // �� ���
//		}
//		cout << endl;
//	} while (next_permutation(num.begin(), num.end(), desc));
//
//}
//
//int main() {
//
//	cout << "�� ���� ���Ҹ� ���� �迭�Դϱ�?" << '\n';
//	cin >> n;
//
//	cout << "�� ���� ���Ҹ� �̾Ƴ��ϱ�?" << '\n';
//	cin >> r;
//
//
//	cout << "���Ҹ� �����ϼ���" << '\n';
//	for (int i = 0; i < n; i++) {
//		cin >> mynum;
//		num.push_back(mynum);
//	}
//
//	combination();
//
//	return 0;
//}