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
//// �׻� ���ο� ������Ʈ�� ������ �� ����� -> ������Ʈ �Ӽ� ���� -> ��Ŀ -> �ý��� -> �����ý����� �ܼ�(subsystem.console)�� �ٲ�!!
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
 // �������ϱ� ��Ŀ�������ε� Ǯ �� �ְ�, �ƴϸ� sort �� ������ �� �� �� �־�..

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, k = 1, cnt = 1;
	scanf_s("%d", &n);
	vector<int>v(n); // �迭�� �ΰ� ����. �ϳ��� ��� ��¿� �ϳ��� ���� ��¿�
	vector<int> v2(n); // �갡 �����¿�
	for (int i = 0; i < n; i++) {
		cin >> v[i]; // v�� ������¿� 
		v2[i] = 1; // v2�� �ϴ� 1�� �ʱ�ȭ ( 1����� �����ϱ�)
	}
	int t = 0;
	for (int i = 1; i < n; i++) { // i�� �ι�° ���Һ��� ������
		for (int j = 0; j < i; j++) {
			// j�� ó������ i ������ �̷��Ը� �ش� ����(i)�϶� ������ Ž�� ����
			
			if (v[i] > v[j]) {
				 v2[j]++;

			}// i��° ������ i������ �������� Ŭ������ j��° ��� 1�� �ö�
			if (v[i] < v[j]) {
				 v2[i]++;


			}// i��° ������ i ������ �������� ���������� i��° ��� 1�� �ö�

		}
	}
	for (int i = 0; i < n; i++) {
		//if (v2[i] == 3) cout << v[i] << endl;
		cout << v2[i] << " ";
	} 
	return 0;
}