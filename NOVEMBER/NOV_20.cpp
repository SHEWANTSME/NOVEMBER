//#include <iostream>
//#include <vector>
//using namespace std;
//int sum(int n) {
//	int ret = 0;
//	for (int i = 1; i <= n; i++) {
//		ret += i;
//	}
//	return ret;
//}
//int recursivesum(int n) {
//	if (n == 1)return 1; // recursive case 에서 가장 중요한 base case(기저 사례)를 만들어 줘야 함
//	else {
//		return n + recursivesum(n - 1);
//	}
//}
//void printPicked(vector<int>&delta) {
//	for (int i = 0; i < delta.size(); i++) {
//		if (delta[i] != 0) {
//			cout << delta[i] << " ";
//		}
//		
//	}
//
//}
//void pick(int n, vector<int>&picked, int toPick) {
//	// n -> total 원소 수 , picked : 지금껏 고른 원소들 번호, topick -> 더 고를 원소 수
//	if (toPick == 0) { printPicked(picked); return; }
//	int smallest = picked.empty() ? 0 : picked.back() + 1;
//	for (int next = smallest; next < n; next++) {
//		picked.push_back(next);
//		pick(n, picked, toPick - 1);
//		picked.pop_back();
//	}
//}
//
//
//int NCR(int n, int r) { // nCr = n-1Cr-1 + n-1Cr
//	if (r == 0 || n == r) return 1;
//	return NCR(n - 1, r - 1) + NCR(n - 1, r);
//}// -> too many 호출,,,
//int cache[1000][1000] = { 0,};
//int NCR2(int n, int r) {
//	cache[n][r] = -1;
//	if ((n == r &&r!=1)|| r == 0) {
//		cache[n][r] = 1;
//		return 1;
//	}
//	if (r == 1) { 
//		cache[n][1] = n;
//		return n;
//	}
//	if (cache[n][r] != -1) return cache[n][r];
//	return cache[n][r] = NCR2(n - 1, r - 1) + NCR2(n - 1, r);
//}
//int main() {
//	/*cout << sum(5) << endl;
//	cout << recursivesum(5) << endl;*/
//	//vector<int>v(10);
//	//pick(10, v, 5);
//	//cout << NCR2(30, 20) << endl;
//	
//	//cout << NCR2(10, 2)%10007 << endl;
//	int n; cin >> n;
//	int r; cin >> r;
//	int t = n;
//	int arr[1001][1001];
//	int ans1 = 1;
//	int ans2 = 1;
//	int ans3 = 0;
//	if (r == 1) {
//		if (n > 10007) { cout << n % 10007 << "\n"; exit(0); }
//		else if (n < 10007) { cout << n << "\n"; exit(0); }
//		else{ cout << 1 << "\n"; exit(0);}
//	}
//	if (r == 0) cout << 1 << "\n";
//	
//	if (n < r) cout << 0 << "\n";
//	else {
//		for (int i = 1; i <= n; i++) arr[i][i] = 1;
//		for (int i = 1; i <= n; i++) arr[1][i] = i;
//	}
//	while (1) {
//		if (r <= (n / 2)) {
//			for (int i = 0; i < r; i++) {
//				ans1 = ans1 * (t - i);
//				ans2 = ans2 * (r - i);
//			
//				
//			}
//			
//			if ((ans1 / ans2) > 10007) { cout << (ans1 / ans2) % 10007 << "\n"; break; }
//			else if ((ans1 / ans2) < 10007) { cout << ans1 / ans2 << "\n"; break; }
//			else { cout << 1 << "\n"; break; }
//		}
//		else if (r > (n / 2)) {
//			r = n - r;
//		}
//	}
//	
//	
//	return 0;
//}
//
//#include <iostream>
//#include<algorithm>
//using namespace std;
//int arr[101];
//
//
//int Longest(int n) {
//	if (n == 1) { arr[1] = 1; return 1; }
//	if (n == 2) { arr[2] = 2; return 2; }
//	if (arr[n] != 0) return arr[n];
//	else {
//		return arr[n] = Longest(n - 1) + Longest(n - 2);
//	}
//}
//
//
//int Ans = 0;
//bool consec = false;
//int stair[301];
//int dp[301][2];
//
//int main() {
//	/*int n; cin >> n;
//	cout<<Longest(n);*/
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> stair[i];
//	}
//	//if (n == 1) { cout << stair[n]; }
//	if (n == 2) { cout << stair[1] + stair[2]; }
//	else {
//		dp[1][0] = stair[1];
//		dp[1][1] = stair[1];
//		dp[2][1] = stair[1] + stair[2];
//		dp[2][0] = stair[2];
//		for (int i = 3; i <= n; i++) {
//			dp[i][0] = (dp[i - 2][1] >= dp[i - 2][0]) ? dp[i - 2][1] + stair[i] : dp[i - 2][0] + stair[i];
//			
//			dp[i][1] = dp[i - 1][0] + stair[i];
//		}
//		
//		cout << max(dp[n][0], dp[n][1]);
//	}
//
//
//	return 0;
//}
//
//#include <iostream>
//#include<algorithm>
//#include <vector>
//using namespace std;
//int main() {
//	int n; cin >> n;
//	int res = 1;
//	vector<int> arr(n + 1), dp(n + 1);
//
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i];
//	}
//	dp[1] = 1;
//	for (int i = 2; i <= n; i++) {
//		int max = 0;
//		for (int j = 1; j <i; j++) {
//			if (arr[j]<arr[i] && dp[j]>max) {
//				max = dp[j];
//			}
//		}
//		dp[i] = max + 1;
//		if (dp[i] > res) res = dp[i];
//	}
//	cout << res;
//
//
//	return 0;
//}
//
//
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int arr[1000001];
//int dp[1000001];
//
//int LowerBound(int *arr, int value, int arrLength) {
//	int low = 1;
//	int high = arrLength;
//	while (low < high) {
//		int mid = (low + high)/ 2;
//		if (value <= arr[mid]) high = mid;
//		else low = mid + 1;
//	}
//	return low;
//}
//int main() {
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i];
//	}
//	dp[1] = arr[1];
//	//(arr[1] < arr[2]) ? dp[2] = arr[2] : dp[1] = arr[2];
//	int i = 2;
//	int index = 1;
//	while (i<=n) {
//		if (dp[index] < arr[i]) {
//			dp[i] = arr[i];
//			index++;
//		}
//		else {
//			if (arr[i] > 0) {
//				//dp[i] = arr[LowerBound(arr, arr[i], i)];
//				//dp[i] = arr[LowerBound(arr, arr[i], i)];
//				dp[LowerBound(arr, arr[index+1], index+1)] = arr[index+1];
//				
//			}
//		}
//		
//		i++;
//	}
//	cout <<index;
//	for (int j = 1; j <index; j++) {
//		 cout << dp[j] << endl;
//	}
//	//cout << i << endl;
//
//
//
//
//	return 0;
//}


