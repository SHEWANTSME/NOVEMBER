//#include <algorithm>
//#include <iostream>
//using namespace std;
//// 교집합 투포인터 알고리즘
//
//int main() {
//	int n; cin >> n;
//	int x[30001];
//	for (int i = 0; i < n; i++) {
//		cin >> x[i];
//	}
//	sort(x, x + n);
//	int m; cin >> m;
//	int y[30001];
//	for (int i = 0; i < m; i++) {
//		cin >> y[i];
//	}
//	sort(y, y + m);
//	int pointx = 0;
//	int pointy = 0;
//	int cnt = 0;
//	// 2포인터는 두개의 배열이 정렬이 되어 있는 상태에서 사용할 수 있음.
//	int ans[30001];
//	while (pointx != n && pointy != m) {
//		//(x[pointx] < y[pointy]) ? pointx++ : pointy++;
//		//if (pointx == n - 1 && pointy == m - 1) break;
//		if (x[pointx] < y[pointy]) {
//			pointx++;
//		}
//		else if (x[pointx] > y[pointy]) pointy++;
//		else if (x[pointx] == y[pointy]) { cout<< x[pointx]<<" "; pointx++; pointy++; }
//		
//	}
//
//	/* // ORIGINAL 이중 FOR 사용방법 -> 위에서 sort는 빼주면 방법 같음
//	int pointx, pointy;
//	pointx = 0;
//	pointy = 0;
//	
//	int ans[30001];
//	int cnt = 0;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < m; j++) {
//			if (x[i] == y[j]) { ans[cnt] = x[i];  cnt++; }
//		}
//	}
//	sort(ans, ans + cnt );
//	for (int i = 0; i < cnt; i++) {
//		cout << ans[i] << " ";
//	}*/
//
//	//이중for문을 피하려고 2pointer를 쓰는건데 왜 이중for문을 적어뒀냐?
//	return 0;
//}


#include<iostream>
using namespace std;

int main() {

	int n; cin >> n;
	long long a = 2;

	long long x;
	
	for (int i = 0; i < n; i++) {
		cin >> x;
		long long cnt = 0;
		while (a <= x / 2) {
				long long jaritsu = a * (a + 1) / 2;
				if ((x - jaritsu) % a == 0 && x-jaritsu>-1) {
					cnt = cnt + 1;
					/*for (int i = 1; i < a; i++) {
									cout << ((x - jaritsu) / 2) + i << " + ";
								}cout << ((x - jaritsu) / 2) + a << " = "<< x << endl;*/
				}
				a++;
			}
		cout << "아니 왜 안돼??"<<cnt << endl;
		a = 2;

	}


	//
	//while (a<n/2) {
	//	int jaritsu = a * (a + 1) / 2;
	//	if ((n - jaritsu) % a == 0 && n-jaritsu>-1) {
	//		for (int i = 1; i < a; i++) {
	//			cout << ((n - jaritsu) / 2) + i << " + ";
	//		}cout << ((n - jaritsu) / 2) + a << " = "<< n << endl;
	//	}
	//	a++;
	//}
	


	return 0;
}