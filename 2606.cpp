//#include <iostream>
//#include <vector>
//#include <queue>
//#include <string>
//using namespace std;
//
//int c[7]; // �湮ó��
//vector<int> a[7]; // ���
//
//
//int bfs(int start) {
//
//	queue<int> q; // ť
//	q.push(start);
//	c[start] = true;
//	int count_ = 0;
//
//
//	while (!q.empty()) { // ť�� �� ������ �ݺ�
//		int x = q.front();
//		q.pop();
//		count_ = count_ + 1;
//
//		for (int i = 0;i < a[x].size();i++) { // ť���� ���� ���� ������ ��� �湮
//			int y = a[x][i]; // �� ����� ������� ��Ÿ��
//			if (!c[y]) { // �湮 �� ���°� �ƴ� ���
//				q.push(y); // ť�� ����ְ�,
//				c[y] = true; // �湮 ó��
//			}
//		}
//	}
//	return count_ -1;
//}
//
//int main() {
//	
//	int com; // ��ǻ�� ����
//	cin >> com;
//
//	int com_pair; // ���� ����
//	cin >> com_pair;
//
//	int innode, outnode; // �ΰ��� ��� ����
//	for (int i = 0;i < com_pair;i++) {
//		cin >> innode >> outnode;
//		a[innode].push_back(outnode);
//		a[outnode].push_back(innode);
//	}
//
//	cout << bfs(1);
//
//	return 0;
//}