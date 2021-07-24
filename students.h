#pragma once
#include <iostream>
#include <string>
class student
{
private:
	std::string name;
	std::string surname;
	std::string patronymic;
	int year;
	std::string course;
	int number;
	int mark1;
	int mark2;
	int mark3;
	int mark4;
	int mark5;
public:
	student(std::string namex, std::string surnamex, std::string patronymicx, int yearx, std::string coursex, int numberx, int mark1x, int mark2x, int mark3x, int mark4x, int mark5x);

	student();

	student(const student& obj);
	
	student(student&& obj);
	
	void setinfo(std::string namex, std::string surnamex, std::string patronymicx, int yearx, std::string coursex, int numberx, int mark1x, int mark2x, int mark3x, int mark4x, int mark5x);

	std::string getname()const;
	
	std::string getsurname()const;
	
	std::string getpatronymic()const;
	
	std::string getcourse()const;
	
	int getyear()const;
	
	int getynumber()const;
	
	int getmark1()const;
	
	int getmark2()const;
	
	int getmark3()const;
	
	int getmark4() const;

	int getmark5() const; 

	student& operator= (const student& asd);

	student& operator= (student&& asd);


};
std::ostream& operator<< (std::ostream& out, student& obj);
std::ostream& operator<< (std::ostream& out, student&& obj);
void sort(student* A, int size);
void elder(student* B, int size);
void young(student* C, int size);
double* middle(student* D, int size, int& groupcount);
double* addend(double* H, int &size, double value,bool param);
double srznach(const student& K);
student* findbest(student* A, int size);