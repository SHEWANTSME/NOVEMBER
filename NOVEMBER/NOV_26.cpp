//#include<iostream>
//#include <vector>
//using namespace std;
//int cache[100];
//int fibo(int n) {
//	if (n <= 2) return 1;
//	if (cache[n] != 0) return cache[n];
//	else {
//		cache[n] = fibo(n - 1) + fibo(n - 2);
//		return cache[n];
//	}
//}
//
//
//int main() {
//	int n,x; cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> x;
//		if (x == 1) {
//			cout << 0 << " " << 1 << endl;
//		}
//		else if (x == 0) {
//			cout << 1 << " " << 0 << endl;
//		}
//		else {
//			cout << fibo(x - 1) << " " << fibo(x) << endl;
//		}
//	}
//	return 0;
//}

//
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//int dx[] = { -1,0,0,1 };
//int dy[] = { 0,1,-1,0 };
//int graph[1001][1001];
//int ans[1001][1001];
//int n, m;
//int cnt = 0;
//queue<pair<int, int>>que;
//int main() {
//	 cin >> n >> m;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			cin >> graph[i][j];
//			ans[i][j] = -1;
//			if (graph[i][j] == 1) { que.push({ i,j }); ans[i][j] = 0; }
//		}
//	}
//
//	while (que.empty() ==false) {
//		int x = que.front().first;
//		int y = que.front().second;
//		que.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//			cout << "nx" << nx << "ny" << ny << endl;
//			if (nx >= 0 && ny >= 0 && nx < n && ny < m) {
//				if (graph[nx][ny] == 0 && ans[nx][ny] == -1) {// 안익음 + 아직 안감
//					ans[nx][ny] = ans[x][y] + 1;
//					cout << "ans[nx][ny]" << ans[nx][ny] << endl;
//					que.push({ nx,ny });
//				}
//			}
//		}
//	}
//	cout << "----------------------------" << endl;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			//cnt = (cnt > ans[i][j]) ? cnt : ans[i][j];
//			if (ans[i][j] == 0) {
//				cnt = -1;
//			}
//			cout << ans[i][j] << " ";
//			cnt = std::max(cnt, ans[i][j]);
//		}cout << endl;
//	}
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (graph[i][j] == 0 && ans[i][j] == -1) cnt = -1;
//		}
//	}
//	cout << cnt;
//	
//	return 0;
//}


//
//#include <iostream>
//#include <queue>
//#include <vector>
//int dy[4] = { 1,-1,0,0 };
//int dx[4] = { 0,0,1,-1 };
//using namespace std;
//int main() {
//
//	int M, N;
//	cin >> M >> N;
//
//	vector<vector<int>> arr(N, vector<int>(M, 0)); //상자
//	vector<vector<int>> visited(N, vector<int>(M, 0)); //토마토 들어있는 상자 방문 유무
//	queue<pair<int, int>> q;
//
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++) {
//			scanf_s("%d", &arr[i][j]);
//			if (arr[i][j] == 1) {
//				q.push(make_pair(i, j));
//				visited[i][j]++;
//			}
//
//		}
//
//	//저장될 때부터 모두 익은 경우
//	if (q.size() == M * N) {
//		cout << 0 << endl;
//		return 0;
//	}
//
//	int ans = 0;
//	while (true) {
//
//		//토마토가 익은 위치의 인접한 부분에서 아직 익지 않은 토마토가 있을 때
//		queue<pair<int, int>> q2;
//
//		while (!q.empty()) {
//			int y = q.front().first;
//			int x = q.front().second;
//			q.pop();
//
//			for (int dir = 0; dir < 4; dir++) {
//				int ny = y + dy[dir];
//				int nx = x + dx[dir];
//
//				if (ny < 0 || ny >= N || nx < 0 || nx >= M)
//					continue;
//
//				if (visited[ny][nx] || arr[ny][nx] != 0)
//					continue;
//
//				visited[ny][nx]++;
//				arr[ny][nx] = 1;
//				q2.push(make_pair(ny, nx));
//			}
//		}
//
//		q = q2;
//		if (q.empty()) //더이상 확인할 토마토 없는 경우
//			break;
//
//
//		ans++;
//	}
//
//	//익지 못한 토마토 있는지 확인
//	for (int i = 0; i < N; i++)
//		for (int j = 0; j < M; j++)
//			if (arr[i][j] == 0) {
//				ans = -1;
//				break;
//			}
//
//
//	cout << ans << endl;
//
//	return 0;
//}
//
//#include <iostream>
//#include <queue>
//#include <vector>
//int dx[] = { -1,0,0,1 };
//int dy[] = { 0,1,-1,0 };
//using namespace std; 
//
//int tomato[1001][1001]; 
//int d[1001][1001];
//int n, m;
//int main() {
//	scanf_s("%d %d", &m, &n); 
//	queue<pair<int, int> > q;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			scanf_s("%d", &tomato[i][j]);
//			d[i][j] = -1; 
//			if (tomato[i][j] == 1) {
//				q.push({ i, j });
//				d[i][j] = 0;
//			}
//		}
//	} 
//	while (!q.empty()) {
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		for (int i = 0; i < 4; i++) {
//			int nx = x + dx[i];
//			int ny = y + dy[i];
//			if (0 <= nx && nx < n && 0 <= ny && ny < m) {
//				if (tomato[nx][ny] == 0 && d[nx][ny] == -1) { // 익지 않은 토마토 이면서 방문하지 않은 곳 
//					d[nx][ny] = d[x][y] + 1;
//					q.push({nx, ny});
//				}
//			}
//		}
//	}
//	int result = 0;
//	for (int i = 0; i < n; i++) { 
//		for (int j = 0; j < m; j++) { 
//			result = max(result,d[i][j]);
//		}
//	} 
//	for (int i = 0; i < n; i++) { 
//		for (int j = 0; j < m; j++) { 
//			if (tomato[i][j] == 0 && d[i][j] == -1) {
//				result = -1;
//			}
//		}
//	}
//	cout << result;
//}
//
//			




#include <iostream>
#include <vector>
#include <queue>

int dx[] = { 0,0,1,-1 };
int dy[] = { -1,1,0,0 };
int graph[1001][1001];
int ans[1001][1001];
int n, m;
using namespace std;
int main() {
	queue<pair<int, int>>q;
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> graph[i][j];
			ans[i][j] = -1;
			if (graph[i][j] == 1) {
				q.push({ i,j });
				ans[i][j] = 0;
			}
		}
	}
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 && ny < 0 && nx >= n && ny >= m) {

			}
		}

	}
	return 0;
}