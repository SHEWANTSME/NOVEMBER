////////#include <iostream>
////////#include <vector>
////////using namespace std;
////////int main() {
////////
////////	int min = 21470;
////////	int n, idx, temp;
////////	scanf_s("%d", &n);
////////	vector<int>v(n);
////////	for (int i = 0; i < n; i++) {
////////		cin >> v[i]; // v�� ������¿� 
////////	}
////////	for (int i = 0; i < n-1; i++) {
////////		idx = i;
////////		for (int j = i+1; j < n; j++) {
////////			if (v[idx] <v[j]) idx = j; // ���⼭�� v[j]�� �� Ŀ�� ������������ ��
////////		}
////////		 temp = v[i];
////////		v[i] = v[idx];
////////		v[idx] = temp;
////////	}
////////	for (int i=0;i<n;i++){
////////	cout << v[i] << endl;
////////
////////	}
////////
////////}
//////#include <iostream>
//////#include <vector>
//////#include <algorithm>
//////#include<cmath>
//////using namespace std;
//////int main() {
//////	// �������°� ������ �ϴ� �迭 �ΰ� ����� �����غ���.
//////	int n;scanf_s("%d", &n);
//////	vector <int>v(n);
//////	vector<int>v2(n);
//////	
//////	for (int i = 0; i < n; i++) {
//////		scanf_s("%d", &v[i]);
//////		v2[i] = 0;
//////	}
//////	int cnt = 0;
//////	for(int i = 0; i < n; i++) {
//////		if (v[i] < 0) { v2[cnt] = v[i]; cnt++; }
//////
//////	}
//////	for (int i = 0; i < n;i++) {
//////		if (v[i] > 0) {
//////			v2[cnt] = v[i]; cnt++;
//////		}
//////	}
//////	
//////	for (int i = 0; i < n; i++) {
//////		cout << v2[i] <<" ";
//////	} cout << endl;
//////
//////	// with bubble sorting
//////	vector<int>bub(n);
//////	for (int i = 0; i < n; i++) {
//////		scanf_s("%d", &bub[i]);
//////		//v2[i] = 0;
//////	}
//////	/*for (int i = 0; i < n-1; i++) {
//////		for (int j = i + 1; j < n; j++) {
//////			if (bub[j-1] >0 &&  bub[j]<0) swap(bub[j-1], bub[j]);
//////		}
//////	}*/// �̷��� ���������� for�� ¥�� �ȵǰ�
//////
//////	// i�� j�� ���踦 �� �����Ͽ� �̾Ƴ�����.
//////	// j�� i�� ���� ���� �־����.. j�� ó������ ������ n���� �������� 
//////	//�ѹ����� ������ �ٲ�� �Ǵϱ� �ȵ�,, ������ i��� ū ���� ������ ���ƾ���
//////	 for(int i=0;i<n-1;i++){
//////	   for (int j = 0; j < n - 1 - i; j++) {
//////		if( bub[j] > bub[j + 1]) swap(bub[j], bub[j + 1]);
//////		}
//////	}
//////	for (int i = 0; i < n; i++) {
//////		cout << bub[i] << " ";
//////	} cout << endl;
//////
//////}
////
////
////#include <iostream>
////#include <vector>
////#include <algorithm>
////using namespace std;
////void swap(int *xp, int *yp) {
////	int temp = *xp;
////	*xp = *yp;
////	*yp = temp;
////}
////void insertionsort2(int arr[], int n) {
////	for (int i = 0; i < 9; i++) {
////		int j = i;
////		while (j >= 0 && arr[j] > arr[j + 1]) {
////			swap(&arr[j], &arr[j + 1]);
////			j--;
////		}
////		//	for (j = 0; j <= i; j++) cout << arr[j] << endl;
////	}
////}
////int main() {
////	int arr[100], n, temp,j;
////	cin >> n;
////	for (int i = 0; i < n; i++) {
////		cin >> arr[i];
////
////	}
////	// ���밡���� �ʿ��� �������ָ�
////	for (int i = 1; i < n; i++) { // i�� 1���� ���� ������ j �� �� ������ �ε����� ���� ����
////		temp = arr[i]; // �������ؾߵǼ� �ϴ� temp�� arr[i]�� ����
////		for (j = i - 1; j >= 0; j--) { // i���� ���������� ���� jfor�� -> for���� j�� �۾����� �����Ƿ� 
////			//j�� -1�ɼ��� ���� �׷��� for�� ������������
////			if (arr[j] > temp) arr[j + 1] = arr[j];	// arr[i]���� ���� �ε����� �����ٰ� ���� ũ�� 
////			// �� ���� arr[j+1]�� ���°��� ���⼭ �� arr[i]�� �Ⱦ�����?��� ��Ҹ� �Ҽ��� �ִµ�
////			//�׷��� jfor���� ���� ���� �������ε� �� if�� �ش��ϴ� ������ �������� ��� ���� �ڸ��� ü������
////			//�򰥸��� ��������(36�� 5��8�ʺ��� ����)
////			else break; // �׷��� ���� ���� �� ��ġ�� �����Ƿ� break�ϰ� �׶��� j�� �����žƳ�
////		}
////		arr[j + 1] = temp; // �� j���� 1ĭ �ε��� ���� temp�� �Ǿ���� �׷��� break�� �������� ���� ��
////	}
////	for (int i = 0; i < n; i++) {
////		printf("%d ", arr[i]);
////	}
////
////	
////
////
////}
//
////////////////////////////////////#include<iostream>
////////////////////////////////////#include<vector>
////////////////////////////////////#include<algorithm>
////////////////////////////////////using namespace std;
////////////////////////////////////
////////////////////////////////////void swap(int *xp, int *yp) {
////////////////////////////////////		int temp = *xp;
////////////////////////////////////		*xp = *yp;
////////////////////////////////////		*yp = temp;
////////////////////////////////////	}
////////////////////////////////////int main() {
////////////////////////////////////	int s, n,j;
////////////////////////////////////	cin >> s >> n;
////////////////////////////////////	vector<int>v(n);
////////////////////////////////////	vector<int>v2(s);
////////////////////////////////////	for (int i = 0; i < n; i++) {
////////////////////////////////////		cin >> v[i];
////////////////////////////////////	}
/////these are things you should know////////////////////////
////////////////////////////////////	//for (int i = 1; i < n; i++) {
////////////////////////////////////	//	int temp = v[i];
////////////////////////////////////	//	for (j = i - 1; j >= 0; j--) {
////////////////////////////////////	//		if (v[j] < temp) v[j] = v[j + 1];
////////////////////////////////////	//		else break;
////////////////////////////////////	//	}
////////////////////////////////////	//	v[j + 1] = temp;
////////////////////////////////////	//}
////////////////////////////////////	int a,pos ;
////////////////////////////////////	for (int i=1; i<=n; i++) {
////////////////////////////////////		cin >> a;
////////////////////////////////////		pos = -1;
////////////////////////////////////		for (j = 0; j < s; j++) if (v2[j] == a)pos = j;
////////////////////////////////////		if (pos == -1) {
////////////////////////////////////			for (j = s - 1; j >= 1; j--) {
////////////////////////////////////				v2[j] = v2[j - 1];
////////////////////////////////////			}
////////////////////////////////////		}
////////////////////////////////////		else {
////////////////////////////////////			for (j = pos; j >= 1; j--) v2[j] = v2[j - 1];
////////////////////////////////////		}
////////////////////////////////////		v2[0] = a;
////////////////////////////////////	}
////////////////////////////////////	for (int i = 0; i < s; i++) cout << v2[i] << "\n";
////////////////////////////////////	return 0;
////////////////////////////////////}

