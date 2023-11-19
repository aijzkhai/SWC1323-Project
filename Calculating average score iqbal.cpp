#include<iostream>
#include<iomanip>
#include<string>
#include<math.h>
using namespace std;

int maxStudents;
double score[3];

//Functions needed to calculate the average
double calculateAverageScore(int maxStudents, double score[])
{
	double totalscore = 0, averageScore = 0;
	
	for(int i = 0;i<maxStudents; i++)
	{	
		//Calculating the total score of the students
			
		totalscore=totalscore+score[i];
		
	}
	
//Calculating the averagescore

averageScore = totalscore / maxStudents;

return averageScore;
	
}


int main()
{
	calculateAverageScore(maxStudents, score);
	
	
	return 0;
}
