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
	int right = already[n-1]; // �̰� ��¥ �߿��ϳ�,, 
	//�ּҰ����� �ϸ� already[0] = 1�̸� ���ظ԰ŵ�
	//right�� �ִ밪���� �ؾ� ��� ��츦 ���� �� �ְڳ�
	int ans=1;
	while (left <= right) { // ���Ƶ� ������ ������ �Ǿ�� �ϴϱ�
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
		}// �� �κе� �߿��ѵ�, cnt�� key�� ���Ƶ� �ϴ� left�� mid+1�� ��
		// �� ���� ���Ƶ� �ϴ� left�� mid���� 1�� Ŀ���µ� �� ���Ŀ� left,mid,right
		//�� ����� �ϴ� ġ���ΰ� cnt=key�϶��� ���� ū ���� mid �� ���� �����°Ŵϱ�
		// ���� �� ���� ���̸� ����� �� �ִ°���!
		/*else {
			while (cnt == key) {
				mid++;
				cnt = cnt + (already[newi] / mid);
			}
			cout << mid << endl;
			return 0;
		}*/
		//if (vec[mid] == key) { cout << mid + 1 << endl; exit(0); }// ���� �ε����� ����ϴ°� ��ǥ�ϱ�
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
r=mid�� ����Ѵٸ�, l==r�� ��Ȳ���� mid ���� r�� ���� ���� �����ϴ�
�׶� value<n�̶�� r=mid�� �ǰ�, 
l==r�̴� mid�� ����ϰ�, r=mid�� �ǰ� ... 
���ѷ����� ������ �˴ϴ�
--------------------------------------------------------------------
�ƴ� �� right�� �ּҰ��� �ƴϰ� �ִ뿩����??

--> �ð��� �پ��� �� ���ϴ� ��� �ּڰ��� ����� Ŭ �����̰� 
�׸����� �ּڰ��� �ִ��� �ݾ��̳� �Ǵ��� ������ �� �� �� �� ���Դϴ�. 
�Դٰ� �ð� ������ ��ü ������ �� ���� ���� �ɸ� ���� �������� �ϴ� 
�ּڰ��� ���� ���̽��� �ϳ��� �ִٸ� ���������� �˴ϴ�.
Ư�� ���̽������� �ð��� �پ��� ���� 
������ ����ϴ� ���� ���� �ƹ��� ������ ���� ���ϰ�,
�־��� ��쿡 ���� ���� �ؾ� �ð��� �پ��ϴ�.






*/
