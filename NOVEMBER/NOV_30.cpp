//// real answer 
//#include<iostream>
//#include <vector>
//#include <string>
//#define endl "\n"
//using namespace std;
//int dodig(int y) {
//
//}
//int makedig(int x, int y , vector<int>v) {
//	
//
//
//}
//void dig(int x,int y) {
//	int i = 0;
//	dodig(1);
//	for (int i = 0; i < x; i++) {
//
//	}
//}
//int main() {
//	int testcase;
//	cin >> testcase;
//	while (testcase) {
//		int x, y;
//		cin >> x >> y;
//		vector<int>v(x);
//		//
//		v[0] = 1;
//		int num = 0;
//		for (int i = 1; i < x; i++) {
//			if (v[i] < 10) {
//				v[i] = v[i - 1] * y;
//			}
//			else {
//				num = v[i];
//				string s = to_string(v[i]);
//				while (num >= 10) {
//					for (int j = 0; j < s.size(); j++) {
//						num = num + (s[j] - 48);
//					}
//					s = to_string(num);
//				}
//
//			}
//		}
//
//
//		dig(x,y);
//		testcase--;
//	}
//	return 0;
//}


#include <iostream>
#define endl "\n"
using namespace std;

int dp[128][128];
int blue = 0; 
int white = 0;
void solve(int y, int x, int size)
{
	int cnt = dp[y][x];
	for (int i = y; i < y + size; i++){
		for (int j = x; j < x + size; j++){
			if (cnt == 0 && dp[i][j] == 1)	cnt = 2;
			else if (cnt == 1 && dp[i][j] == 0) cnt = 2;
			if (cnt == 2){
				solve(y, x, size / 2);
				solve(y, x + size / 2, size / 2);
				solve(y + size / 2, x, size / 2);
				solve(y + size / 2, x + size / 2, size / 2);
				return;
			}
		}
	}
	if (cnt == 0) white++;
	else blue++;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> dp[i][j];
		}
	}		
	solve(0, 0, n);
	cout << white << endl;
	cout << blue << endl;
	return 0;
}
