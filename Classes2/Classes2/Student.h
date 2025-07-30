#ifndef STUDENT_H
#define STUDENT_H

#include <string>
using namespace std;

#include "Subject.h"

class Student {
private:
	int studentId;		//아이디
	string studentName;	//이름
	Subject korean;		//국어 과목(참조)
	Subject math;		//수학 과목(참조)

public:
	Student(int studentId, string studentName);

	//국어 과목 설정
	void setKoreanSubject(string name, int score);

	//수학 과목 설정
	void setMathSubject(string name, int score);

	//학생의 정보 출력
	void showInfo();
};

#endif