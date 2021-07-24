#include "students.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;


int main()
{
	ifstream fin("archive.txt");
	ofstream fout;
	int N;
	fin >> N;
	student* mass = new student[N];
	for (int i = 0; i < N; i++)
	{
		string tmpname,tmpsurname,tmppart,tmpcourse;
		int tmpnum, tmpyear, tmpm1, tmpm5, tmpm2, tmpm3, tmpm4;
		fin >> tmpname >> tmpsurname >> tmppart;
		fin >> tmpyear;
		fin >> tmpcourse;
		fin >> tmpnum >> tmpm1 >> tmpm2 >> tmpm3 >> tmpm4 >> tmpm5;
		mass[i].setinfo(tmpname, tmpsurname, tmppart, tmpyear, tmpcourse, tmpnum, tmpm1, tmpm2, tmpm3, tmpm4, tmpm5);
	}
	int groupcount = 1;
	double* marks = middle(mass, N, groupcount);
	for (int i = 0; i < groupcount; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << marks[i * 5 + j] << " ";
		}
		cout << endl;
	}
	student* res = findbest(mass, N);
	for (int i = 0; i < groupcount; i++)
	{
		cout << res[i].getname();
		cout << endl;
	}



	
	
}

