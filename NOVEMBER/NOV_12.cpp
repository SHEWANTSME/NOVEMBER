//#include<iostream>
//#include <string>
//using namespace std;
//int cnt = 1;
//string s = "\"����Լ��� ������?\"";
//string ss = "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.";
//string sss = "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.";
//string ssss = "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"";
//void recur(int n) {
//	if (n == -1) return;
//	if (n == 0) {
//		if (cnt > 1) {
//			int i = 0;
//			while (i < 4 * (cnt - 1)) {
//				cout << "_";
//				i++;
//			}
//		}
//		cout << s << "\n";
//		if (cnt > 1) {
//			int i = 0;
//			while (i < 4 * (cnt - 1)) {
//				cout << "_";
//				i++;
//			}
//		}
//		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"" << "\n";
//		return;
//	}
//	if (cnt > 1) {
//		int i = 0;
//		while (i < 4 * (cnt-1)) {
//			cout << "_";
//			i++;
//		}		
//	}
//	cout << s << "\n";
//	if (cnt > 1) {
//		int i = 0;
//		while (i < 4 * (cnt-1)) {
//			cout << "_";
//			i++;
//		}
//	}
//	cout << ss << "\n";
//	if (cnt > 1) {
//		int i = 0;
//		while (i < 4 * (cnt-1)) {
//			cout << "_";
//			i++;
//		}
//	}
//	cout << sss << "\n";
//	if (cnt > 1) {
//		int i = 0;
//		while (i < 4 * (cnt-1)) {
//			cout << "_";
//			i++;
//		}
//	}
//	cout << ssss << "\n";
//	cnt++;
//	recur(n - 1); 
//	if (cnt > 1) {
//		int i = 0;
//		while (i < 4 * (cnt - 1)) {
//			cout << "_";
//			i++;
//		}
//	}
//	cnt--;
//	cout << "��� �亯�Ͽ���." << "\n";
//}
//
//
//
//
//
//
//int main() {
//	int n; cin >> n;
//	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������." << "\n";
//	recur(n);
//	cout << "��� �亯�Ͽ���." << "\n";
//	return 0;
//}

//#include <iostream>
//int arr[246912];
//int cnt = 0;
//using namespace std;
//
//void findsosu(int n) {
//	if (n == 1) { cout << 1 << endl; exit(0); }
//	for (int i = 2; i <= n; i++) {
//		for (int j = 2 * i; j <= n; j += i) {
//			if (arr[j] == 0) arr[j] = 1;
//		}
//	}
//	/*for (int i = 2; i < n; i++) {
//		if (arr[i] == 0) {
//			ans[cnt] = i;
//			cnt++;
//		}
//	}*/
//	for (int i = n/2+1; i <= n; i++) {
//		if (arr[i] == 0) cnt++;
//
//	}
//	cout << cnt << endl;
//	cnt = 0;
//}
//
//
//int main() {
//	int n=1;
//	while (n) {
//		cin >> n;
//		if (n) {
//			findsosu(2 * n);
//		}
//	}
//	
//
//	return 0;
//}
//#include <iostream>
//#include <vector>
//#include <cmath>
//#define PI 3.141592
//using namespace std;
//double Original(int n) {
//	
//	return (PI)*(n)*(n);
//
//}
//double Taxi(int n) {
//	return 2 * n*n;
//
//}
//
//int main() {
//
//	int n; cin >> n;
//	cout << fixed;
//	cout.precision(6);
//	cout << Original(n) << endl;
//	cout << Taxi(n) << endl;
//	return 0;
//}
//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//
//int main() {
//
//	while (1) {
//		int a, b, c;
//		cin >> a >> b >> c;
//		if (a == 0 && b == 0 && c == 0) {
//			break;
//		}
//		int aa = a * a;
//		int bb = b * b;
//		int cc = c * c;
//		if (cc > aa && cc > bb) {
//			if (((a*a + b * b) == c * c) && a != 0 && b != 0 && c != 0) cout << "right" << endl;
//			else cout << "wrong" << endl;
//		}
//		if (bb > aa && bb > cc) {
//			if (((a*a + c * c) == b *b) && a != 0 && b != 0 && c != 0) cout << "right" << endl;
//			else cout << "wrong" << endl;
//		}
//		if (aa > cc && aa > bb) {
//			if (((b*b + c * c) == a * a) && a != 0 && b != 0 && c != 0) cout << "right" << endl;
//			else cout << "wrong" << endl;
//		}
//		//else cout << "wrong" << endl;
//		
//	}
//
//	return 0;
//}

