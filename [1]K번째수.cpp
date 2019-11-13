//#include <string>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> solution(vector<int> array, vector<vector<int>> commands) {
//
//	vector<int> answer;
//	vector<int> cut;
//
//	for (int a = 0; a < commands.size(); a++) {
//
//		for (int i = commands[a][0]-1; i < commands[a][1]; i++) {
//			cut.push_back(array[i]);
//		}
//
//		sort(cut.begin(), cut.end());
//
//		int k = commands[a][2]-1;
//		int myans = cut[k];
//		answer.push_back(myans);
//		cut.clear();
//	}
//
//	return answer;
//}