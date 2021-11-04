#include <iostream>
#include <list>
#include <utility> // for the pairing <int , int> �� �ǰ� <int , string>�� ��
#include <functional>
#include <string>
#include <vector>
#include <map>
using namespace std;
int main() {
	list<int> list; // �̸��� �ڷ����� ���Ƽ� �� �������� list�� ������ std::�� �ٿ��� ȥ���Ȱ�
	//list<int , char> list2; �̰� �ȵ�
	list.push_back(100);
	list.push_back(200);
	list.push_front(300);
	for (auto &e : list) cout << e << "\n";

	for (auto delta = list.begin(); delta != list.end(); delta++) {
		cout << *delta << endl; // iterator�� �������� pointer�� �ؾ���
	} // same thing above
	list.insert(list.begin(), 30); // insert �������� �̷��� begin �̳� end�����
	std::list<int>::iterator iter;
	for (iter = list.begin(); iter != list.end(); iter++) {
		cout << *iter << endl; // �̷��� �ᵵ ��
	}
	// iterator��������� �̷��� ������. 
	/*
	iterator�� �Ѹ���� �׳� �������̴�. �迭�� ��Ҹ� ����Ű�� ������
	���Ϳ��� begin �Լ��� �迭�� �����ּҸ� ��ȯ�ϴ� �Լ��̴�.
	�״ϱ� v.begin()�̶� �ϸ� v���͹迭�� ù��° �ּҸ� ��ȯ��
	�׸��� end�Լ��� v�� ��������� �ٷ� ��  -> ������ ���� �ּҸ� ��ȯ��
	�Ƹ� for ������ ���϶�� �׷��� ���� �� �׷��� for ������ iter != v.end()�̷��ڳ�
	�������� �ƴҶ�,, ���� ������ �̸�����.
	*/
	//size -> list�� ������, clear -> �ϴ� �����, empty -> ����ֳ� �Ⱥ���ֳ� check
	// ������ ��Ǯ�ϴٰ� if(m.size()==0)�ϴϱ� �����߰� if(!empty()) �ϴϱ� �Ǵ���
	// �������ϸ� empty�� ����.. 
	//swap�� �ȴٴ�!
	std::list<int> fortheswap;
	list.clear();
	list.push_back(50);
	list.push_back(100);
	fortheswap.swap(list);
	//�ƴ� �� �ȹٲ�? ����
	cout << fortheswap.front() << " " << fortheswap.back();

	pair<int, string> p1 = make_pair(1, "fuckyou");
	pair<int, string> p2 = make_pair(2, "mama");
	cout << p1.first << endl;
	cout << p2.second << endl;
	// �̷��� �ᵵ ��
	std::vector<int>v;
	std::vector<pair<int, int>>p;
	map<int, char> container;

	//p[0] = { v[0], 3 }; //�̷������� ���� �� ����
	for (int i = 0; i < 10; i++) {
		p[i] = { v[i],i };
		container.insert(make_pair(i, char(i + 65)));// 0to9 AtoJ
	}
	for (auto x = container.begin(); x != container.end(); x++) {
	//	cout << *x << " "; pair�� �ٷ� ������ ����
		cout << x->first << " " << x->second << endl;
	}cout << endl;
	for (int j = 0; j < 10; j++) {
		cout << p[j].first << endl;
	} // �̷�������,, �����

	return 0;
}