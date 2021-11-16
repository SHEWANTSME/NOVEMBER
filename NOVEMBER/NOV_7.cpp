//#include <iostream>
//using namespace std;
//
//int main() {
//	int n,cnt = 0;
//	//bool alpha = true;
//	cin >> n;
//	int a = n / 10;
//	int b = n % 10;	
//	int new_num = b * 10 + (a + b)%10; cnt++;
//	while (1) {
//		a = new_num / 10;
//		b = new_num % 10;
//		new_num = b * 10 + (a + b)%10; 
//		cnt++;
//		if (new_num == n) break;
//	}
//	//if (n == 0) cout << alpha << endl;
//	//else {
//		cout << cnt << endl;
//	//}
//	
//	return 0;
//}
//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//	int a, b, c, d;
//	cin >> a >> b >> c;
//	d = a * b*c;
//	vector<int>v(10);
//	while (1) {
//		if (d / 10) {
//			v[d%10]++;
//			d /= 10;
//		}
//		else break;
//	}
//	v[d]++;
//	for (int i = 0; i <= 9; i++) {
//		cout << v[i] << endl;
//	}
//}
//
//#include <iostream>
//#include<string>
//using namespace std;
//int main() {
//	int n,cnt=0,k=1; cin >> n;
//	string s;
//	cin.ignore(true);
//	for (int i = 0; i < n; i++) {
//		getline(cin, s);
//		for (int j = 0; j < s.length(); j++) {
//			if (s[j] == 'O') {
//				cnt += k; k++;
//			}
//			else {
//				k = 1;
//			}
//		}
//		cout << cnt << endl;
//		cnt = 0; k = 1;
//	}
//	
//	return 0;
//}

