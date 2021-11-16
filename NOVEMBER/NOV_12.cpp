//#include<iostream>
//#include <string>
//using namespace std;
//int cnt = 1;
//string s = "\"재귀함수가 뭔가요?\"";
//string ss = "\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.";
//string sss = "마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.";
//string ssss = "그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"";
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
//		cout << "\"재귀함수는 자기 자신을 호출하는 함수라네\"" << "\n";
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
//	cout << "라고 답변하였지." << "\n";
//}
//
//
//
//
//
//
//int main() {
//	int n; cin >> n;
//	cout << "어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다." << "\n";
//	recur(n);
//	cout << "라고 답변하였지." << "\n";
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
//} ㅄ아 아니 왜 대체 i++을 까먹어서 30분을 버리는거야? 등신이야?

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
STRING::FIND(CONST STRING& 찾을 문자열, SIZE_T 찾을 위치)
해당 string 객체에서 첫번째 인자로 지정한 문자열의 위치를 검색하여
 size_t로 리턴한다.
 string 대신 char배열을 배열 길이(3번째 인자)와 함께 넣어줄 수 있고,
 널로 끝나는 char배열만 넣어줄 수 있다.
 또한 single character를 인자로 할 수 있다. 
이 모든 경우 두번째 인자로 검색의 시작 index를 넘겨줄 수 있다.
 찾지 못했을 경우 아래의 string::npos를 리턴한다.

STRING::NPOS = -1
수치상 -1을 가진다.
 위에서 말한 바와 같이 검색 실패의 뜻으로 통하기도 하지만 
npos 자체의 정의는 size_t 자료형의 가장 큰 값을 나타낸다.
 -1인 경우는 size_t가 unsigned 정수형이기 
때문에 signed일 때 -1이어야 unsigned에서 가장 큰 값 
(1111….1111 (2))을 갖기 때문이다.*/

#include <iostream>
#include <vector>
#include<string>
#include<algorithm>
using namespace std;


void quicksort(int  *data, int start, int end) {
	if (start >= end)return; // 원소가 1개인 경우
	int pivot = start; // 1원소  = 피벗
	int i = start + 1;
	int j = end;
	while (i <= j) {
		while (data[i] <= data[pivot]) i++; // 피벗보다 큰값만날때 까지
		while (data[j] >= data[pivot] && j > start) j--; // 피벗보다 작은값 만날때 까지
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