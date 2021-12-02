//#include<iostream>
//#include <vector> // DP 연습문제 1번 개미전사
//int arr[101];
//int dp[101];
//using namespace std;
//int main() {
//	int n; cin >> n;
//	for (int i = 1; i <= n; i++) {
//		cin >> arr[i];
//	}
//	dp[1] = arr[1];
//	dp[2] = arr[2];
//	dp[3] = (dp[1] > dp[2]) ? dp[1] : dp[2];
//	if (n == 3) { cout << dp[3] << endl; exit(0); }
//	for (int i = 4; i <= n; i++) {
//		dp[i] = (arr[i] + dp[i - 2] > dp[i - 1]) ?arr[i] + dp[i - 2] : dp[i - 1];
//	//	dp[i] = arr[i] + dp[i - 2];
//	}
//	cout << dp[n] << endl;
//
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int main() { // 설탕배달문제 2839번
//	int n; cin >> n;
//	int k;
//	int cnt = 0;
//	for (int i = 1; i < 5000; i++) {
//		if (cnt == 1 && (n < i * 3)) { cout << -1 << endl; exit(0); }
//		if (n >= i * 3 && n <= 5 * i) {
//			int floor = ((5 * i) - (3 * i)) / 2;
//			if (floor % 2 == 0 && n % 2 == 0) {
//				cout << floor << endl; exit(0);
//			}
//			if (floor % 2 != 0 && n % 2 != 0) {
//				cout << floor << endl; exit(0);
//		    }
//		
//			if((floor%2!=0 && n%2==0) || (floor % 2 == 0 && n % 2 != 0)) {
//				cnt++;
//				continue;
//				
//			}
//		}
//	}
//
//	return 0;
//}

//#include<iostream>
//#include <algorithm>
//using namespace std;
//int to_1[30001];
//int to_1_1[30001];
//int main() {// 1로 만들기,,
//	int n; cin >> n;
////	to_1[1] = 1;
//	for (int i = 2; i <= n; i++) {
//		to_1[i] = to_1[i - 1]+1;
//		if (i % 2 == 0)  to_1[i] = std::min(to_1[i], to_1[i / 2] + 1); 
//		if (i % 3 == 0)  to_1[i] = std::min(to_1[i], to_1[i / 3] + 1); 
//
//	//	if (i % 5 == 0) to_1[i] = std::min(to_1[i], to_1[i / 5]+1);
//	}
//	cout << to_1[n] << endl;
//	while (n != 0) {
//		if (n == 1) {
//			cout << n << " ";
//			exit(0);
//		}
//		cout << n << " "; 
//		if (to_1[n] == to_1[n - 1] + 1) {
//			n = n - 1; 
//		}
//		else if (n % 2 == 0 && to_1[n] == to_1[n / 2] + 1) {
//			n = n / 2;
//		} 
//		else if (n % 3 == 0 && to_1[n] == to_1[n / 3] + 1) {
//			n = n / 3; 
//		}
//	}
//	return 0;
//}

//#include <iostream>
//using namespace std;
//int dp[10001][5];
//int money[4];
//int number[] = { 1,5,10,25 };
//// memset은 배열 초기화 할때 주로 사용함 -> 0이랑 -1로 초기화 할때만 사용!
//// 그 외의 경우는 반복문으로 할것.
//int main() {
//	int x;
//	cin >>x;
//	for (int i = 0; i < 4; i++)cin >> money[i];
//	for (int i = 0; i <= 10000; i++) {
//		for (int j = 0; j < 5; j++) {
//			dp[i][j] = -1;
//		}
//	}// #include<cstring> memset(dp, -1, sizeof(dp)); 이러면 됨
//	for (int i = 0; i <= 4; i++) {
//		dp[0][i] = 0; // 
//	}
//	for (int i = 0; i <=x; i++) {
//		for (int j = 0; j < 4; j++) {
//			if (dp[i][j] == -1) dp[i][j] = 0;
//			if (i - number[j] < 0) continue;
//			if (dp[i - number[j]][4] > dp[i][4]) {
//				if()
//			}
//
//		}
//	}
//	
//	return 0;
//} ㅈ같은 동전문제
//
//#include<iostream>
//using namespace std;
//long long int cache[100];
//long long int fibo(long long n) {
//	if (n <= 2) return 1;
//	if (cache[n] != 0) return cache[n];
//	else {
//		cache[n] = fibo(n - 1) + fibo(n - 2);
//		return cache[n];
//	}
//}
//
//int main() {
//	long long  n, x; cin >> n;
//	/*if (fibo(n + 1) *fibo(n) < 1000000007) */
//		cout << fibo(n + 1)*fibo(n) << endl;
//	/*else {
//		cout << (fibo(n + 1) *fibo(n)) % 1000000007 << endl;
//	}*/
//	return 0;
//}

#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
const ll mod = 1e9 + 7; // 10의 9승  + 7
typedef vector<vector<ll>> MAT; // 이중 벡터 선언! 
//typedef vector<long long>v[2];// 어차피 안바뀌는 부분이면 이게 낫지 않나?// 근데 함수로 못씀 배열은,,
//v unit() { --> 안되는 짓
//	return{ {1,0},{0,1} };
//}
MAT unit() { // MAT 자체가 이중벡터니깐 행렬을 뜻하는거임!!
	return { {1,0},{0,1} }; // 일영영일  기본 행렬
}
MAT multiply(MAT a, MAT b) {// 행렬곱셈에 대한 벡터함수
	MAT ret(2, vector<ll>(2)); // 처음에 이 ret가 뭐냐 할수 있는데,, ret또한 함수임. 
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			for (int k = 0; k < 2; k++) {
				ret[i][j] = (ret[i][j] + a[i][k] * b[i][k]) % mod;
			}
		}
	}
}
MAT mpow(MAT x, ll what) {
	MAT ret = unit();
	while (what) {
		if (what & 1) ret = multiply(ret, x);
		x = multiply(x, x);
		what = what / 2;
	}
	return ret;
}
long long N;
int main() {
	cin >> N;
	MAT a = { {1,1},{1,0} };
	a = mpow(a, N);
	cout << a[0][0] * a[1][0] % mod;
	return 0;
}




