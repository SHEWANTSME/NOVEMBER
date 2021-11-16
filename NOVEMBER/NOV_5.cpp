//#include <iostream>
//#include <vector>
//using namespace std;
//int arr[1000001] = { 0, }; // 안써도 자동 0 이긴 함
//void findit(int x, int y) {
//	arr[0] = 1; arr[1] = 1;
//	for (int i = 2; i <= y ; i++) {
//		/* 배수의 시작은 4부터이다. 즉, 숫자 3이하까지는 소수에 해당하는 부분이기 때문에 2*i부터 시작해도 상관이 없다.
//		j+=i는 i만큼 더해지는데, 처음에는 2씩, 다음에는 3씩 더해진다. 즉, 배수의 역할을 하고 있다.
//		ex) i가 2이면 2의배수, 3이면 3의 배수의 역할 */
//		for (int j = 2 * i; j <= y; j =j+i) {
//			if (arr[j] == 0) arr[j] = 1; //배수는 배열에서 1로 체크된다.			
//		}
//	}
//	for (int i = x; i <= y ; i++) {
//		if (arr[i] == 0) cout << arr[i] << endl;
//	}
//}
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	int n, m,i,cnt=0;
//	bool find = true;
//	cin >> n >> m;
//	//vector<int>v(m - n + 1);
//	findit(n, m);
//
//	return 0;
//}
//#include<iostream>
//#include <vector>
//#include<algorithm>
//#include<map> // multimap은 indexing안됨.. ㅅㅂ
//
//using namespace std;
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	int n;
//	cin >> n;
//	vector<int> v(n);
//	vector<pair<int, int>> p(n);
//	for (int i = 0; i < n; i++) {
//		cin >> v[i];
//		p[i] = { v[i], i };
//	}
//	vector<int> res(n);
//	
//	
//	sort(p.begin(), p.end());
//	
//	/*for (auto &e : p) {
//		cout << e.first << " " << e.second<< endl;
//	}*/
//	
//	int prev = p[0].first, rank = 0;
//	for (int i = 0; i < n; i++) {
//		if (prev == p[i].first)
//			res[p[i].second] = rank;
//		else
//			res[p[i].second] = ++rank;
//		prev = p[i].first;
//	}
//	for (int i = 0; i < n; i++) {
//		cout << res[i] << " ";
//	}
//	return 0;
//}

#include <iostream>
#include <bitset>
#include <string>
#include <vector>
using namespace std;
// using sublime text without debugging sounds okay..? 
int main() {
	unsigned char items_flag = 0;

	//cout << bitset<8>(items_flag)<<endl; // 8비트 사이즈로 00000000이 찍히겠지?
	// make each bit on flags
	const unsigned char opt0 = 2 << 0;
	const unsigned char opt1 = 2 << 1;
	const unsigned char opt2 = 2 << 2;
	const unsigned char opt3 = 1 << 3;
	const unsigned char opt4 = 4 << 1;
	// 보면 알겠지만 2<<2랑 1<<3 이랑 4<<1은 값이같음 
	// 조금만 생각해보면 알 수 있음


	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;
	cout << bitset<8>(opt4) << endl;

	items_flag |= opt0;
	cout << "Item0 obtained" << bitset<8>(items_flag) << endl;
	items_flag |= opt2;
	cout << "Item2 obtained" << bitset<8>(items_flag) << endl;
	items_flag &= ~opt3;
	cout << "Item3 lost" << bitset<8>(items_flag) << endl;

	//string my_str = "0123456789";
	//cout << my_str.size() << endl;
	//cout << std::boolalpha<< my_str.empty() << endl;



	//string hisstr = "abcdefg";
	//cout << hisstr.c_str() << endl; // C STYLE
	//cout << hisstr << endl;
	//const char *arr = hisstr.c_str();
	//cout << arr[6] << endl;
	//cout << arr[7] << endl;
	//cout << (int)arr[6] << endl;
	//cout << (int)arr[7] << endl;
	//cout << (int)hisstr[6] << endl;
	//cout << (int)hisstr[7] << endl;
	//string sechis(hisstr, 3); // 앞에 3개 짤림
	//string sechis(hisstr, 3, 2); // 아ㅠ에 3개 짜르면서 총길이 2
	////string 초기화 할때,, const char * sechis = "fuckyou"해도됨 근데 보통은 string sechis = "fuckyou"하지
	//string sechis(10, 'a'); // a열개찍힘
	//std::vector<char>vec; 
	//for (auto &e : "today is a good day") vec.push_back(e);

	//std::string  second(vec.begin(), vec.end());
	//cout << second << endl;



	unsigned  char delta = 0b11001000;

	cout << bitset<8>(delta &(1 << 1)) << endl;

}