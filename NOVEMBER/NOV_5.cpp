//#include <iostream>
//#include <vector>
//using namespace std;
//int arr[1000001] = { 0, }; // �Ƚᵵ �ڵ� 0 �̱� ��
//void findit(int x, int y) {
//	arr[0] = 1; arr[1] = 1;
//	for (int i = 2; i <= y ; i++) {
//		/* ����� ������ 4�����̴�. ��, ���� 3���ϱ����� �Ҽ��� �ش��ϴ� �κ��̱� ������ 2*i���� �����ص� ����� ����.
//		j+=i�� i��ŭ �������µ�, ó������ 2��, �������� 3�� ��������. ��, ����� ������ �ϰ� �ִ�.
//		ex) i�� 2�̸� 2�ǹ��, 3�̸� 3�� ����� ���� */
//		for (int j = 2 * i; j <= y; j =j+i) {
//			if (arr[j] == 0) arr[j] = 1; //����� �迭���� 1�� üũ�ȴ�.			
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
//#include<map> // multimap�� indexing�ȵ�.. ����
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
using namespace std;
// using sublime text without debugging sounds okay..? 
int main() {
	unsigned char items_flag = 0;

	//cout << bitset<8>(items_flag)<<endl; // 8��Ʈ ������� 00000000�� ��������?
	// make each bit on flags
	const unsigned char opt0 = 2 << 0;
	const unsigned char opt1 = 2 << 1;
	const unsigned char opt2 = 2 << 2;
	const unsigned char opt3 = 1 << 3;
	const unsigned char opt4 = 4 << 1;
	// ���� �˰����� 2<<2�� 1<<3 �̶� 4<<1�� ���̰��� 
	// ���ݸ� �����غ��� �� �� ����


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



	string str1("one");
	string str2 = str1;
	str2.assign("two").append(" three");
	for (int i = 0; i < 3; i++) {
		string s;
		cin >> s;
		str2.append(s);
	}
	//cout << str2 << endl;
	std::swap(str1, str2);
	cout << str1 << " " << str2 << endl;
	str1.swap(str2);
	str1.push_back('A'); // ���ڿ��� �ȵǰ� char�� ����
	str1 += "three";
	str1 = str2 + "for";
	�� �Ǵ� ������!!!
}