#include <iostream>
using namespace std;

int main()
{
	int num;		//배열의 개수
	int* score;		//점수를 저장할 포인터(동적 할당)
	int sum = 0, max;	//총점, 최고점수
	float avg;		//평균

	cout << "*** 점수의 평균 계산 ***\n";
	cout << "입력할 점수의 개수: ";
	cin >> num;

	score = new int[num]; //배열의 동적 할당
	if (score == nullptr) {
		cout << "메모리를 할당할 수 없습니다.\n";
		return -1;
	}
	
	//점수 입력
	for (int i = 0;i < num;i++) {
		cout << i + 1 << "번째 점수: ";
		cin >> score[i];
	}

	//총점, 최고 점수 계산
	max = score[0];
	for (int i = 0;i < num;i++) {
		sum += score[i];
		if (max < score[i]) max = score[i];
	}

	cout << "총점: " << sum << endl;
	cout << "최고 점수: " << max << endl;

	avg = (float)sum / num; //평균 = 총점 / 개수
	cout << fixed;
	cout.precision(1); //소수 첫째자리 설정
	cout << "평균: " << avg << endl;

	delete[] score;

	return 0;
}