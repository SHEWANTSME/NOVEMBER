#include <iostream>
#include <list>
#include <utility> // for the pairing <int , int> �� �ǰ� <int , string>�� ��
#include <functional>
using namespace std;
int main() {
	list<int> list;
	//list<int , char> list2; �̰� �ȵ�
	list.push_back(100);
	list.push_back(200);
	list.push_front(300);
	for (auto &e : list) cout << e << "\n";

	for (auto delta = list.begin(); delta != list.end(); delta++) {
		cout << *delta << endl; // iterator�� �������� pointer�� �ؾ���
	} // same thing above
	list.insert(list.begin(), 30); // insert �������� �̷��� begin �̳� end�����
	std::list<int>::iterator iter; // iterator��������� �̷��� ������. 
	/*
	iterator�� �Ѹ���� �׳� �������̴�. �迭�� ��Ҹ� ����Ű�� ������
	���Ϳ��� begin �Լ��� �迭�� �����ּҸ� ��ȯ�ϴ� �Լ��̴�.
	�״ϱ� v.begin()�̶� �ϸ� v���͹迭�� ù��° �ּҸ� ��ȯ��
	�׸��� end�Լ��� v�� ��������� �ٷ� ��  -> ������ ���� �ּҸ� ��ȯ��
	�Ƹ� for ������ ���϶�� �׷��� ���� �� �׷��� for ������ iter != v.end()�̷��ڳ�
	�������� �ƴҶ�,, ���� ������ �̸�����. 
	*/

	
	



	return 0;
}