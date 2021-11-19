//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	int n; cin >> n;
//	//vector<int> ans(n);
//	//vector<int> v(n);
//	int v[1001];
//	int ans[1001];
//	int realans[1001];
//	for (int i = 0; i < n; i++) {
//		cin >> v[i];
//	}
//	int left = 0;
//	int right = 1;
//
//	// 수열의 크기가 2 이상일때, 
//	if (n == 1) { cout << 1 << endl; exit(0); }
//	if (n == 2) {
//		if (v[left] < v[right]) {
//			cout << 2 << endl; exit(0);
//		}
//		else cout << 1 << endl; exit(0);
//	}
//
//
//	int t = 0;
//	int cnt = 1;
//	while (left <right&&t<n) {
//		
//		if (v[left] < v[right]) {
//			cnt++;
//			left = right;
//		    right++;
//			if (right > n - 1) {
//				/*left++;
//				right = left + 1;*/
//				ans[t] = cnt;
//				t++;
//				left = t;
//				right = left + 1;
//				cnt = 1;
//			}
//		}
//		if (v[left] >= v[right]) {
//			right++;
//			if (right > n - 1) {
//				/*left++;
//				right = left + 1;*/
//				ans[t] = cnt;
//				t++;
//				left = t;
//				right = left + 1;
//				cnt = 1;
//			}
//		}
//
//	}
//
//	int dab;
//	for (int t = 1; t < n; t++) {
//		dab = max(ans[t], ans[0]);
//		realans[t - 1] = dab;
//		
//	}
//	int realdab;
//	for (int i = 1; i < n; i++) {
//		realdab = max(realans[i], realans[0]);
//	}
//	cout << realdab << endl;
//	//cout << dab << endl;
//	return 0;
//}  ---> 백준 증가하는 가장 긴 부분수열 문제,, ㅅㅂ 왜 안되누


// 조용필 문제. 
//#include <iostream>
//#include <vector>
//using namespace std;
//// ans = 1 부터 다 더한 값 사이에 있지. 
//int main() {
//	int n; cin >> n;
//	int m; cin >> m;
//	int right = 0;
//	vector<int> v(n);
//	for (int i = 0; i < n; i++) {
//		cin >> v[i];
//		right += v[i];
//	}
//	int left = 1;
//	int res;
//	while (left <= right) {
//		int mid = (left + right) / 2;
//		int cnt = 1; int sum = 0;
//		for (int i = 0; i < n; i++) {
//			if (sum + v[i] > mid) {
//				cnt++;
//				sum = v[i];
//			}
//			else {
//				sum += v[i];
//			}
//		}
//		if (cnt <= m) {
//			res = mid;
//			right = mid - 1;
//		}
//		else {
//			left = mid + 1;
//		}
//	}
//	cout << res << endl;
//	return 0;
//}


#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include<unordered_map>
using namespace std;
int arr1[500000];
int arr2[500000];
int ans[500000];

int main() {





	long long n; cin >> n;
	for (long long i = 0; i < n; i++) {
		cin >> arr1[i];
	}
	sort(arr1, arr1 + n);
	long long m; cin >> m;
	multimap <int, int>map;
	for (long long i = 0; i < m; i++) {
		cin >> arr2[i];
		map.insert(make_pair(arr2[i], i));
	}
	sort(arr2, arr2 + m);
	for (long long i = 0; i < m; i++) {
		cout << arr2[i] << " " << map.find(arr2[i])->second << endl;

	}
	int point1 = 0;
	int point2 = 0;
	int cnt = 0;
	bool check = false;
	while (point1<n && point2<m) {
		if (arr1[point1] < arr2[point2]) point1++;
		else if (arr1[point1] == arr2[point2]) {

			cnt++;
			if (point1 == n - 1) {
				ans[map.find(arr2[point2])->second] = cnt;
			}
			point1++;
			check = true;
			
		}
		else if (arr1[point1] > arr2[point2] && check ==true) {
			ans[map.find(arr2[point2])->second] = cnt;
			point2++;
			cnt = 0;
			check = false;
		}
		else if (arr1[point1] > arr2[point2] && check == false) {
			cnt = 0;
			point2++;
		}
	}
	for (int i = 1; i < m; i++) {
		for (int j = i; j < m; j++) {

		}
		int no = 0;
		if(arr2[i] == arr2[no])
	}
	for (int i = 0; i < m; i++) {
		cout << ans[i] << " ";
	}

	return 0;
}