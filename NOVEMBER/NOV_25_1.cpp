//#include<iostream>
//#include <vector>
//#include <queue>
//using namespace std;
//bool vec[1001][1001];
//bool visited[1001];
//int n, m;
//vector<int>v[1001];
//
//void DFS(int n) {
//	visited[n] = true;
//	for (int i = 0; i < v[n].size(); i++) {
//		int m = v[n][i];
//		if (m == 1) {
//			continue;
//		}
//		if (visited[m]==0) DFS(m);
//	}
//}
//int main() {
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++) {
//		for (int j = 0; j < m; j++) {
//			int number;
//			cin >> number;
//			v[i].push_back(number);
//		}
//	}
//	DFS(1);
//
//
//	return 0;
//}


#include <iostream>
#include <vector>
#include <string>
using namespace std;
int n, m; 
int graph[1001][1001];
bool DFS(int x, int y) {
	// 진작 안되는 범위는 커트시킴
	if (x <= -1 || x >= n || y <= -1 || y >= m) {
		return false;
	}
	if (!graph[x][y]) { // 아직 방문하지 않았다면,,
		graph[x][y] = 1; // 방문처리 해주고
		// 상하좌우 모두 재귀
		DFS(x - 1, y);
		DFS(x, y - 1);
		DFS(x + 1, y);
		DFS(x, y + 1);
		return true;
	}
	return false;
}

//pair<int, int> func(pair<int, int>f1, pair<int, int>f2) {
//	int a1 = f1.first*f2.second + f1.second*f2.first;
//	int a2 = f1.second * f2.second;
//	return { a1,a2 };
//}
int main() {
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf_s("%1d", &graph[i][j]);
			// 공백없이 받을때는 scanf로 %1d를 쓰는것이 보편적이다.(ld아님 1임!)
		}
	}
	// 모든 노드에 대하여 탐색
	int result = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			// 현재 위치에서 DFS수행
			if (DFS(i, j) != 0) {
				result++;
				// 이게 이해가 안갈 수 도 있는데 (0,0)부터 시작하자나 그럼 인접해있는 (1,0)
				// (0,1)도 dfs가 할꺼란 말이지, 근데 얘네가 0이면 dfs함수에서 1로바꿔주자나
				// 1로 바뀌었다는 얘기는 방문을 이미 했다는 얘기고, 이미 방문을 했던애를
				//다시 dfs로 해당지점을 가면 false가 나오게됨,, 그러면 result는 ++못받고
				//즉 1때문에 길이 막혀있으면, Dfs가 결국 false가 되어서 false가 아닌 지점까지
				// 이중for를 통해 다시 가봐야 하는거지 그때 result가 또 ++ 되는거고
				// 즉, dfs안에서 다시 dfs를 부를때는 result++가 되는게 아니고
				// 처음 dfs를 부를때 true일때만 result ++가 되는거임.
			}
		}
	}
	cout << result << "\n";
	


	//pair<int, pair<int, string>> good;
	//good = { 1, {2, "32"} };
	//vector<pair<int, string>> vic;
	//vic.push_back({ 7,"apple" }); // not using make_pair
	//pair<int, int>p;
	//p = func({ 3,4 }, { 7,9 });
	//cout << p.first << " " << p.second << endl;
		return 0;
}