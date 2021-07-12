#include "students.h"
#include <iostream>
#include <string>
using namespace std;
student::student()
{
	name = " ";
	surname = " ";
	patronymic = " ";
	course = " ";
	year = 0;
	number = 0;
	mark1 = 0;
	mark2 = 0;
	mark3 = 0;
	mark4 = 0;
	mark5 = 0;
	std::cout << "complete";
}
void student::setinfo(std::string namex, std::string surnamex, std::string patronymicx, int yearx, std::string coursex, int numberx, int mark1x, int mark2x, int mark3x, int mark4x, int mark5x)
{
	name = namex;
	surname = surnamex;
	patronymic = patronymicx;
	year = yearx;
	course = coursex;
	number = numberx;
	mark1 = mark1x;
	mark2 = mark2x;
	mark3 = mark3x;
	mark4 = mark4x;
	mark5 = mark5x;
}
student::student(std::string namex, std::string surnamex, std::string patronymicx, int yearx, std::string coursex, int numberx, int mark1x, int mark2x, int mark3x, int mark4x, int mark5x)
{
	student::setinfo(namex, surnamex, patronymicx, yearx, coursex, numberx, mark1x, mark2x, mark3x, mark4x, mark5x);
}
student::student(const student& obj)
{
	name = obj.name;
	surname = obj.surname;
	patronymic = obj.patronymic;
	course = obj.course;
	year = obj.year;
	number = obj.number;
	mark1 = obj.mark1;
	mark2 = obj.mark2;
	mark3 = obj.mark3;
	mark4 = obj.mark4;
	mark5 = obj.mark5;
}
student::student(student&& obj) 
{
	name = obj.name;
	surname = obj.surname;
	patronymic = obj.patronymic;
	course = obj.course;
	year = obj.year;
	number = obj.number;
	mark1 = obj.mark1;
	mark2 = obj.mark2;
	mark3 = obj.mark3;
	mark4 = obj.mark4;
	mark5 = obj.mark5;
	obj.name = nullptr;
	obj.surname = nullptr;
	obj.course = nullptr;
	obj.patronymic = nullptr;
	obj.number = 0;
	obj.year = 0;
	obj.mark1 = 0;
	obj.mark2 = 0;
	obj.mark3 = 0;
	obj.mark4 = 0;
	obj.mark5 = 0;
}
string student::getname()
{
	return name;
}
string student::getsurname()
{
	return surname;
}
string student::getpatronymic()
{
	return patronymic;
}
string student::getcourse()
{
	return course;
}
int student::getyear()
{
	return year;
}
int student::getynumber()
{
	return number;
}
int student::getmark1()
{
	return mark1;
}
int student::getmark2()
{
	return mark2;
}
int student::getmark3()
{
	return mark3;
}
int student::getmark4()
{
	return mark4;
}
int student::getmark5()
{
	return mark5;
}
student& student::operator= (const student& obj)
{
	name = obj.name; // ÏĞÎÏÈÑÀÒÜ == ÎÏÒÈÌÈÇÖÈß
	surname = obj.surname;
	patronymic = obj.patronymic;
	course = obj.course;
	year = obj.year;
	number = obj.number;
	mark1 = obj.mark1;
	mark2 = obj.mark2;
	mark3 = obj.mark3;
	mark4 = obj.mark4;
	mark5 = obj.mark5;
}
student& student::operator= (student&& obj)
{
	name = obj.name;
	surname = obj.surname;
	patronymic = obj.patronymic;
	course = obj.course;
	year = obj.year;
	number = obj.number;
	mark1 = obj.mark1;
	mark2 = obj.mark2;
	mark3 = obj.mark3;
	mark4 = obj.mark4;
	mark5 = obj.mark5;
	obj.name = nullptr;
	obj.surname = nullptr;
	obj.course = nullptr;
	obj.patronymic = nullptr;
	obj.number = 0;
	obj.year = 0;
	obj.mark1 = 0;
	obj.mark2 = 0;
	obj.mark3 = 0;
	obj.mark4 = 0;
	obj.mark5 = 0;
}
std::ostream& operator<<(student& obj, std::ostream& out)
{
	out << "FIO: " << obj.getname() << " " << obj.getsurname() << " " << obj.getpatronymic() << endl;
	out << "course: " << obj.getcourse() << endl;
	out << "date of birth: " << obj.getyear() << endl;
	out << "marks: " << obj.getmark1() << obj.getmark2() << obj.getmark3() << obj.getmark4() << obj.getmark5() << endl;
}
std::ostream& operator<<(student&& obj, std::ostream& out)
{
	out << "FIO: " << obj.getname() << " " << obj.getsurname() << " " << obj.getpatronymic() << endl;
	out << "course: " << obj.getcourse() << endl;
	out << "date of birth: " << obj.getyear() << endl;
	out << "marks: " << obj.getmark1() << obj.getmark2() << obj.getmark3() << obj.getmark4() << obj.getmark5() << endl;
}