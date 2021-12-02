#include <iostream>
#include <vector>
#include <stack> // For DFS2

/*
DFS -> ���� �켱 Ž�� ( ��Ž )

���������� ���� Branch�� �Ѿ�� ���� �ش� Branch�� ������ �Ϻ��� Ž��

1. Ž�� ���� ��带 ���ÿ� �ְ� �湮ó���� ��(visited�迭)

2. ������ �ֻ�� ��忡 �湮���� ���� ������尡 �ϳ���
������ �� ��带 ���ÿ� �ְ� �湮ó���� ��(visited)
���� �湮���� ���� ������尡 ������ ���ÿ��� �ֻ�� ��岨��

3. 2�� ������ �� �Ҷ����� �ݺ�.

���� : ���ϴ� ��尡 ���� �ܰ迡 ������ ���� ���� ���ϱ� ����

���� : �ذ� ���� ��ο� ��� ���� �� ���� -> �޸���ƽ need
���� �ذ� �ִܰ������ ������� -> BFS���� �̷���
(��ǥ�� �̸��� ��ΰ� �������϶��� ������ ������ �� ����)



*/
using namespace std;
int visited[10];
vector<int>d[10];
// ����Լ��� ��Ÿ�� DFS1
void DFS1(int n) {
	//1�ܰ� ;> Ž�� ���� ��带 �湮 �ߴٰ� �Ѵ�.
	visited[n] = true;
	cout << n << " ";
	//2�ܰ� : �湮 ���� ������� ������ ��ŭ Ž��
	for (int i = 0; i < d[n].size(); i++) {
		int m = d[n][i];
		// �ٵ� ������尡 �湮 ���ߴ��ָ� �� ������带 �ٽ� DFS��������
		if (!visited[m]) DFS1(m); // if(visited[m] == 0) DFS(m); ��������
	}
}

int visited2[10];
vector<int>graph[10];
// Stack�� �̿��� DFS2
void DFS2(int n) {
	stack<int>stk; // ����  �ϳ� �����
	stk.push(n); // ���ÿ� n�� �ְ�
	visited2[n] = true; // �湮�迭�� true�� �ϰ�
	cout << n << " "; // ��ó�� ��Ʈ���� ��¸� ��
	while (!stk.empty()) { // ���ÿ� ���Ұ� ������ 
		int current = stk.top(); // 
		stk.pop();
		for (int i = 0; i < graph[current].size(); i++) {
			int next = graph[current][i];
			if (visited2[next] == 0) {
				cout << next << " "; // �������� �갡 ���
				visited2[next] = true;
				//pop�� �߾��� ������ ���� current�� �־�����
				stk.push(current);
				stk.push(next);
				break;//���������� for�� ���°� �ƴ϶� whileó������ �Ĺ�
			}
		}
	}
}
/*
BFS(�ʺ�켱Ž��) -> �ִܰ��, ���ǰ�� Ž���� ����
QUEUE�� �̿���!!( DFS�� stack����ڳ�)-> �ٵ� ���ʹ� D��B�Ѵپ���

1. Ž�����۳�带 Queue�� �����ϰ� �湮 ó����(checked)

2. queue���� ��带 ������ �ش����� ��������߿��� �湮����
���� ��带 ���(�ѹ濡) queue�� ������ �� �湮ó���� (checked)

3. ���̻� 2�� ������ ���� ���Ҷ����� ���

���� :  ��߳�忡�� ��ǥ�������� �ִ� ���� ��θ� ����
���� : ��ΰ� �ſ� �� ��쿡�� Ž�� ����� ���� �ް��� ������
         -> memory ����need
           No �� & ���� �׷���->  ��� �׷����� Ž���� �Ŀ� ���з� ���� 
  -       ���� �׷���-> ���� �ظ� ã���� ���ϰ�, �������� ���Ѵ�.
          �ذ��ִ� ���ѱ׷������� ��� ����!
*/
#include <queue>
int checked[10];
vector<int>graphi[10];
void BFS(int n) {
	queue<int>q;
	checked[n] = true;
	q.push(n);
	while (!q.empty()) {
		int current = q.front();
		q.pop();
		cout << current << " ";
		for (int i = 0; i < graphi[current].size(); i++) {
			int next = graphi[current][i];
			if (checked[next] == 0) {
				q.push(next);
				checked[next] = true;
			}
			//���⼭�� break�� �ʿ���°�, ������ 
			//��� �İ��°� �ƴϰ� ������ ������ ���¶�
			// �׳� for���� �� ���� while�� �����°� ����
		}
	}
	


}


int main() {
	//d[1].push_back(1);
	/* Ž �� �� �� �� �� �� �� �� �� �� �� �� ��*/
	d[1].push_back(2);
	d[1].push_back(6);

	d[2].push_back(1);// �ܹ����϶� ��� �ɰͰ�����
	d[2].push_back(4);
	d[2].push_back(9);
	
	d[3].push_back(6); // �굵
	d[4].push_back(2); // �굵
	d[5].push_back(6); // �굵

	d[6].push_back(1); // �굵
	d[6].push_back(3);
	d[6].push_back(7);
	d[6].push_back(5);

	d[7].push_back(6); // �굵
	d[9].push_back(2); // �굵

	//��������� �ؾ��ϴ� ����?? �ƴ� ����??
	//"�굵"��� ���ִ¾ֵ� �� �ּ�ó���ϸ� 1 2 4 9 6 3 7 5�� ����,, 
	//��¡,, ���ʿ� ������ ������� �־�� �ϳ���!..
	// �굵 �ּ�ó�� ���ص� 12496375�� ����


	DFS1(1);

	graph[1].push_back(2);
	graph[1].push_back(6);

	graph[2].push_back(1);
	graph[2].push_back(4);
	graph[2].push_back(9);

	graph[3].push_back(6);
	graph[4].push_back(2);
	graph[5].push_back(6);

	graph[6].push_back(1);
	graph[6].push_back(3);
	graph[6].push_back(7);
	graph[6].push_back(5);

	graph[7].push_back(6);
	graph[9].push_back(2);

	DFS2(1);

	graphi[1].push_back(2);
	graphi[1].push_back(6);

	graphi[2].push_back(1);
	graphi[2].push_back(4);
	graphi[2].push_back(9);

	graphi[3].push_back(6);
	graphi[4].push_back(2);
	graphi[5].push_back(6);

	graphi[6].push_back(1);
	graphi[6].push_back(3);
	graphi[6].push_back(7);
	graphi[6].push_back(5);

	graphi[7].push_back(6);
	graphi[9].push_back(2);

	BFS(1);
	queue<int>q;
	

	return 0;
}