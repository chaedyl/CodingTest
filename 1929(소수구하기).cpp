//#include <iostream>
//using namespace std;
//
//int M, N;
//int a[1000001];
//
//int main() {
//
//	cin >> M >> N;
//
//	for (int i = 2; i <= N; i++) {
//		a[i] = i;
//	}
//
//	for (int i = 2; i <= N; i++) {
//
//		if (a[i] == 0) continue;
//
//		for (int j = i + i; j <= N; j += i) {		
//			/*if(a[j]%i==0)*/ a[j] = 0;	
//		}
//	}
//
//	for (int i = M; i <= N; i++) {
//		if (a[i] != 0) printf("%d\n", a[i]);
//	}
//
//	return 0;
//}