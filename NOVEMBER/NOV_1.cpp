//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	int cnt1=0, cnt2=0;
//	for (int i = 2; i <= n; i++) {
//		int temp = i;
//		int j = 2;
//		while (1) {
//			if (temp%j == 0) {
//				if (j == 2) cnt1++;
//				else if (j == 5) cnt2++;
//				temp = temp / j;
//			}
//			else j++;
//			if (temp == 1)break; 
//		}
//	}
//	printf("%d\n", (int)std::min(cnt1, cnt2));
//
//	cout << min(cnt1, cnt2) << endl;
//
//
//	return 0;
//}
//// 항상 새로운 프로젝트를 생성할 때 디버그 -> 프로젝트 속성 들어가서 -> 링커 -> 시스템 -> 하위시스템을 콘솔(subsystem.console)로 바꿔!!
//
//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//int main() {
//	int n;
//	cin >> n;
//	int cnt = 0;
//	for (int i = 3; i < n + 1; i++) {
//		int tmp = i;
//		while (tmp > 0) {
//			int digit = tmp % 10;
//			if (digit == 3) cnt++;
//			tmp = tmp / 10;
//		}
//
//	}
//
//	cout << cnt << endl;
//}
#include<iostream>
#include <string>
#include <vector>
#include <queue>
using namespace std;
 // 석차구하기 매커니즘으로도 풀 수 있고, 아니면 sort 한 다음에 할 수 도 있엄..

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, k = 1, cnt = 1;
	scanf_s("%d", &n);
	vector<int>v(n); // 배열을 두개 만듬. 하나는 등수 출력용 하나는 점수 담는용
	vector<int> v2(n); // 얘가 등수출력용
	for (int i = 0; i < n; i++) {
		cin >> v[i]; // v에 점수담는용 
		v2[i] = 1; // v2는 일단 1로 초기화 ( 1등부터 있으니까)
	}
	int t = 0;
	for (int i = 1; i < n; i++) { // i로 두번째 원소부터 끝까지
		for (int j = 0; j < i; j++) {
			// j로 처음부터 i 전까지 이렇게면 해당 지점(i)일때 모든원소 탐색 ㄱㄴ
			
			if (v[i] > v[j]) {
				 v2[j]++;

			}// i번째 점수가 i이전의 점수보다 클때마다 j번째 등수 1씩 올라감
			if (v[i] < v[j]) {
				 v2[i]++;


			}// i번째 점수가 i 이전의 점수보다 작을때마다 i번째 등수 1씩 올라감

		}
	}
	for (int i = 0; i < n; i++) {
		//if (v2[i] == 3) cout << v[i] << endl;
		cout << v2[i] << " ";
	} 
	return 0;
}