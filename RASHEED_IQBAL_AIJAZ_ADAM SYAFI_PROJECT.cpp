#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

// Declare the arrays
int maxStudents;
double score[3];

char ans;
int i;

const int MAX_STUDENTS = 50;
int studentID[MAX_STUDENTS];
string studentName[MAX_STUDENTS];
double scores[MAX_STUDENTS];
int attendance[MAX_STUDENTS];
double averageScore = 0.0;


void inputStudentData()
{
	for (i = 0; i < 50 ;i++)
	{	
	cout << "DETAILS OF STUDENT " << i + 1 << endl << endl;	
		
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
	
	cout << endl << endl;
	
	if (ans=='n')
	{
		break;
	}
	
	}
return;
}

//Functions needed to calculate the average
double calculateAverageScore(int maxStudents, double score[])
{
	double totalscore = 0, averageScore = 0;
	
	for(int i = 0;i<maxStudents; i++)
	{	
		//Calculating the total score of the students
			
		totalscore += score[i];
		
	}
	
//Calculating the averagescore

averageScore = totalscore / maxStudents;

return averageScore;
	
}

// Function to display student records
void displayStudentRecords(int studentID[], string studentName[15], double scores[], int attendance[], double averageScore) {
	
	// Display header
    cout << "Student Records:\n\n";
    cout << "=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=\n";
    cout << "\t\t ID\t\tName\t\t\tAttendance\t\t\tScores\n";
    cout << "-------------------------------------------------------------------------------------------------\n";

    // Display student records
    for (int i = 0; i < 50; i++) {
        cout << "  " << i + 1 << ". " << "\t\t" << studentID[i] << "\t\t" << studentName[i] << "\t\t\t" << attendance[i] << "\t\t\t\t" << scores[i] << "\n";
    }

    // Display average score
    cout << "=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=*=";
    cout << "\n\nAverage Score: " << averageScore << "\n";
}


int main()
{
	inputStudentData();
	calculateAverageScore(maxStudents, score);
	displayStudentRecords(studentID, studentName, scores, attendance, averageScore);
	
	return 0;
}