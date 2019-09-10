#include<iostream>
#include<string>
using namespace std;
char grade;
int numstudent,score[100];
void Liststudent(string name[100],int score[100],int);
char Calgrade(int);
char main()
{	
	string name[100];
	cout << "Input number of student : ";
	cin >> numstudent;
	for (int l = 0 ; l < numstudent ; l++)
	{
	cout << "Input name : ";
	cin >> name[l];
	cout << "Input score : ";
	cin >> score[l];
	cout << endl;
	}

	Liststudent(name,score,numstudent);
	
}
void Liststudent(string name[100],int score[100], int numstudent)
{

	for (int l = 0 ; l < numstudent ; l++)
	{
	cout <<"Student Name : "<<name[l]<< "\tScore : "<<score[l]<<" Your grade is "<<Calgrade(score[l])<<endl;
	}
	
}
char Calgrade(int score)
{	
	
	if (score>=80 && score<=100)
		grade = 'A';
	else if (score>=70 && score<80)
		grade = 'B';
	else if (score>=60 && score<70)
		grade = 'C';
	else if (score>=50 && score<60)
		grade = 'D';
	else 
		grade = 'F';
	return(grade);
	
	}
	
