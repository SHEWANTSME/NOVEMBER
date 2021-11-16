#include<iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <queue>
using namespace std;
//int main() {
//	int n; cin >> n;
//	vector<vector<int>>arr(n, vector<string>(2)); // 2차원 동적 배열 할당
//	for (int i = 0; i < n; i++) {
//		cin >> arr[i][1];
//		cin >> arr[i][0];
//	}
//	sort(arr.begin(), arr.end());
//	for (int i = 0; i < arr.size(); i++) {
//		cout << arr[i][1] << " " << arr[i][0] << "\n";
//	}
//	return 0;
//}
//int arrx[200001];
//int arry[200001];
//bool compare1(pair<int, int>x, pair<int, int>y) {
//	return x.second < y.second;
//}
//bool compare1(pair<int, int>x, pair<int, int>y) {
//	return x.first < y.first;
//}

//int main() {
//	int n; cin >> n;
//	vector<string>s(n);
//	vector<int>num(n);
//	vector < pair<int, string>>p(n);
//	for (int i = 0; i < n; i++) {
//		cin >> num[i];
//		cin >> s[i];
//		//p[i] = { num[i],s[i] };
//		p.push_back(make_pair(num[i], s[i]));
//	}
//	//for (int i = 0; i < n; i++) {
//		sort(p[0].first, p[n - 1].first);
//	
//	//sort(num.begin(), num.end());
//	for (int i = 0; i < n; i++) {
//		cout << p[i].first << " " << p[i].second << "\n";
//	}
//	return 0;
//}
//int ans = 0;
//int memo[15][15];
//int FindPeople(int a, int b) {
//	if (a == 0) return memo[0][b];
//	if (a!=0 && b == 1) return memo[a][1];
//	else {
//		for (int i = 1; i <= b; i++) {
//			memo[a - 1][i] = FindPeople(a - 1, i);
//			//return memo[a - 1][i];
//		}
//		return memo[a-1][b];
//	}
//	
//
//}
//int main() {
//	int n; cin >> n;
//	int a, b;
//	for (int i = 1; i <= 14; i++) {
//		memo[0][i] = i;
//		memo[i][1] = 1;
//	}
//	for (int i = 0; i < n; i++) {
//		cin >> a; // a 층에
//		cin >> b; // b 호
//		FindPeople(a, b);
//		for (int j = 1; j <= b; j++) {
//			ans += memo[a - 1][j];
//		}
//		cout << ans << endl;
//		//cout <<FindPeople(a, b)<<"\n";
//	}
//
//
//	return 0;
//}


//void recur(int n) {
//	if (n/2 == 1) {
//		cout << n / 2;
//		cout << n % 2;
//		return;
//	}	
//
//	recur(n / 2);
//	cout << n % 2;
//
//
//}
//void recur2(int n) {
//	if (n == 0) return;
//	recur(n / 2);
//	cout << n % 2;
//}
//
//int main() {
//	int n; cin >> n;
//	recur(n);
//	recur2(n);
//	
//}

//int com[100];
//vector<int>com2[101];
//vector<pair<vector<int>, vector<int>>>p;
//int x, y;
//int cnt = 0;
//int BFS(int n) {
//	queue<int> q;
//	q.push(n);
//	com[n] = true;
//	while (!q.empty()) {
//		// queue에 값이 있을경우 계속 반복 실행
//		// queue에 값이 있다 -> 아직 방문 안한 놈이 있다.
//		int delta = q.front();
//		q.pop();
//		//cout << ++cnt << endl;
//		++cnt;
//		for (int i = 0; i < com2[delta].size(); i++) {
//			int meta = com2[delta][i];
//			if (!com[meta]) {
//				q.push(meta);
//				com[meta] = true;
//			}
//		}
//	}
//	return cnt;
//
//}
//int main() {
//	int n; cin >> n; // n은 100 이하 컴퓨터의 수 차례로
//	int m; cin >> m; // 연결된 쌍 수
//	for (int i = 0; i < m; i++) {
//		cin >> x >> y;
//		//com1[i].push_back(x);
//		com2[x].push_back(y);
//		com2[y].push_back(x);
//	}
//	int ans = BFS(1);
//
//	cout << ans -1<< endl;
//	return 0;
//}



//////////#include <iostream>
//////////#include <algorithm>
//////////#include <cmath>
//////////using namespace std;
//////////int arr[500000];
//////////int MV[4001];
//////////int main() {
//////////	cin.tie(NULL);
//////////	cout.tie(NULL);
//////////	ios_base::sync_with_stdio(false);
//////////	int n; cin >> n;
//////////
//////////	for (int i = 0; i < n; i++) {
//////////		cin >> arr[i];
//////////		MV[arr[i]]++;
//////////	}
//////////
//////////	std::sort(arr, arr + n);
//////////	
//////////	// 산술 평균
//////////	double ans = 0;
//////////	for (int i = 0; i < n; i++) {
//////////		ans = ans + arr[i];
//////////	}cout << round(ans / n) << endl;
//////////
//////////	// 중앙값
//////////	int mid = trunc(n / 2);
//////////	cout << arr[mid] << endl;
//////////
//////////
//////////	// 최빈값
//////////	int cnt = -1;
//////////	int delta[4001];
//////////	if (n == 1) cout << arr[0] << endl;
//////////	else {
//////////		for (int i = 0; i < n; i++) {
//////////			if (MV[arr[i]] > 1) {
//////////				cnt++;
//////////				std::pair<int, int>hello(MV[arr[i]], cnt);
//////////				delta[i] = hello.first;
//////////				if (hello.second == 1) cout << delta[i];
//////////
//////////			}
//////////		}
//////////	}
//////////	int a;
//////////	for (int i = 0; i < n; i++) {
//////////		if (MV[arr[i]] > 1) {
//////////			std::pair<int, int>hello(MV[arr[i]], cnt);
//////////			delta[i] = hello.first;
//////////			if (hello.second == 1) cout << delta[i];
//////////			cnt++;
//////////					
//////////		} 
//////////		else {
//////////			 a = arr[1];
//////////		
//////////		}
//////////	}
////////////	cout << a << endl;
//////////
//////////
//////////	//범위
//////////
//////////	cout << arr[n - 1] - arr[0] << endl;
//////////
//////////
//////////	return 0;
//////////}
#include <iostream>
#include <algorithm>
using namespace std;
int arr[100];
int arr2[100];
bool compare(int x, int y) {
	return x > y;
}
int main() {
	int n; cin >> n;
	int j,doc_num, rank,nn;
	for (int i = 0; i < n; i++) {
		cin >> doc_num >> rank;
		for (j = 0; j < doc_num; j++) {
			cin >> arr[j];
			arr2[j] = arr[j];
			if (j == rank) nn = arr[j];
		}
		sort(arr, arr + doc_num, compare);

		/*for (int i = 0; i < doc_num; i++) {
			cout << arr[i] << " ";
		}*/


		int kkk=0,kk,cnt=0;
		for (int k = 0; k < doc_num; k++) {
			if (arr[k] > nn) {
				cnt++;
				if (cnt >= rank + 1) {
					kkk = cnt;
				}
			}
			
			//if ((arr[k] != nn) ) cnt++;
			if (arr[k] == nn ) kk = k + 1-kkk;
			//if(arr[k] == n && rank ==0;)
		}
		/*for (int z = 0; z < doc_num; z++) {
			if (arr[z] == nn) kk = z + 1;
		}*/
		cout << kk << endl;
	}

	
	return 0;
}