//
//#include<iostream>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int arr[1000001];
////int dp[1000001];
//vector<int>dp;
//int LowerBound(int value) {
//	int low = 1;
//	int high = dp.size();
//	while (low < high) {
//		int mid = (low + high) / 2;
//		if (value <= arr[mid]) high = mid;
//		else low = mid + 1;
//	}
//	return low;
//}
//int main() {
//	cin.tie(NULL);
//	cout.tie(NULL);
//	ios_base::sync_with_stdio(false);
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i];
//	}
//	// dp의 사이즈가 정해져 있지 않을때에 저렇게 선언하면 안됨!
//	// 현재 dp의 사이즈는 0 이니까
//	//dp[1] = arr[1];
//	dp.push_back(0);
//	dp.push_back(arr[1]);
//	//(arr[1] < arr[2]) ? dp[2] = arr[2] : dp[1] = arr[2];
//	int i = 2;
//	int index = 1;
//	while (i <= n) {
//		if (dp[index] < arr[i]) {
//			//여기서도 마찬가지.. 이러면 사이즈 오버라니깐
//			//dp[i] = arr[i];
//			dp.push_back(arr[i]);
//			index++;
//		}
//		else {
//			if (arr[i] > 0) {
//				dp[LowerBound(arr[i])] = arr[i];
//			}
//		}
//		i++;
//	}
//	for (int i = 1; i <dp.size(); i++) {
//		cout << dp[i] << endl;
//	}
//	//cout << dp.size()-1;
//	return 0;
//}

