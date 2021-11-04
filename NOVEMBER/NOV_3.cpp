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
////////		cin >> v[i]; // v에 점수담는용 
////////	}
////////	for (int i = 0; i < n-1; i++) {
////////		idx = i;
////////		for (int j = i+1; j < n; j++) {
////////			if (v[idx] <v[j]) idx = j; // 여기서는 v[j]가 더 커야 내림차순ㄴ이 됨
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
//////	// 떠오르는게 없으니 일단 배열 두개 만들고 생각해보자.
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
//////	}*/// 이렇게 무지성으로 for를 짜면 안되고
//////
//////	// i랑 j의 관계를 잘 유추하여 뽑아내야함.
//////	// j가 i의 범위 내에 있어야함.. j가 처음부터 무작정 n까지 가버리면 
//////	//한번돌때 여러번 바뀌게 되니까 안됨,, 무조건 i라는 큰 범위 내에서 돌아야함
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
////	// 빡대가리인 너에게 설명해주마
////	for (int i = 1; i < n; i++) { // i가 1부터 도는 이유는 j 가 그 이하의 인덱스를 돌기 때문
////		temp = arr[i]; // 값복사해야되서 일단 temp를 arr[i]라 하자
////		for (j = i - 1; j >= 0; j--) { // i보다 작은값들을 도는 jfor문 -> for에서 j가 작아지고 있으므로 
////			//j는 -1될수도 있음 그러면 for을 빠져나가겠지
////			if (arr[j] > temp) arr[j + 1] = arr[j];	// arr[i]보다 작은 인덱스를 뒤지다가 값이 크면 
////			// 그 값이 arr[j+1]로 들어가는거임 여기서 왜 arr[i]로 안쓰나요?라고 헛소리 할수도 있는데
////			//그러면 jfor문이 도는 값이 여러개인데 저 if에 해당하는 조건이 여러개면 계속 같은 자리랑 체인지됨
////			//헷갈리면 삽입정렬(36강 5분8초부터 보셈)
////			else break; // 그러지 않을 경우는 볼 가치가 없으므로 break하고 그때의 j가 있을거아냐
////		}
////		arr[j + 1] = temp; // 그 j보다 1칸 인덱스 앞이 temp가 되어야함 그래야 break된 뒷지점에 값이 들어감
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
			deq.push_back(i); // 앞으로 넣을수있음
			deq.push_front(i); // 뒤로도 ㄱㄴ
		}
		for (auto &element : deq) cout << element << endl;
		cout << "\n"; 
	}
	
}
void associative_containers() {
	//set
	{
		set<string> str_set;
		str_set.insert("Hello"); // set은 insert로 push 
		str_set.insert("World");
		str_set.insert("Hello"); // 내부에 같은 원소 두개라서 사이즈 2 
		cout << str_set.size() << "\n"; // 2
		for (auto &e : str_set) cout << e << "\n"; // 헬로월드 까지
		cout << "\n";
	}
	//multiset -> duplication allowed
	{
		multiset<string> str_set;
		str_set.insert("Hello"); // set은 insert로 push 
		str_set.insert("World");
		str_set.insert("Hello"); // multiset은 중복 허용 
		cout << str_set.size() << "\n"; // 3
		for (auto &e : str_set) cout << e << "\n"; // 헬로헬로월드
		cout << "\n";
	}
	//map : key / value
	{
		map<char, int> map; // 문자하고 int 대응
		map['c'] = 50;
		map['a'] = 10;
		map['b'] = 20;
		cout << map['a'] << "\n"; // 10
		map['a'] = 100;
		cout << map['a'] << "\n";// 100
		for (auto &e : map) cout << e.first << " " << e.second << "\n";
		cout << endl; // 쭉 나옴 // 정렬된 순서로 나옴 a부터
		//보통은 key가 고정, value가 가변이며
		//자주 탐색이 필요할때 사용
	}
	// multimap -> duplicated allowed
	{
		std::multimap<char, int> map;
		map.insert(std::pair('a', 10));
		map.insert(std::pair<char, int>('b', 10)); // 예전버전은 이렇게 써야함
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
		stack.emplace(2); // emplace constructs a new object -> 새로운 객체를 만들어서 넣어둠
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
		//쓰기귀찮다 뭔지알지?

	}
	//priority queue 
	{
		cout << "priority queue" << endl;
		priority_queue<int> q;
		for (const int n : {1, 8, 5, 6, 3, 7, 2, 4, 1}) q.push(n);
		//얘네들 pop시키면 위에가 높은숫자니까 8부터 차례로 pop됨
	}
}
int main() {
	sequence_containers();
	associative_containers();
	container_adapters();
}