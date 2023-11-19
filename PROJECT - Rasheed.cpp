/* 	FileName : Project Starlight Highschool.cpp
	Programmer : Abd Rasheed
	Programe Descriptions : to help Starlight Highschool managing student data
	Date : 15th November 2023
*/

#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

// Declaration of the arrays
	const int MAX_STUDENT=50;
	int studentID[MAX_STUDENT];
	string studentName[MAX_STUDENT];
	double scores[MAX_STUDENT];
	int attendance[MAX_STUDENT];
	char ans;
	int i;
	
void inputStudentData()
{
	for (i = 0; i < 50 ;i++)
	{	
	cout << "DETAILS OF STUDENT" << i + 1 << endl << endl;	
		
	cout<<"Enter the studentID: " <<endl;
	cin>> studentID[i];
	
	cout<<"Enter the studentName : "<<endl;
	cin >> studentName[i];
	
	cout<<"Enter the student scores : "<<endl;
	cin>> scores[i];
	
	cout<<"Enter the student attendance(%) : "<<endl;
	cin>> attendance[i];
	
	cout << "\n\n";
	
	cout<< "Do you wish to continue adding the records?? " <<endl;
	cin>> ans;
	
	if (ans=='n')
	{
		break;
	}
	
	}
return;
}

int main()
{
	inputStudentData();

}