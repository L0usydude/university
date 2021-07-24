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
std::string student::getname() const
{
	return name;
}
std::string student::getsurname() const
{
	return surname;
}
std::string student::getpatronymic() const
{
	return patronymic;
}
std::string student::getcourse() const
{
	return course;
}
int student::getyear() const
{
	return year;
}
int student::getynumber() const
{
	return number;
}
int student::getmark1() const
{
	return mark1;
}
int student::getmark2() const
{
	return mark2;
}
int student::getmark3() const
{
	return mark3;
}
int student::getmark4() const
{
	return mark4;
}
int student::getmark5() const
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
	return *this;
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
	return *this;
}
std::ostream& operator<<(std::ostream& out, student& obj)
{
	out << "FIO: " << obj.getname() << " " << obj.getsurname() << " " << obj.getpatronymic() << endl;
	out << "course: " << obj.getcourse() << endl;
	out << "date of birth: " << obj.getyear() << endl;
	out << "marks: " << obj.getmark1() << obj.getmark2() << obj.getmark3() << obj.getmark4() << obj.getmark5() << endl;
	return out;
}
std::ostream& operator<<(std::ostream& out, student&& obj)
{
	out << "FIO: " << obj.getname() << " " << obj.getsurname() << " " << obj.getpatronymic() << endl;
	out << "course: " << obj.getcourse() << endl;
	out << "date of birth: " << obj.getyear() << endl;
	out << "marks: " << obj.getmark1() << obj.getmark2() << obj.getmark3() << obj.getmark4() << obj.getmark5() << endl;
	return out;
}

void sort(student* A, int size)
{
	student tmp;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size-1-i; j++)
		{
			if (A[j].getcourse() > A[j + 1].getcourse())
			{
				tmp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = tmp;
			}
		}
	}
}

void elder(student* J, int size)
{
	int tmt = J[0].getyear();
	for (int i = 0; i < size; i++)
	{
		if (J[i].getyear() < tmt)
		{
			tmt = J[i].getyear();
		}
	}
	cout << "eldest students: ";
	for (int i = 0; i < size; i++)
	{
		if (tmt == J[i].getyear())
		{
			cout << J[i].getname() << " " << J[i].getsurname() << " " << J[i].getpatronymic() << endl << endl;
		}
	}
}

void young(student* C, int size)
{
	int tmt = C[0].getyear();
	for (int i = 0; i < size; i++)
	{
		if (C[i].getyear() > tmt)
		{
			tmt = C[i].getyear();
		}
	}
	cout << "youngest students: ";
	for (int i = 0; i < size; i++)
	{
		if (tmt == C[i].getyear())
		{
			cout << C[i].getname() << " " << C[i].getsurname() << " " << C[i].getpatronymic() << endl << endl;
		}
	}
}
double* addend(double* H, int& size, double value,bool param)
{
	double* tmp = new double[size + 1];
	if (!param)
	{
		tmp[0] = value;
		return tmp;
	}
	for (int j = 0; j < size; j++)
	{
		tmp[j] = H[j];
	}
	tmp[size] = value;
	size++;
	return tmp;

}
double* middle(student* A, int size, int& groupcount)
{
	student tmp;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (A[j].getynumber() > A[j + 1].getynumber())
			{
				tmp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = tmp;
			}
		}
	}
	int p = 1;

	for (int i = 0; i < size - 1; i++)
	{
		if (A[i].getynumber() != A[i + 1].getynumber())
			groupcount++;
	}
	int sizex = 1;
	double* marksofgroup = new double[sizex];
	double summ1 = A[0].getmark1();
	double summ2 = A[0].getmark2();
	double summ3 = A[0].getmark3();
	double summ4 = A[0].getmark4();
	double summ5 = A[0].getmark5();
	bool flag = false;

	for (int i = 0; i < size; i++)
	{
		

		if (A[i].getynumber() == A[i + 1].getynumber())
		{
			summ1 += A[i+1].getmark1();
			summ2 += A[i+1].getmark2();
			summ3 += A[i+1].getmark3();
			summ4 += A[i+1].getmark4();
			summ5 += A[i+1].getmark5();
			p++;
		}
		else
		{
			/*marksofgroup[l] = summ1 / p;
			l++;
			marksofgroup[l] = summ1 / p;
			l++;
			marksofgroup[l] = summ1 / p;
			l++;
			marksofgroup[l] = summ1 / p;
			l++;
			marksofgroup[l] = summ1 / p;
			l++;*/
			marksofgroup = addend(marksofgroup, sizex, summ1 / p, flag);
			flag = true;
			marksofgroup = addend(marksofgroup, sizex, summ2 / p , flag);
			marksofgroup = addend(marksofgroup, sizex, summ3 / p, flag);
			marksofgroup = addend(marksofgroup, sizex, summ4 / p, flag);
			marksofgroup = addend(marksofgroup, sizex, summ5 / p, flag);
			p = 1;
			summ1 = A[i + 1].getmark1();
			summ2 = A[i + 1].getmark2();
			summ3 = A[i + 1].getmark3();
			summ4 = A[i + 1].getmark4();
			summ5 = A[i + 1].getmark5();
			

		}
	}
	return marksofgroup;
}
student* findbest(student* A, int size)
{
	student tmp;
	int groupcount = 1;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size - 1 - i; j++)
		{
			if (A[j].getynumber() > A[j + 1].getynumber())
			{
				tmp = A[j];
				A[j] = A[j + 1];
				A[j + 1] = tmp;
			}
		}
	}

	int p = 1;
	student max = A[0];
	for (int i = 0; i < size - 1; i++)
	{
		if (A[i].getynumber() != A[i + 1].getynumber())
			groupcount++;
	}
	student* result = new student [groupcount];
	int check = 0;
	for (int i = 0; i < size; i++)
	{
		if (A[i].getynumber() == A[i + 1].getynumber())
		{
			if (srznach(max) < srznach(A[i]))
			{
				max = A[i];
			}
		}
		else
		{
			result[check] = max;
			max = A[i + 1];
			check++;
		}
	}
	return result;
}

double srznach (const student& K)
{
	return (K.getmark1() + K.getmark2() + K.getmark3() + K.getmark4() + K.getmark5()) / 5;
}

