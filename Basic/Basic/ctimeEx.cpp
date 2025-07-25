#include <iostream>
#include <ctime> //시간 관련 함수
#include <thread> //쓰레드(프로세스 작업) this_thread::sleep_for
using namespace std;

int main()
{
	//현재 시간
	time_t now = time(nullptr); //c언어 - time(NULL)

	cout << now << "초\n";
	cout << now / (24 * 60 * 60) << "일\n";
	cout << now / (365 * 24 * 60 * 60) << "년\n";

	/*수행 시간 측정
	time_t start, end;

	//start = time(nullptr);
	time(&start);

	//0.5초 간격으로 대기 시간
	for (int i = 1;i <= 10;i++) {
		cout << i << endl;
		//thread 헤더 파일 포함, 1s - 1000ms
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	//end = time(nullptr);
	time(&end);
	cout << "수행 시간: " << (end - start) << "초\n";*/

	//수행 시간 측정(실수로 측정)
	time_t start, end;
	double elapsedTime; //소요 시간

	start = clock();

	for (int i = 1;i <= 10;i++) {
		cout << i << endl;
		this_thread::sleep_for(chrono::milliseconds(500));
	}

	end = clock();
	//CLOCKS_PER_SEC - 초 단위 변환 상수
	elapsedTime = (double)(end - start) / CLOCKS_PER_SEC;
	cout << "수행 시간: " << elapsedTime << "초\n";

	return 0;
}
/*
	time(nullptr); //c언어 - time(NULL)
	this_thread::sleep_for(chrono::milliseconds(500)); //c언어 - Sleep(1000)
	time(&start); //start = time(nullptr);도 가능
*/