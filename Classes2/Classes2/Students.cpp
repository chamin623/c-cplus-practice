#include <iostream>
using namespace std;
#include "Students.h"

Students::Students(int studentId, string studentName)
	: studentId(studentId), studentName(studentName) {}

void Students::addSubject(string name, int score) {
	if (subjectCount < 10) { // 배열의 공간이 10을 초과하지 않는다면
		subjects[subjectCount].setSubjectName(name);	//subjectCount번째 과목의 과목 이름 설정
		subjects[subjectCount].setScorePoint(score);	//subjectCount번째 과목의 점수 설정
		subjectCount++;
	}
}

void Students::showInfo() {
	int sum = 0;	//총점
	double average;	//평균

	cout << "학번: " << studentId
		<< "\n이름: " << studentName << endl;

	//과목은 여러 개이므로 반복문 사용
	for (int i = 0;i < subjectCount;i++) {
		sum += subjects[i].getScorePoint(); //총점 계산

		cout << subjects[i].getSubjectName() //과목 이름
			<< " 점수: " << subjects[i].getScorePoint() << "점\n";
	}
	cout << "-------------------------------\n";

	//평균 계산
	average = (double)sum / subjectCount;

	cout << fixed;
	cout.precision(1); //소수 첫째자리까지 출력
	cout << "평균 점수: " << average << "점\n";
	cout << "-------------------------------\n";
}