//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
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
//	sort(p.begin(), p.end(), greater<pair<int, int>>());
//	int prev = p[0].first, rank = 1;
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



//// STL
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <deque>
using namespace std;
void sequence_containers() {
	//vector
	{
		vector<int>v;
		for (int i = 0; i < 10; i++) {
			v.push_back(i);
		}
		for (auto &element : v) {
			cout << element << " ";
		}cout << endl;
	}
	//deque
	{
		deque<int> deq;
		for (int i = 0; i < 10; i++) {
			deq.push_back(i); // ������ ����������
			deq.push_front(i); // �ڷε� ����
		}
		for (auto &element : deq) cout << element << endl;
		cout << "\n"; 
	}
	
}
void associative_containers() {
	//set
	{
		set<string> str_set;
		str_set.insert("Hello"); // set�� insert�� push 
		str_set.insert("World");
		str_set.insert("Hello"); // ���ο� ���� ���� �ΰ��� ������ 2 
		cout << str_set.size() << "\n"; // 2
		for (auto &e : str_set) cout << e << "\n"; // ��ο��� ����
		cout << "\n";
	}
	//multiset -> duplication allowed
	{
		multiset<string> str_set;
		str_set.insert("Hello"); // set�� insert�� push 
		str_set.insert("World");
		str_set.insert("Hello"); // multiset�� �ߺ� ��� 
		cout << str_set.size() << "\n"; // 3
		for (auto &e : str_set) cout << e << "\n"; // �����ο���
		cout << "\n";
	}
	//map : key / value
	{
		map<char, int> map; // �����ϰ� int ����
		map['c'] = 50;
		map['a'] = 10;
		map['b'] = 20;
		cout << map['a'] << "\n"; // 10
		map['a'] = 100;
		cout << map['a'] << "\n";// 100
		for (auto &e : map) cout << e.first << " " << e.second << "\n";
		cout << endl; // �� ���� // ���ĵ� ������ ���� a����
		//������ key�� ����, value�� �����̸�
		//���� Ž���� �ʿ��Ҷ� ���
	}
	// multimap -> duplicated allowed
	{
		std::multimap<char, int> map;
		map.insert(std::pair('a', 10));
		map.insert(std::pair<char, int>('b', 10)); // ���������� �̷��� �����
		map.insert(std::pair('c', 10));
		map.insert(std::pair<char, int>('a', 100));

		cout << map.count('a') << "\n";
		for (auto &e : map) cout << e.first << " " << e.second << "\n";
		cout << endl;
	}
}
void container_adapters() {
	//stack
	{
		cout << "stack" << endl;
		stack<int> stack;
		stack.push(1); // push adds a oopy version of it
		stack.emplace(2); // emplace constructs a new object -> ���ο� ��ü�� ���� �־��
		stack.emplace(3);
		cout << stack.top() << endl;
		stack.pop();
		cout << stack.top() << "\n";
	}
	//queue
	{
		cout << "Queue" << endl;
		queue<int> queue;
		queue.push(1);
		queue.push(2);
		//��������� ��������?

	}
	//priority queue 
	{
		cout << "priority queue" << endl;
		priority_queue<int> q;
		for (const int n : {1, 8, 5, 6, 3, 7, 2, 4, 1}) q.push(n);
		//��׵� pop��Ű�� ������ �������ڴϱ� 8���� ���ʷ� pop��
	}
}
int main() {
	sequence_containers();
	associative_containers();
	container_adapters();
}