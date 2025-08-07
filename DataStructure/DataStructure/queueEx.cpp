#include <iostream>
#include <queue>
using namespace std;
/*
	큐(Queue)
	- 선입선출(FIFO) - 배열에서 먼저 들어간 자료를 먼저 꺼냄
*/
int main()
{
	/*
	queue<int> que; //정수를 저장할 큐 생성

	//요소 추가(10 - 20 - 30)
	que.push(10);
	que.push(20);
	que.push(30);

	//요소 검색
	cout << "첫번째 요소: " << que.front() << endl;	//10
	cout << "마지막 요소: " << que.back() << endl;	//30
	//cout << "0번 요소: " << que[0] << endl; //접근 불가

	//요소 제거
	//que.pop(); //10 삭제
	//cout << "다음 요소: " << que.front() << endl;	//20 

	//전체 요소 삭제 및 출력
	while (!que.empty()) {
		cout << que.front() << " ";
		que.pop(); //요소 삭제(10 - 20 - 30)
	}
	*/

	//은행 고객 대기줄
	queue < string> q;

	//고객 대기줄(A - B - C)
	q.push("고객A");
	q.push("고객B");
	q.push("고객C");

	while (!q.empty()) {
		cout << q.front() << "님 업무 처리 중..." << endl;
		q.pop();
	}

	cout << "모든 고객님의 업무 처리가 완료되었습니다.\n";
	
	return 0;
}