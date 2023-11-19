#include<iostream>
#include<iomanip>
#include<string>
#include<math.h>
using namespace std;

int maxStudents;
double scores[3];

//Functions needed to calculate the average
double calculateAverageScore(int maxStudents, double score[])
{
	double totalScore = 0, averageScore = 0;
	
	for(int i = 0;i<maxStudents; i++)
	{	
		//Calculating the total score of the students
			
		totalScore += scores[i];
		
	}
	
//Calculating the averagescore

averageScore = totalScore / maxStudents;

return averageScore;
	
}


int main()
{
	calculateAverageScore(maxStudents, scores);
	
	return 0;
}
