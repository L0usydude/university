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

	string getname();
	
	string getsurname();
	
	string getpatronymic();
	
	string getcourse();
	
	int getyear();
	
	int getynumber();
	
	int getmark1();
	
	int getmark2();
	
	int getmark3();
	
	int getmark4();

	int getmark5();

	student& operator= (const student& asd);

	student& operator= (student&& asd);


};
std::ostream& operator<<(student& obj, std::ostream& out);
std::ostream& operator<<(student&& obj, std::ostream& out);