//
//
//#include<iostream>
//#include<vector>
//#include <queue>
//using namespace std;
//int dis[1001]; // 최소이동간선수 값 넣는 배열 distance
//int visited[1001]; // 이미 체크했던거면 pass 하기 위해 있는 배열
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	// let us make BFS 
//	// 1번정점에서 각 정점으로 가는 최소 이동수
//	int n, m;
//	cin >> n >> m;
//	queue<int>q; // queue는 숫자들 넣는 배열
//	vector<int>v[1001]; // 
//	int x, y;
//	for (int i = 1; i <= m; i++) {
//		cin >> x >> y;
//		v[x].push_back(y);
//	}
//	q.push(1);
//	visited[1] = 1;
//	int fron;
//	while (!q.empty()) { // BFS에서 항상 등장하는 꼴.. queue에 아무것도 없기 전까지 계속 돌아!
//		fron = q.front();
//		q.pop();
//		for (int i = 0; i < v[fron].size(); i++) {
//			if (visited[v[fron][i]] == 0) {
//				visited[v[fron][i]] = 1;
//				q.push(v[fron][i]);
//				dis[v[fron][i]] = dis[fron] + 1;
//			}
//		}
//	}
//	for (int i = 2; i <= n; i++) {
//		cout << i << " : " << dis[i] << endl;
//	}
//
//	return 0;
//}





//
//#include <iostream>
//#include <vector>
//#include <queue>
//#include <algorithm>
//using namespace std;
//
//vector<int>People[101];
//int check[101];
//int mother, child;
//int n, m;
//
//int BFS() {
//	queue<int>q;
//	q.push(mother);
//	while (!q.empty()) {
//		int current = q.front();
//		cout << "current" << current << endl;
//		q.pop();
//		if (current == child) { return check[child]; }
//		else {
//			for (int i = 0; i < People[current].size(); i++) {
//				int next = People[current][i];
//				if (check[next] == 0) {
//				q.push(next);
//				check[next] = check[current] + 1;
//				}
//			}
//		}
//		
//	}
//	return -1;
//}
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	cin >> n;
//	cin >> mother >> child;
//	cin >> m;
//	int father, siblings;
//	for (int i = 0; i < m; i++) {
//		cin >> father >> siblings;
//		
//		People[father].push_back(siblings);
//		People[siblings].push_back(father);
//		for (auto &element : People[father]) {
//			cout << "father"<<element << endl;
//		}
//		for (auto&element : People[siblings]) {
//			cout << "siblings" << element << endl;
//		}
//	}
//	cout << BFS() << endl;
//
//
//	
//	return 0;
//}
//


#include <iostream>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;
int n, m;
char graph[201][201];
int dx[] = { -1, 1, 0, 0 };
int dy[] = { 0, 0, -1, 1 };
int bfs(int x, int y) {
	queue<pair<int, int> > q;
	q.push({ x, y });
	while (!q.empty()) {
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++) {
			int nx = x + dx[i];
			int ny = y + dy[i];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
			if (graph[nx][ny]== '0') continue;
			if (graph[nx][ny] == '1') {
				graph[nx][ny] = graph[x][y] + 1;
				q.push({ nx, ny });
			}
		}
	}
	return graph[n - 1][m - 1] - 48;
}

int main(void) {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);
	cin >> n >> m;
	/*for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> graph[i][j];
		}
	}*/
	char alpha;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> graph[i][j];
		}
	}
	cout << (int)bfs(0, 0);



		return 0;
}