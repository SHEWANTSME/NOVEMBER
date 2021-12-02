#include <iostream>
#include <vector>
#include <stack> // For DFS2

/*
DFS -> 깊이 우선 탐색 ( 완탐 )

시작점부터 다음 Branch로 넘어가기 전에 해당 Branch를 오지게 완벽히 탐색

1. 탐색 시작 노드를 스택에 넣고 방문처리를 함(visited배열)

2. 스택의 최상단 노드에 방문하지 않은 인접노드가 하나라도
있으면 그 노드를 스택에 넣고 방문처리를 함(visited)
만약 방문하지 않은 인접노드가 없으면 스택에서 최상단 노드꺼냄

3. 2번 과정을 못 할때까지 반복.

장점 : 원하는 노드가 깊은 단계에 있을때 답을 빨리 구하기 쉬움

단점 : 해가 없는 경로에 깊게 빠질 수 있음 -> 휴리스틱 need
얻은 해가 최단경로임을 보장못함 -> BFS쓰셈 이럴땐
(목표에 이르는 경로가 여러개일때는 최적을 보장할 수 없다)



*/
using namespace std;
int visited[10];
vector<int>d[10];
// 재귀함수로 나타낸 DFS1
void DFS1(int n) {
	//1단계 ;> 탐색 시작 노드를 방문 했다고 한다.
	visited[n] = true;
	cout << n << " ";
	//2단계 : 방문 안한 인접노드 사이즈 만큼 탐색
	for (int i = 0; i < d[n].size(); i++) {
		int m = d[n][i];
		// 근데 인접노드가 방문 안했던애면 그 인접노드를 다시 DFS돌려야지
		if (!visited[m]) DFS1(m); // if(visited[m] == 0) DFS(m); 같은거임
	}
}

int visited2[10];
vector<int>graph[10];
// Stack을 이용한 DFS2
void DFS2(int n) {
	stack<int>stk; // 스택  하나 만들고
	stk.push(n); // 스택에 n을 넣고
	visited2[n] = true; // 방문배열에 true라 하고
	cout << n << " "; // 맨처음 루트원소 출력만 함
	while (!stk.empty()) { // 스택에 원소가 있으면 
		int current = stk.top(); // 
		stk.pop();
		for (int i = 0; i < graph[current].size(); i++) {
			int next = graph[current][i];
			if (visited2[next] == 0) {
				cout << next << " "; // 나머지는 얘가 출력
				visited2[next] = true;
				//pop을 했었기 때문에 현재 current도 넣어주자
				stk.push(current);
				stk.push(next);
				break;//여까지오면 for문 도는게 아니라 while처음으로 컴백
			}
		}
	}
}
/*
BFS(너비우선탐색) -> 최단경로, 임의경로 탐색에 유용
QUEUE를 이용함!!( DFS는 stack썼었자나)-> 근데 벡터는 D랑B둘다쓰임

1. 탐색시작노드를 Queue에 삽입하고 방문 처리함(checked)

2. queue에서 노드를 꺼내고 해당노드의 인접노드중에서 방문하지
않은 노드를 모두(한방에) queue에 삽입한 후 방문처리함 (checked)

3. 더이상 2번 과정을 수행 못할때까지 계속

장점 :  출발노드에서 목표노드까지의 최단 길이 경로를 보장
단점 : 경로가 매우 길 경우에는 탐색 경우의 수가 급격히 증가함
         -> memory 존나need
           No 해 & 유한 그래프->  모든 그래프를 탐색한 후에 실패로 끝남 
  -       무한 그래프-> 결코 해를 찾지도 못하고, 끝내지도 못한다.
          해가있는 유한그래프에서 사용 ㄱㄴ!
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
			//여기서는 break가 필요없는게, 어차피 
			//깊게 파고드는게 아니고 옆으로 퍼지는 형태라서
			// 그냥 for문을 다 돌고 while로 빠지는게 정상
		}
	}
	


}


int main() {
	//d[1].push_back(1);
	/* 탐 색 노 드 들 을 일 단 값 을 넣 어 준 다*/
	d[1].push_back(2);
	d[1].push_back(6);

	d[2].push_back(1);// 단방향일때 없어도 될것같은애
	d[2].push_back(4);
	d[2].push_back(9);
	
	d[3].push_back(6); // 얘도
	d[4].push_back(2); // 얘도
	d[5].push_back(6); // 얘도

	d[6].push_back(1); // 얘도
	d[6].push_back(3);
	d[6].push_back(7);
	d[6].push_back(5);

	d[7].push_back(6); // 얘도
	d[9].push_back(2); // 얘도

	//양방향으로 해야하는 이유?? 아닌 이유??
	//"얘도"라고 써있는애들 다 주석처리하면 1 2 4 9 6 3 7 5로 나옴,, 
	//왜징,, 애초에 넣을때 순서대로 넣어야 하나봐!..
	// 얘도 주석처리 안해도 12496375로 나옴


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