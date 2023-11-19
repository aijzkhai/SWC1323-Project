#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>
using namespace std;

// Declare the arrays
const int MAX_STUDENTS = 50;
int studentID[MAX_STUDENTS];
string studentName[MAX_STUDENTS];
double scores[MAX_STUDENTS];
int attendance[MAX_STUDENTS];
double averageScore = 0.0;



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


int main() {
	
    // Display student records
    displayStudentRecords(studentID, studentName, scores, attendance, averageScore);
    
    return 0;
}

//#motherismothering
//#meowject2023
