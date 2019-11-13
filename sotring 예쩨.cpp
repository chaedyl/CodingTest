#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<string> a;
vector<int> b;

int main() {

	a.push_back("12");
	a.push_back("123");
	a.push_back("1235");
	a.push_back("567");
	a.push_back("88");

	sort(a.begin(), a.end());
	
	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << " ";
	}

	cout << endl;

	b.push_back(12);
	b.push_back(123);
	b.push_back(1235);
	b.push_back(567);
	b.push_back(88);

	sort(b.begin(), b.end());

	for (int i = 0; i < b.size(); i++) {
		cout << b[i] << " ";
	}

	return 0;
}