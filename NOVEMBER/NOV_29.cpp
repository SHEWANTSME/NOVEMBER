//#include <iostream>
//#include <vector>
//#include <algorithm>
//#define endl "\n"
//
//using namespace std;
//int arr[21][21];
////int dp[21][21];
//int main() {
//	int n; cin >> n;
//	for (int i = 0; i < n; i++) {
//		int n, m;
//		cin >> n >> m; // 3 4 -> 3x4 배열(0,0) ~ (2,3) 까지
//		for (int j = 0; j <n; j++) {
//			for (int k = 0; k <m; k++) {
//				cin >> arr[k][j];
//			}
//		}
//		for (int j = 1; j < n; j++) {
//			for (int k = 0; k < m; k++) {
//				int sideup, sidedown, left;
//				if (k == 0) sideup = 0;
//				else sideup = arr[j - 1][k - 1];
//				if (k == n - 1)sidedown = 0;
//				else sidedown = arr[j - 1][k + 1];
//				left = arr[j][k - 1];
//				arr[j][k] = arr[j][k] + std::max(sideup, max(sidedown, left));			
//			}
//		}
//		int ans = 0;
//		for (int i = 0; i < n; i++) {
//			ans = max(ans, arr[i][m - 1]);
//		}
//		cout << ans << endl;
//
//
//	}
//	
//	//dp[j][k] = arr[j][k] + max(dp[j][k - 1], max(dp[j][k], dp[j][k + 1]));
//	return 0;
//}


//#include <iostream>
//#include <algorithm>
//int arr[1001][1001];
//int dp[1001][1001];
//using namespace std;
//
//int main() {
//		int n, m,first;
//		cin >> n >> m;
//		for (int j = 0; j < n; j++) {
//			for (int k = 0; k < m; k++) {
//				cin >> arr[j][k];
//				dp[j][k] = arr[j][k];
//			}
//		}
//		
//		for (int i = 0; i < n; i++) {
//			for (int j = 0; j < m; j++) {
//				int downright, left, down;
//				if (j == 0) {
//					downright = 0; left = 0;
//				}
//				if (j) { 
//					left = dp[i ][j-1];
//					if (i) {
//						downright = dp[i - 1][j - 1];
//					}
//				}
//				if (i == 0) { downright = 0; down = 0; }
//				if (i) { 
//					down = dp[i-1][j]; 
//					if (j) {
//						downright = dp[i - 1][j - 1];
//					}
//				}
//				
//					dp[i][j] =  dp[i][j] + max(downright, max(left, down));
//					//arr[0][0] = first;
//			}
//		}
//
//		int ans = 0;
//		for (int i = 0; i < n; i++) {
//			ans = max(ans, dp[i][m - 1]);
//		}
//		cout << ans << endl;
//	return 0;
//} // dp테이블을 하나 더 만들어서 초기화를 시켜줘야 원하는 값이 나오네,,!!


////////#include <iostream>  ㅅㅂ 존나 괴랄하게 무지성 풀이가 되어버림
////////#include <vector>
////////using namespace std;
////////int money[1500001];
////////int time[1500001];
////////int ans[1500001];
////////
////////int main() {
////////	int n; cin >> n;
////////	vector<int>v[1500001];
////////	int x, y;
////////	for (int i = 1; i <= n; i++) {
////////		cin >> x >> y;
////////		time[i] = x;
////////		money[i] = y;
////////		if (time[i] + i <= n) {
////////			ans[i] = money[i];
////////		}
////////		else {
////////			ans[i] = 0;
////////		}
////////	}
////////	ans[1] = money[1];
////////	if (time[1] + 1 <= n) {
////////		ans[time[1] + 1] = money[1];
////////	}
////////	for (int i = 1; i <= n; i++) {
////////		if (i + time[i] <= n) {
////////			ans[time[i] + i] =  money[i];
////////			if (n == 1) {
////////				v[i].push_back(i);
////////				v[i].push_back(time[i]);
////////			}
////////			else {
////////				for (int j = 1; j < i; j++) {
////////					if (time[i] == v[j].back()) { v[j].push_back(time[i]); }
////////				}
////////				
////////			}
////////		}
////////	}
////////	(1,3)
////////		(2,5)
////////		(3) -> (1,3,1)
////////		for(int )
////////
////////
////////	return 0;
////////}
////////





//#include <iostream>
//#define endl "\n"
//using namespace std;
//int arr[1500020][2];
//int dp[1500020];
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int n;
//	cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i][0] >> arr[i][1];
//	}
//	int ans, mx=0;
//	for (int i = 1; i <= n+1; i++) {
//		 mx = (mx > dp[i]) ? mx : dp[i];
//		if (i + arr[i][0] <= n+1) {
//			dp[i + arr[i][0]] = (mx + arr[i][1] > dp[i + arr[i][0]]) ? mx + arr[i][1] : dp[i + arr[i][0]];
//		}
//	}
//	cout << mx << endl;
//	
//	return 0;
//}




#include <iostream>
#include <vector>
#define endl "\n"
using namespace std;
int dp[2001];
int main() {
	int n; cin >> n;
	int cnt = 0;
	int max = -1;
	vector<int>v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	if (v[0] > v[1]) {
		dp[1] = v[0] + v[1]; max = v[0];
	}
	else { dp[1] = (v[0] < v[1]) ? v[1] : v[0]; max = dp[1]; }
	for (int i = 2; i < n; i++) {
		if (v[i] <= dp[i - 1] && v[i] < max) { dp[i] = v[i] + dp[i - 1]; cnt++; }
		else if (v[i] <= dp[i - 1] && v[i] > max) { max = v[i]; dp[i] = dp[i - 1]; }
		else if (v[i] > dp[i - 1]) { dp[i] = v[i]; max = v[i];  cnt = 1; }
	}
	cout << n-cnt << endl;
	 // 이렇게 하면 왜 안되나면,, -> 3 12 7 13 9 5 1 같은 경우에서 dp가 13 9 로 시작하는 배열로
	//바뀌어야 하는데 저건 갱신을 못해줌. 13에 대한 새로운 배열이 존재하지 않기 때문이지.

	return 0;
}

