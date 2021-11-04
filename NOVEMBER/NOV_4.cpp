#include <iostream>
#include <list>
#include <utility> // for the pairing <int , int> 도 되고 <int , string>도 됨
#include <functional>
using namespace std;
int main() {
	list<int> list;
	//list<int , char> list2; 이건 안됨
	list.push_back(100);
	list.push_back(200);
	list.push_front(300);
	for (auto &e : list) cout << e << "\n";

	for (auto delta = list.begin(); delta != list.end(); delta++) {
		cout << *delta << endl; // iterator로 돌릴때는 pointer로 해야함
	} // same thing above
	list.insert(list.begin(), 30); // insert 쓸때에는 이렇게 begin 이나 end써야함
	std::list<int>::iterator iter; // iterator쓰고싶을때 이렇게 정의함. 
	/*
	iterator는 한마디로 그냥 포인터이다. 배열의 요소를 가리키는 포인터
	벡터에서 begin 함수는 배열의 시작주소를 반환하는 함수이다.
	그니까 v.begin()이라 하면 v벡터배열의 첫번째 주소를 반환함
	그리고 end함수는 v의 마지막요소 바로 뒤  -> 가비지 값의 주소를 반환함
	아마 for 돌릴때 편하라고 그렇게 해준 듯 그래서 for 돌릴때 iter != v.end()이러자나
	마지막은 아닐때,, 까지 돌린다 이말이지. 
	*/

	
	



	return 0;
}