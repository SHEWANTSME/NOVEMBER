// 拷層 2470腰 砧遂衝
/*
益撹 馬揮企稽 馬檎 鞠走幻, 益撹 left,right拭 淫廃 痕呪研
馬蟹 希 幻級嬢辞 安革級稽 仙 差紫 廃陥製
鯵革級税 杯戚 拙生檎 窒径馬檎 喫
嬢憩惟 map, set照潤亀 喫. 
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

// 拷層 1644 社呪 尻紗杯

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
	社呪澗 n税 壕呪亜 焼艦嬢醤 廃陥.

脊径閤精 呪研 脊径閤精 呪左陥 拙精 呪 級稽 蟹刊嬢辞 恭嬢走檎 社呪亜 焼艦陥.

益君蟹 乞砧 蟹刊嬢瑳 琶推蒸戚, 欠闘 n 猿走幻 蟹刊嬢辞 恭嬢走檎 社呪亜 焼艦陥.

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

じい 巷縦廃 号狛戚走幻 熱携陥... さげ

焼艦 鯵冊帖澗惟 益 更劃 for庚聖 鋼梢宜形亀 鞠畏澗汽? 梅澗汽

益君檎 じい 笛 社呪級聖 毒紺聖 公馬澗暗,,

益掘辞 n戚 蕉段拭 社呪檎 ans+1 聖 馬壱

n戚 社呪亜 焼艦檎 ans幻 啄澗 莫縦生稽 背挫澗汽


せせせせせせ 舛岩脊艦陥!

奄歳疏走幻 格巷 峻 葛亜陥稽 熱嬢辞 岨 紺稽績

陥献紫寓級 熱戚 詞縄坐醤畏雁



*/