#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
int already[10000];
int main() {
	int n; cin >> n;
	int key; cin >> key;
	//vector<int>vec(n);
	for (int i = 0; i < n; i++) {
		//cin >> vec[i];
		cin >> already[i];
	}
	//sort(vec.begin(), vec.end());
	sort(already, already + n);
	int left = 1;
	int right = already[n-1]; // 이게 진짜 중요하네,, 
	//최소값으로 하면 already[0] = 1이면 못해먹거든
	//right을 최대값으로 해야 모든 경우를 살필 수 있겠넹
	int ans=1;
	while (left <= right) { // 같아도 루프가 진행은 되어야 하니까
		int mid = (left + right) / 2;
		int cnt = 0;
		for (int i = 0; i < n; i++) {
			cnt = cnt + (already[i] / mid);
			
		}
		if (cnt < key) {
			right = mid - 1;
		}
		else if (cnt >= key) {
			left = mid + 1;
			ans = mid;
		}// 이 부분도 중요한데, cnt랑 key가 같아도 일단 left가 mid+1이 됨
		// 그 뜻은 같아도 일단 left는 mid보다 1이 커지는데 그 이후에 left,mid,right
		//의 관계는 일단 치워두고 cnt=key일때의 가장 큰 값인 mid 만 따로 빼오는거니까
		// 가장 긴 선의 길이를 출력할 수 있는거임!
		/*else {
			while (cnt == key) {
				mid++;
				cnt = cnt + (already[newi] / mid);
			}
			cout << mid << endl;
			return 0;
		}*/
		//if (vec[mid] == key) { cout << mid + 1 << endl; exit(0); }// 값의 인덱스를 출력하는게 목표니까
		//else if (vec[mid] < key) {
		//	left = mid + 1;
		//}
		//else {
		//	right = mid - 1;
		//}
	}
	cout << ans << endl;
	return 0;
}




/*
r=mid를 사용한다면, l==r인 상황에서 mid 또한 r과 같은 값을 가집니다
그때 value<n이라면 r=mid가 되고, 
l==r이니 mid를 계산하고, r=mid가 되고 ... 
무한루프에 빠지게 됩니다
--------------------------------------------------------------------
아니 왜 right이 최소값이 아니고 최대여야함??

--> 시간이 줄어드는 건 원하는 대로 최솟값이 충분히 클 때뿐이고 
그마저도 최솟값이 최대의 반씩이나 되더라도 루프를 한 번 덜 돌 뿐입니다. 
게다가 시간 측정은 전체 데이터 중 가장 오래 걸린 것을 기준으로 하니 
최솟값이 작은 케이스가 하나라도 있다면 무용지물이 됩니다.
특정 케이스에서만 시간이 줄어드는 것은 
문제를 통과하는 데에 거의 아무런 도움이 되지 못하고,
최악의 경우에 빨리 돌게 해야 시간이 줄어듭니다.






*/
