//// 연산자 오버로딩 사용해보기
//
//
//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//
//class Person {
//public:
//	string name;
//	int age;
//	Person(int age, string name) {
//		this->name = name;
//		this->age = age;
//	}
//};
//
//bool operator <(const Person &a, const Person &b) {
//	return a.age < b.age;
//}
//
//int main() {
//	vector<Person> v1;
//	v1.push_back(Person(23, "jinyue"));
//	v1.push_back(Person(25, "pangseok"));
//	v1.push_back(Person(24, "JooC"));
//	v1.push_back(Person(22, "chaedy"));
//	v1.push_back(Person(20, "dongdong"));
//	sort(v1.begin(), v1.end());
//	for (int i = 0; i < v1.size(); i++)
//		cout << v1[i].age << ", " << v1[i].name << endl;
//}