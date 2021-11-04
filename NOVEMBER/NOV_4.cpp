#include <iostream>
#include <list>
#include <utility> // for the pairing <int , int> 도 되고 <int , string>도 됨
#include <functional>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main() {
	list<int> list; // 이름과 자료형이 같아서 이 다음부터 list를 쓰려면 std::를 붙여야 혼동안감
	//list<int , char> list2; 이건 안됨
	list.push_back(100);
	list.push_back(200);
	list.push_front(300);
	for (auto &e : list) cout << e << "\n";

	for (auto delta = list.begin(); delta != list.end(); delta++) {
		cout << *delta << endl; // iterator로 돌릴때는 pointer로 해야함
	} // same thing above
	list.insert(list.begin(), 30); // insert 쓸때에는 이렇게 begin 이나 end써야함
	std::list<int>::iterator iter;
	for (iter = list.begin(); iter != list.end(); iter++) {
		cout << *iter << endl; // 이렇게 써도 됨
	}
	// iterator쓰고싶을때 이렇게 정의함. 
	/*
	iterator는 한마디로 그냥 포인터이다. 배열의 요소를 가리키는 포인터
	벡터에서 begin 함수는 배열의 시작주소를 반환하는 함수이다.
	그니까 v.begin()이라 하면 v벡터배열의 첫번째 주소를 반환함
	그리고 end함수는 v의 마지막요소 바로 뒤  -> 가비지 값의 주소를 반환함
	아마 for 돌릴때 편하라고 그렇게 해준 듯 그래서 for 돌릴때 iter != v.end()이러자나
	마지막은 아닐때,, 까지 돌린다 이말이지.
	*/
	//size -> list의 사이즈, clear -> 싹다 비워라, empty -> 비어있나 안비어있나 check
	// 저번에 문풀하다가 if(m.size()==0)하니까 에러뜨고 if(!empty()) 하니까 되던데
	// 어지간하면 empty를 쓰자.. 
	//swap도 된다능!
	std::list<int> fortheswap;
	list.clear();
	list.push_back(50);
	list.push_back(100);
	fortheswap.swap(list);
	//아니 왜 안바뀜? ㅅㅂ
	cout << fortheswap.front() << " " << fortheswap.back();

	pair<int, string> p1 = make_pair(1, "fuckyou");
	pair<int, string> p2 = make_pair(2, "mama");
	cout << p1.first << endl;
	cout << p2.second << endl;
	// 이렇게 써도 됨
	std::vector<int>v;
	std::vector<pair<int, int>>p;
	map<int, char> container;

	//p[0] = { v[0], 3 }; //이런식으로 넣을 수 있음
	for (int i = 0; i < 10; i++) {
		p[i] = { v[i],i };
		container.insert(make_pair(i, char(i + 65)));// 0to9 AtoJ
	}
	for (auto x = container.begin(); x != container.end(); x++) {
	//	cout << *x << " "; pair라서 바로 포인터 ㄴㄴ
		cout << x->first << " " << x->second << endl;
	}cout << endl;
	for (int j = 0; j < 10; j++) {
		cout << p[j].first << endl;
	} // 이런식으로,, 써야힘

	return 0;
}