//#include <iostream>
//#include <vector>
//#include <cmath>
//using namespace std;
//int arrx[4];
//int arry[4];
//int newx = -1;
//int newy = -1;
//int findx() {
//	for (int i = 1; i < 3; i++) {
//		if (arrx[i] == arrx[0]) {
//			newx = arrx[i];
//		}
//	}
//	if (newx == -1)arrx[3] = arrx[0];
//	if (newx != -1) {
//		for (int i = 1; i < 3; i++) {
//			if (arrx[i] != arrx[0]) arrx[3] = arrx[i];
//		}
//	}
//	return arrx[3];
//}
//int findy(){
//	for (int i = 1; i < 3; i++) {
//		if (arry[i] == arry[0]) {
//			newy = arry[i];
//		}
//	}
//	if (newy == -1)arry[3] = arry[0];
//	if (newy != -1) {
//		for (int i = 1; i < 3; i++) {
//			if (arry[i] != arry[0]) arry[3] = arry[i];
//		}
//	}
//	return arry[3];
//}
//int main() {
//	int cnt = 4;
//	int cntx = 1, cnty = 1;
//	int i = 0;
//	while (cnt > 1) {
//		cin >> arrx[i] >> arry[i];
//		cnt--;
//		i++;
//	}		
//	cout << findx() <<" " << findy() << endl;
//	
//
//	return 0;
//} ���� �ƴ� �� ��ü i++�� ��Ծ 30���� �����°ž�? ����̾�?

//#include<iostream>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int main() {
//
//	int n; cin >> n;
//	int ss = 666;
//	for (int i = 0; i < n; i++) {
//		if (i == n - 1) break;
//		while (1) {
//			ss++;
//			string s = to_string(ss);
//			if (s.find("666", 0, 3) != -1) break;
//		}
//	}
//
//	cout << ss << endl;
//	return 0;
//}
/*STD::STRING
STRING::FIND(CONST STRING& ã�� ���ڿ�, SIZE_T ã�� ��ġ)
�ش� string ��ü���� ù��° ���ڷ� ������ ���ڿ��� ��ġ�� �˻��Ͽ�
 size_t�� �����Ѵ�.
 string ��� char�迭�� �迭 ����(3��° ����)�� �Բ� �־��� �� �ְ�,
 �η� ������ char�迭�� �־��� �� �ִ�.
 ���� single character�� ���ڷ� �� �� �ִ�. 
�� ��� ��� �ι�° ���ڷ� �˻��� ���� index�� �Ѱ��� �� �ִ�.
 ã�� ������ ��� �Ʒ��� string::npos�� �����Ѵ�.

STRING::NPOS = -1
��ġ�� -1�� ������.
 ������ ���� �ٿ� ���� �˻� ������ ������ ���ϱ⵵ ������ 
npos ��ü�� ���Ǵ� size_t �ڷ����� ���� ū ���� ��Ÿ����.
 -1�� ���� size_t�� unsigned �������̱� 
������ signed�� �� -1�̾�� unsigned���� ���� ū �� 
(1111��.1111 (2))�� ���� �����̴�.*/

#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
using namespace std;


void quicksort(int  *data, int start, int end) {
	if (start >= end)return; // ���Ұ� 1���� ���
	int pivot = start; // 1����  = �ǹ�
	int i = start + 1;
	int j = end;
	while (i <= j) {
		while (data[i] <= data[pivot]) i++; // �ǹ����� ū�������� ����
		while (data[j] >= data[pivot] && j > start) j--; // �ǹ����� ������ ������ ����
		if (i > j) swap(data[j], data[pivot]);
		else swap(data[j], data[i]);
	}
	quicksort(data, start, j - 1);
	quicksort(data, j + 1, end);
}
bool compare(pair<int, string> p1, pair<int, string> p2) {
	return p1.first < p2.first;
}
int main() {
	int n; cin >> n;
	cin.ignore(true);
	vector<string>vec(n);
	vec.reserve(n);
	vector<int>num(n);
	num.reserve(n);
	vector<pair<int, string>>p(n);
	p.reserve(n);
	string s;
	int k;
	for (int i = 0; i < n; i++) {
		getline(cin, s);
		num[i] = stoi(s);
		vec[i] = s;
		for (int j = 0; j < s.length(); j++) {
			if (vec[i][j] == ' ')  k = j;
		}
		vec[i] = s.substr(k+1);
	//	vec[i] = s;
		p[i] = { num[i],vec[i] };
		
	}
	/*for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n-1-i; j++) {
			if (p[j].first > p[j + 1].first) { 
				swap(p[j].first, p[j + 1].first);
				swap(p[j].second, p[j + 1].second);
			}
		}
	}*/

	//quicksort(, 0, n);

	/*for (int i = 0; i < n; i++) {
		num[i] = stoi(vec[i]);
		for (int j = 0; j < vec[i].length(); j++) {
			if (vec[i][j] == ' ') int k = j;
		}
		vec.substr(k + 1);
		p[i] = { num[i],vec[i] };
	}*/
	//sort(num.begin(), num.end());
	//sort(vec.begin(), vec.end());
	pair<int, string>y;
	
	stable_sort(p.begin(), p.end(),compare);
	//sort(num.begin(), num.end());
	for (int i = 0; i < n; i++) {
		//p[i] = { num[i],vec[i] };
		cout << p[i].first << " " << p[i].second<< endl;
		//cout << num[i]<< vec[i]<< endl;
	}
	return 0;
}