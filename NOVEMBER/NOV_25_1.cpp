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
	// ���� �ȵǴ� ������ ĿƮ��Ŵ
	if (x <= -1 || x >= n || y <= -1 || y >= m) {
		return false;
	}
	if (!graph[x][y]) { // ���� �湮���� �ʾҴٸ�,,
		graph[x][y] = 1; // �湮ó�� ���ְ�
		// �����¿� ��� ���
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
			// ������� �������� scanf�� %1d�� ���°��� �������̴�.(ld�ƴ� 1��!)
		}
	}
	// ��� ��忡 ���Ͽ� Ž��
	int result = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			// ���� ��ġ���� DFS����
			if (DFS(i, j) != 0) {
				result++;
				// �̰� ���ذ� �Ȱ� �� �� �ִµ� (0,0)���� �������ڳ� �׷� �������ִ� (1,0)
				// (0,1)�� dfs�� �Ҳ��� ������, �ٵ� ��װ� 0�̸� dfs�Լ����� 1�ιٲ����ڳ�
				// 1�� �ٲ���ٴ� ���� �湮�� �̹� �ߴٴ� ����, �̹� �湮�� �ߴ��ָ�
				//�ٽ� dfs�� �ش������� ���� false�� �����Ե�,, �׷��� result�� ++���ް�
				//�� 1������ ���� ����������, Dfs�� �ᱹ false�� �Ǿ false�� �ƴ� ��������
				// ����for�� ���� �ٽ� ������ �ϴ°��� �׶� result�� �� ++ �Ǵ°Ű�
				// ��, dfs�ȿ��� �ٽ� dfs�� �θ����� result++�� �Ǵ°� �ƴϰ�
				// ó�� dfs�� �θ��� true�϶��� result ++�� �Ǵ°���.
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