//#include <iostream>
//
//using namespace std;
//int arr[1000] = { 0, };
//int main() {
//	int n; cin >> n;
//	double s,cnt =0.0, cnt2 = 0.0;
//	for (int i = 0; i < n; i++) {
//		cin >> s;
//		for (int j = 0; j < s; j++) {
//			cin >> arr[j];
//			cnt += arr[j];
//		}
//		for (int j = 0; j < s; j++) {
//			if (arr[j] > (cnt / s)) {
//				cnt2++;
//				arr[j] = 0;
//			}
//			else { arr[j] = 0; }
//		}
//		cout << fixed;
//		cout.precision(3);
//
//		double avg = cnt2 / s;
//		cout << avg *100 << "%" << endl;
//
//		cnt = 0; cnt2 = 0;
//	}
//
//
//
//	return 0;
//}
//#include<iostream>
//#include <string>
//using namespace std;
//
//int main() {
//	int n1, n2, n3; cin >> n1;
//	string s;
//	for (int i = 0; i < n1; i++) {
//		cin >> n2;
//		cin.ignore(true);
//		getline(cin, s);
//		for (int j = 0; j < s.length(); j++) {
//			n3 = n2;
//			while (n3 > 0) {
//				cout << s[j];
//				n3--;
//			}n3 = n2;
//		}
//		cout << "" << endl;
//	}
//
//	return 0;
//}
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int main() {
//	int mx = -1,cnt=0,ans;
//	string s;
//	getline(cin, s);
//	int ll = s.length();
//	vector<int>v(26);
//	//cout << (char)((int)s[0] +32) << endl;
//	for (int i = 0; i < ll; i++) {
//		if ((int)s[i] >= 65 && (int)s[i] <= 90) {
//			int idx = (int)s[i] - 65;
//			v[idx]++;
//		}
//		else if ((int)s[i] >= 97 && (int)s[i] <= 122) {
//			int idx = (int)s[i] - 97;
//			v[idx]++;
//		}
//	}
//	
//	for (int i = 0; i < 26; i++) {
//		if (v[i] > mx){
//			mx = v[i]; 
//			ans = i;
//		}
//	}
//	cout << ans << endl;
//	for (int i = 0; i < 26; i++) {
//		if (v[i] == mx) cnt++;
//	}
//	if (cnt > 1) cout << "?" << endl;
//	else {
//		cout << (char)(ans + 65) << endl;
//	}
//	return 0;
//}
//--> 이따도전! 생각이안남
//#include<iostream>
//#include<string>
//#include <stack>
//using namespace std;
//int main() {
//	int cnt = 0,a=0;
//	string s;
//	getline(cin, s);
//	stack<int> st;
//	int len = s.length();
//	for (int i = 0; i < len-1 ; i++) {
//		if (s[i] == 'l' && s[i + 1] == 'j') cnt++;
//	}
//	for (int i = 0; i < len - 1; i++) {
//		if (s[i] == 'n' && s[i + 1] == 'j') cnt++;
//	}for (int i = 0; i < len - 1; i++) {
//		if (s[i] == 'c' && s[i + 1] == '-') cnt++;
//	}for (int i = 0; i < len - 1; i++) {
//		if (s[i] == 'c' && s[i + 1] == '=') cnt++;
//	}for (int i = 0; i < len - 1; i++) {
//		if (s[i] == 'd' && s[i + 1] == '-') cnt++;
//	}for (int i = 0; i < len - 1; i++) {
//		if (s[i] == 's' && s[i + 1] == '=') cnt++;
//	}for (int i = 0; i < len - 1; i++) {
//		if (s[i] == 'z' && s[i + 1] == '=') {
//			if (i > 0 && s[i - 1] == 'd') { cnt = cnt + 2; continue; }
//			cnt++;
//		}
//	}	
//	cout << len-cnt << endl;
//	return 0;
//}

//#include<iostream>
//#include<string>
//#include <vector>
//using namespace std;
//int main() {
//	int cnt=0,n; cin >> n;
//	bool connected = true;
//	string s;
//	cin.ignore(true);
//	vector<int> alphabet(26);
//	for (int i = 0; i < n; i++) {
//		getline(cin, s);
//		alphabet[(int)s[0] - 97] = 1;
//		for (int j = 1; j < s.length(); j++) {
//			if (s[j - 1] != s[j]) {
//				if (alphabet[(int)s[j] - 97] > 0) { connected = 0; }
//				else { alphabet[(int)s[j] - 97]++; }
//			}
//			else alphabet[(int)s[j] - 97]++;
//		}
//
//		if (connected!=0) cnt++;
//		connected = true;
//		//cout << cnt << endl;
//		for (int i = 0; i < 26; i++) {
//			alphabet[i] = 0;
//		}
//		cout << cnt << endl;
//		/*for (int i = 0; i < 26; i++) {
//			cout <<alphabet[i] << endl;
//		}
//		for (int i = 0; i < 26; i++) {
//			 alphabet[i] = 0;
//		}
//*/
//
//	}
//
//
//	//cout << cnt << endl;
//	return 0;
//}
//
//#include <iostream>
//#include<algorithm>
//using namespace std;
//int main() {
//	long long int a, b, c;
//	cin >> a >> b >> c;
//	long long int i = 1, t1 = 1,t2=1;
//	if (b >= c) { cout << -1 << endl; 
//	exit(0);
//	}
//	int mx = std::max(b, c);
//	while (1) {
//		if (mx / t1 != 0)t1 *= 10;
//		else break;
//	}
//	//cout << t1 << endl; // mx보다 1자리수 더 크게 나옴
//	
//		while (1) {
//			if (a / t2 != 0) t2 *= 10;
//			else break;
//		}
//		cout << ((a / (t2 / t1) * 10))*(t2 / t1) / t1 * 10 + 1 << endl;
//
//	
//
//	//cout << t2 << endl;
//	//long long int new_a = a / (t2 / t2) * 10;
//	//cout << ((a / (t2 / t1) * 10))*(t2/t1)/t1*10+1<< endl;
//	/*while (1) {
//		if ((a / (t2 / t1) * 10) + b * (i) > c*i) i++;
//		else break;
//	}*/
//	//cout << i << endl;
//	//cout << (a / (t2 / t1) * 10) * i + 1 << endl;
//	//cout << a/(t2/t1) *10 << endl;
//	/*while (1) {
//		if (a + b * (i) > c*i) i++;
//		else break;
//	}
//	cout << i+1 << endl;*/
//
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int n,before,i=2; cin >> n;
//	before = 7;
//	if (n == 1) {
//		cout << 1 << endl; exit(0);
//	}
//	else if (n >= 2 && n <= 7) {
//		cout << 2 << endl; exit(0);
//	}
//	else {
//		while (1) {
//			if (n > before  && n <= 3 * i*(i + 1) + 1) {
//				cout << i + 1 << endl;
//				break;
//			}
//			else {
//				before = 3 * i*(i + 1) + 1;
//				i++;
//			}
//		}
//	}
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int testcase, height, width, cnt,roomnum=0;
//	cin >> testcase;
//	cin.ignore(true);
//	for (int i = 0; i < testcase; i++) {
//		cin >> height >> width >> cnt;
//		//cout  <<height <<" " <<width <<" " <<cnt;
//		if (cnt%height == 0) {
//			
//				
//					roomnum = (cnt / height) + height*100;
//			
//			
//		
//		}
//		else {
//			roomnum = (cnt%height) * 100 + (cnt / height) + 1;
//		}
//		cout << roomnum << endl;
//	}
//	return 0;
//}

/*
20
1 1 1
2                  -> 101
1 5 4
104
1 9 4
104
1 20 20
120
2 2 4
202
2 4 4
202
2 10 4
202
6 12 6
2                      -> 601
6 12 7
102
6 12 10
402
6 12 12
206                    -> 602
6 12 55
110
10 10 91
110
10 10 99
910
30 50 31
102
30 50 72
1203
99 99 1
101
99 99 99
2                    -> 9901
99 99 100
102
99 99 9800
9899




*/

//#include <iostream>
//#include <cmath>
//using namespace std;
//int main() {
//	int testcase, x1, y1, x2, y2, r1, r2; //radsq, pp, mm;
//	int lenxy, lenradadd, lenradsubt;
//	cin >> testcase;
//	for (int i = 0; i < testcase; i++) {
//		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
//		lenxy = std::pow((x1 - x2), 2) + std::pow((y1 - y2), 2);
//		lenxy = std::sqrt(lenxy);
//		//radsq = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
//		lenradadd = abs( r1 + r2);
//		lenradsubt = abs(r1 - r2);
//		//pp = (r1 + r2) * (r1 + r2);
//		//mm = (r1 - r2) * (r1 - r2);
//
//		if (lenxy == 0) {
//			if (lenradsubt == 0) cout << -1 << '\n';
//			else cout << 0<< '\n';
//		}
//		else if (lenxy == lenradadd|| lenxy == lenradsubt) cout << 1 << '\n';
//		else if (lenradsubt < lenxy && lenradadd > lenxy) cout << 2 << '\n';
//		else cout << 0 << '\n';
//	}
//}
/*#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;
	int comparey = std::min(y, h - y);
	int comparex = std::min(x, w - x);
	int finalcompare = std::min(comparey, comparex);
	cout << finalcompare << endl;

	return 0;
}*/
//#include<iostream>
//using namespace std;
//
//bool makestar(int x, int y) {
//
//		if (((x % 3) == 1) && ((y % 3) == 1)) return 1;
//		if (x == 0 || y == 0) return 0;
//		return makestar(x / 3, y / 3);
//	//	x = x / 3;
//		//y = y / 3;
//	
//
//	
//}
//
//int main() {
//	int n; cin >> n;
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (makestar(i, j)) cout << " ";
//			else cout << "*";
//		}
//		cout << endl;
//	}
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int memoi[100];
//int fact(int n) {
//	memoi[1] = 1;
//	memoi[2] = 2;
//	if (n == 1) {
//		 return 1;
//	}
//	else if (n == 2) {
//		 return memoi[2];
//	}
//	else {
//		memoi[n] = n * memoi[n - 1];
//		if (memoi[n] == 0) {
//			return n*fact(n - 1);
//		}
//		else {
//			return memoi[n];
//		}
//		
//	}
//}
//int main() {
//	int n; cin >> n;
//	
//	cout << fact(n) << endl;
//	
//
//	return 0;
//}
//#include<iostream>
//using namespace std;
//int memoi[100];
//int fib(int n) {
//	if (memoi[n] > 0) return memoi[n];
//	else if (n == 1 || n == 2) return memoi[n] = 1;
//	else return memoi[n] = fib(n - 2) + fib(n - 1);
//}
//int main() {
//	int n; cin >> n;
//	if (n == 0) cout << 0 << endl;
//	else {
//		cout << fib(n) << endl;
//
//	}
//	
//
//
//	return 0;
//}
//////#include <iostream>
//////#include <cmath>
//////using namespace std;
//////
//////
//////bool Hanoi(int from, int to, int n) // from번 기둥에서 to번 기둥으로 n개의 원반을 이동.
//////{
//////	if (n == 1)
//////	{
//////		printf("%d번 기둥에서 %d번 기둥으로 이동\n", from, to);
//////		return false;
//////	}
//////
//////	Hanoi(from, 6 - from - to, n - 1);
//////	printf("%d번 기둥에서 %d번 기둥으로 이동\n", from, to);
//////	Hanoi(6 - from - to, to, n - 1);
//////	return false;
//////}
//////
//////
//////int main() {
//////	
//////	int n; cin >> n;
//////	cout << pow(2, n) - 1 << endl;
//////	Hanoi(1, 3, n);
//////
//////	return 0;
//////}

//#include <iostream>
//#include <cmath>
//#include <string>
//#define fastio ios::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
//using namespace std;
//int Hanoi(int A, int B, int n) {
//	if (n == 1) { // 시작기둥에서 바로 파이널기둥 맨밑에꺼
//		cout << A << " " << B << "\n";
//		return 0;
//	}
//	Hanoi(A, 6 - A - B, n - 1); // 시작기둥에서 보조기둥으로 옮김 맨밑에꺼는 제외하고
//	cout << A << " " << B << "\n"; // 그 상태들을 출력하고
//	Hanoi(6 - A - B, B, n - 1); // 보조기둥에서 파이널 기둥으로 옮김
//	return 0;
//}
//
//
//int main() {
//
//	int n; cin >> n;
//
//	string s = to_string(pow(2, n) );
//	int c = s.find('.');
//	int len = s.length();
//	while (len!= c) {
//		s.pop_back();
//		len--;
//	}
//
//	s[s.length() - 1] -= '1';
//	cout << s << endl;
//	
//
//	//cout << pow(2, n) - 1 << "\n";
//	//Hanoi(1, 3, n);
//
//	return 0;
//}
//
//#include <iostream>
//#include <algorithm>
//#include <queue>
//#include <vector>
//using namespace std;
//int arr[10000];
//int ans[10000];
//int cs[1000];
//queue<int>q;
//void findsosu(int n) {
//	// n 이하의 소수들로 이루어진 값의 합을 리턴
//	arr[0] = 1; arr[1] = 1; int cnt = 0; int m = 0;
//	int an1, an2;
//	if (n == 4) {
//		cout << 2 << " " << 2 << "\n";
//		return;
//	}
//	vector <int>subt(n);
//	for (int i = 2; i <= n; i++) {
//		for (int j = 2 * i; j <= n; j += i) {
//			if (arr[j] == 0) arr[j] = 1;
//		}
//	}
//	for (int i = 2; i < n; i++) {
//		if (arr[i] == 0) {
//			ans[cnt] = i;
//			cnt++;
//		}
//	}
//	int min = 10000;
//	int k;
//	int a=0, b=0;
//	for (int j = 0; j < cnt; j++) {
//		for (k = 1; k < cnt; k++) {
//			if (ans[j] + ans[k] == n && ans[j] <= ans[k]) {
//			//	m++;
//
//			//	if (ans[k] - ans[j] < min) min = ans[k] - ans[j];
//			///*	q.push(j);
//			//	q.push(k);
//			//	subt[m] = std::abs(ans[j]-ans[k]);
//			//	m++;
//			//	min(subt[])*/
//			//	if()
//			//	cout << ans[j] << " " << ans[k] << endl;
//				 a = ans[j];
//				 b = ans[k];
//				
//			}
//
//		}
//		
//	}
//	cout << a << " " << b << endl;
//	// n 이 10일때  arr[4] arr[6] arr[8] arr[10] 
//	// arr[9] 
//}
//
//int main() {
//	int n,x; cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> x;
//		findsosu(x);
//	}
//
//
//
//
//	return 0;
//}
#include <iostream>
#include <string>
using namespace std;
void findtriplesix(int n) {
	int cnt = 1;
	int digitprev = 0;
	int digitother = 0;
	while (1) {
		if ((((digitprev % 10000) / 10) == 666) && (digitprev) % 10 != 6) {
			for (int i = 0; i < 1000; i++) {
				if (cnt == n) {
					cout << digitprev * 1000 + digitother;
					return;
				}
				digitother++;
				cnt++;
			}
			digitprev++;
		}
	
		else if (((digitprev % 1000) == 666) ){
			digitother=0;
			for (int i = 0; i < 1000; i++) {
				if (cnt == n) {
					cout << digitprev * 1000 + digitother;
					return;
				}
				digitother++;
				cnt++;
			}
			digitprev++;

		}
		else if (((digitprev % 10) == 6)) {
			digitother = 600;
			for (int i = 0; i < 10; i++) {
				if (cnt == n) {
					cout << digitprev * 1000 + digitother;
				}
				digitother;
				cnt++;
			}
			digitprev++;
		}
		else {
			digitother = 666;
			if (cnt == n) {
				cout << digitprev * 1000 +digitother<< endl;
				return;
			}
			cnt++;
			digitprev++;
		}


	
	}
}
int main() {
	int n; cin >> n;
	string s = "666";
	if (n == 1) cout << 666 << endl;
	else {
		findtriplesix(n);
	}
	return 0;
}