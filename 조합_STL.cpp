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
//	for (int i = 0; i < r; i++) {
//		v.push_back(1); // r��ŭ�� 1�� ä���
//	}
//
//	for (int i = 0; i < n - r; i++) {
//		v.push_back(0); // �������� 0���� ä���
//	}
//
//	sort(v.begin(), v.end(), desc); 
//	// sort �� �⺻ ���������̴ϱ�, �ǵڿ� ���Լ� desc(��������) �߰�����!
//
//	do {
//		for (int i = 0; i < n; i++) {
//			if (v[i] == 1) { // 1�� ä���� ����
//				cout << num[i]; // �� ���
//			}
//		}
//		cout << endl;
//	} while (next_permutation(v.begin(), v.end(), desc));
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