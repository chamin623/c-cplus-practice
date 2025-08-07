#ifndef STUDENTS_H
#define STUDENTS_H
#include "Subject.h"

class Students {
private:
	int studentId; //학생 아이디
	string studentName; //학생 이름
	Subject subjects[10]; //과목 배열
	int subjectCount = 0; //현재 등록된 과목수(인덱스)

public:
	Students(int studentId, string studentName);

	void addSubject(string name, int score);
	void showInfo();
};

#endif