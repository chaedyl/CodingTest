#include <iostream>
using namespace std;

int parent[11];

// �θ� ��带 ã�� �Լ�
int getParent(int x) {
	if (parent[x] == x) return x;
	else return parent[x] = getParent(parent[x]);
}

// �� �θ� ��带 ��ġ�� �Լ�
void unionParent(int a, int b) {
	a = getParent(a);
	b = getParent(b);

	// �� ���� ������ ��ģ��.
	if (a < b) parent[b] = a;
	else parent[a] = b;
}


// ���� �θ� �������� Ȯ�� 
// > ���� �׷����� �����ִ��� Ȯ�� > ����Ȯ��
int findParent(int a, int b) {

	a = getParent(a);
	b = getParent(b);
	if (a == b) return 1;
	else return 0;

}


int main() {

	for (int i = 1; i <= 10; i++) {
		parent[i] = i;
	}

	unionParent(1, 2);
	unionParent(2, 3);
	unionParent(3, 4);
	unionParent(5, 6);
	unionParent(6, 7);
	unionParent(7, 8);
	cout << "1�� 5�� ����? " << findParent(1, 5) << endl;
	unionParent(1, 5);
	cout << "1�� 5�� ����? " << findParent(1, 5) << endl;

	return 0;
}