// 백준 2470번 두용액
/*
그냥 하던대로 하면 되지만, 그냥 left,right에 관한 변수를
하나 더 만들어서 걔네들로 재 복사 한다음
개네들의 합이 작으면 출력하면 됨
어렵게 map, set안써도 됨. 
*/

//#include <iostream>
//#include <algorithm>
//#include <map>
//using namespace std;
//long long  arr[100000];
//long long  save[100000];
//map<long long , long long>m;
//int main() {
//	int n; cin >> n;
//	long long liquid;
//	for (int i = 0; i < n; i++) {
//		cin >> liquid;
//		arr[i] = liquid;
//	}
//	sort(arr, arr + n);
//
//	if (arr[0] > 0) {
//		cout << arr[0] << " " << arr[1];
//		exit(0);
//	}
//	if (arr[n - 1] < 0) {
//		cout << arr[n - 2] << " " << arr[n - 1];
//		exit(0);
//	}
//	long long left = 0;
//	long long right = n - 1;
//	long long sum = 0;
//	long long min = 2147000000;
//	long long releft = 0;
//	long long reright = 0;
//	while (left < right) {
//		sum = arr[left] + arr[right];
//		if (abs(sum) < min) {
//			min = abs(sum);
//			releft = left;
//			reright = right;
//		}
//		if (sum > 0) right = right - 1;
//		else if (sum == 0) break;
//		else left = left + 1;
//	}
//	cout << arr[releft] << " " << arr[reright];
//	return 0;
//}

// 백준 1644 소수 연속합

#include <iostream>
#include <algorithm>
int arr[4000001];
int newarr[4000001];
int cnt = 0;
using namespace std;
void findsosu(int n) {
	for (int i = 2; i <= n; i++) {
		for (int j = 2 * i; j <= n; j += i) {
			if (arr[j] == 0) arr[j] = 1;
		}
		if (arr[i] == 0) cout << i << endl;
	}
}

void findsosu2(int n) {
	int i;
	for (i = 2; i <= n; i++) {
		arr[i] = i;
		if (i > 2 && i % 2 == 0) arr[i] = 0;
		if (i>3&&i % 3 == 0) arr[i] = 0;
		if (n >= 5) {
			if (i > 5 && i % 5 == 0) arr[i] = 0;
		}
		if (n >= 7) {
			if (i > 7 && i % 7 == 0) arr[i] = 0;
		}
		if (n >= 11) {
			if (i > 11 && i % 11 == 0) arr[i] = 0;
		}
	}

	
		for (int i = 2; i <= n; i++) {
			if (arr[i] != 0) {
				cout << arr[i] << endl;
			}
	}

}
void findsosu3(int n) {
	for (int i = 2; i <=n/2; i++) {
		arr[i] = i;
	}
	for (int i = 2; i <= (int)sqrt(n); i++) {
		if (arr[i] == 0) continue;
		for (int j = 2 * i; j <= n/2; j = j + i) {
			arr[j] = 0;
		}
	}
	for (int i = 2; i <= n/2; i++) {
		if (arr[i] != 0) { 
			//cout << arr[i] << endl; 
			newarr[cnt] = arr[i];
			cnt++;
		}
	}
	int left = 0;
	int right = 1;
	int newcnt = newarr[left] + newarr[right];
	right++;
	int ans = 0;
	bool check = false;
	while (left < right&& right<cnt) {

		if (newcnt  < n) {
			newcnt += newarr[right];
			right++;
		}
		else if (newcnt >= n) {
			left++;
			right = left + 1;
			if (newcnt == n) {
				ans++;
				check = true;
				//max = std::max(ans, max);
			}
			newcnt = newarr[left] + newarr[right];
			right++;
		}
	}
	if (check == true) {
		cout << ans + 1 << endl;
	}
	if(check==false){
		cout << ans << endl;
	}
	/*
	소수는 n의 배수가 아니어야 한다.

입력받은 수를 입력받은 수보다 작은 수 들로 나누어서 떨어지면 소수가 아니다.

그러나 모두 나누어볼 필요없이, 루트 n 까지만 나누어서 떨어지면 소수가 아니다.

	*/
}
int main() {

	int n; cin >> n;
	if (n == 1) cout << 0;
	else if (n == 2) cout << 1;
	else if (n == 3) cout << 1;
	else findsosu3(n);
	

	return 0;
}


/*

ㅈㄴ 무식한 방법이지만 풀렸다... ㅅㅂ

아니 개빡치는게 그 뭐냐 for문을 반씩돌려도 되겠는데? 했는데

그러면 ㅈㄴ 큰 소수들을 판별을 못하는거,,

그래서 n이 애초에 소수면 ans+1 을 하고

n이 소수가 아니면 ans만 찍는 형식으로 해봤는데


ㅋㅋㅋㅋㅋㅋ 정답입니다!

기분좋지만 너무 쌉 노가다로 풀어서 좀 별로임

다른사람들 풀이 살펴봐야겠당



*/