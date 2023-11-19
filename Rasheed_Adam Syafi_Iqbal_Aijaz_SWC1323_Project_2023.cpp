/* 	FileName : Project Starlight Highschool.cpp
	Programmer : Abdul Rasheed, Adam Syafi, Darwisy Iqbal , Aijaz
	Programe Descriptions : to help Starlight Highschool managing student data
	Date : 15th November 2023
*/

#include <iostream>
#include <iomanip>
#include <math.h>
#include <string>
using namespace std;

// Declaration of constant
const int MAX_STUDENTS = 50;

// Declaration of the arrays
int studentID[MAX_STUDENTS];
string studentName[MAX_STUDENTS];
double scores[MAX_STUDENTS];
int attendance[MAX_STUDENTS];
int i, numStudents; 
double averageScore = 0.0;


// Function to input student data
void inputStudentData(int numStudents)
{
    for (int i = 0; i < numStudents; i++)
    {
        cout << "DETAILS OF STUDENT " << i + 1 << "\n" << endl;

        cout << "Enter the studentID : " << endl;
        cin >> studentID[i];

        cout << "Enter the studentName : " << endl;
        cin >> studentName[i];
       
        cout << "Enter the student scores : " << endl;
        cin >> scores[i];

        cout << "Enter the student attendance(%): " << endl;
        cin >> attendance[i];

        cout << "\n\n";
    }
}



// Function to calculate average scores
double calculateAverageScores(int numStudents, double scores[])
{
    double totalScore = 0;

    for (int i = 0; i < numStudents; i++)
    {
        totalScore += scores[i];
    }
    
	averageScore = totalScore / numStudents;

	return averageScore;
}



// Function to display student records
void displayStudentRecords(int numStudents, int studentID[], string studentName[15], double scores[], int attendance[], double averageScore)
{
    // Display header
    cout << "Student Records:\n\n";
    cout << "=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n";
    cout << "\t\t ID\t\tName\t\t\tAttendance\t\t\tScores\n";
    cout << "-------------------------------------------------------------------------------------------------\n";

    // Display student records
    for (int i = 0; i < numStudents; i++)
    {
        cout << "  " << i + 1 << ". " << "\t\t" << studentID[i] << "\t\t" << studentName[i] << "\t\t\t" << attendance[i] << "\t\t\t\t" << scores[i] << "\n";
    }

    // Display average score
    cout << "=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n";
    cout << "\nAverage Score: " << averageScore << "\n";
}



int main()
{
    cout << "Enter the number of students: ";
    cin >> numStudents;
    
    cout << "\n";

    if (numStudents > 0 && numStudents <= MAX_STUDENTS)
    {
        inputStudentData(numStudents);
        calculateAverageScores(numStudents, scores);
        displayStudentRecords(numStudents, studentID, studentName, scores, attendance, averageScore);
    }
    else
    {
        cout << "Invalid number of students. Please enter a number between 1 and 50 ";
    }

    return 0;
}
