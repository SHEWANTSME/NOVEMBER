#include <iostream>
#include <vector>
using namespace std;
int sum(int n) {
	int ret = 0;
	for (int i = 1; i <= n; i++) {
		ret += i;
	}
	return ret;
}
int recursivesum(int n) {
	if (n == 1)return 1; // recursive case 에서 가장 중요한 base case(기저 사례)를 만들어 줘야 함
	else {
		return n + recursivesum(n - 1);
	}
}
void printPicked(vector<int>&delta) {
	for (int i = 0; i < delta.size(); i++) {
		if (delta[i] != 0) {
			cout << delta[i] << " ";
		}
		
	}

}
void pick(int n, vector<int>&picked, int toPick) {
	// n -> total 원소 수 , picked : 지금껏 고른 원소들 번호, topick -> 더 고를 원소 수
	if (toPick == 0) { printPicked(picked); return; }
	int smallest = picked.empty() ? 0 : picked.back() + 1;
	for (int next = smallest; next < n; next++) {
		picked.push_back(next);
		pick(n, picked, toPick - 1);
		picked.pop_back();
	}
}


int NCR(int n, int r) { // nCr = n-1Cr-1 + n-1Cr
	if (r == 0 || n == r) return 1;
	return NCR(n - 1, r - 1) + NCR(n - 1, r);
}// -> too many 호출,,,
int cache[1000][1000] = { 0,};
int NCR2(int n, int r) {
	cache[n][r] = -1;
	if ((n == r &&r!=1)|| r == 0) {
		cache[n][r] = 1;
		return 1;
	}
	if (r == 1) { 
		cache[n][1] = n;
		return n;
	}
	if (cache[n][r] != -1) return cache[n][r];
	return cache[n][r] = NCR2(n - 1, r - 1) + NCR2(n - 1, r);
}
int main() {
	/*cout << sum(5) << endl;
	cout << recursivesum(5) << endl;*/
	//vector<int>v(10);
	//pick(10, v, 5);
	//cout << NCR2(30, 20) << endl;
	
	//cout << NCR2(10, 2)%10007 << endl;
	int n; cin >> n;
	int r; cin >> r;
	int t = n;
	int arr[1001][1001];
	int ans1 = 1;
	int ans2 = 1;
	int ans3 = 0;
	if (r == 1) {
		if (n > 10007) { cout << n % 10007 << "\n"; exit(0); }
		else if (n < 10007) { cout << n << "\n"; exit(0); }
		else{ cout << 1 << "\n"; exit(0);}
	}
	if (r == 0) cout << 1 << "\n";
	
	if (n < r) cout << 0 << "\n";
	else {
		for (int i = 1; i <= n; i++) arr[i][i] = 1;
		for (int i = 1; i <= n; i++) arr[1][i] = i;
	}
	while (1) {
		if (r <= (n / 2)) {
			for (int i = 0; i < r; i++) {
				ans1 = ans1 * (t - i);
				ans2 = ans2 * (r - i);
			
				
			}
			
			if ((ans1 / ans2) > 10007) { cout << (ans1 / ans2) % 10007 << "\n"; break; }
			else if ((ans1 / ans2) < 10007) { cout << ans1 / ans2 << "\n"; break; }
			else { cout << 1 << "\n"; break; }
		}
		else if (r > (n / 2)) {
			r = n - r;
		}
	}
	
	
	return 0;
}