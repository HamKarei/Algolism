#include <iostream>
#include <algorithm>

using namespace std;

class Student
{
public:
	string name;
	int score;
	Student(string name, int score)
	{
		this->name = name;
		this->score = score;
	}
	// 정렬 기준은 '점수가 작은 순서'
	bool operator <(Student & student)
	{
		return this->score < student.score;
	}
};


int main()
{
	Student students[] = {
		Student("강 동 우",90),
		Student("배 성 준",93),
		Student("정 상 협",97),
		Student("이 기 백",87),
		Student("김 병 지",92)
	};
	sort(students, students+5);
	for (int i = 0; i < 5; i++)
	{
		cout << students[i].name << ' ';
	}
	return 0;
}