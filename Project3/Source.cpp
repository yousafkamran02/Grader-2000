#include <iostream>
using namespace std;
void grade(int student[50], int num, int count[5], char grader[50])
{
	for (int i = 1; i <= num; i++)
	{
		if (student[i] <= 100 && student[i] >=90)
		{
		grader[i] = 'A';
		count[0] ++;
		}
		else if (student[i] < 90 && student[i] >= 70)
		{
		grader[i] = 'B';
		count[1] ++;
		}
		else if (student[i] < 70 && student[i] >= 55)
		{
		grader[i] = 'C';
		count[2] ++;
		}
		else if (student[i] < 55 && student[i] >= 45)
		{
		grader[i] = 'D';
		count[3] ++;
		}
		else if(student[i]<45&&student[i]>=0)
		{
		grader[i] = 'F';
		count[4] ++;
		}
	}
}
double avg(int student[50], int num)
{
	double sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum += student[i];
	}
	return sum / num;
}
float min(int student[50], int num)
{
	int temp = 100;
	for (int i = 0; i < num; i++)
	{
		if (temp > student[i] && student[i] >= 0)
		{
			temp = student[i];
		}
	}
	return temp;
}
float max(int student[50], int num)
{

	int temp = -1;
	for (int i = 0; i < num; i++)
	{
		if (temp < student[i] && student[i] <= 100)
		{
			temp = student[i];
		}
	}
	return temp;

}
int main()
{
	int num1, num2, mini_c1, mini_c2, max_c1, max_c2;
	double avg_c1, avg_c2;
	int count_c1[5] = { 0,0,0,0,0 }, count_c2[5] = { 0,0,0,0,0 };
	char grader_c1[50], grader_c2[50];
	cout << "\t\t\tWelcome to grader 2000";
	cout << endl;
	for (int i = 0; i <= 60; i++)
	{
		cout << "-";
	}
	cout << endl;
	cout << "Enter number of students of class 1 :";
	cin >> num1;

	cout << endl;
	int student1[50], student2[50];

	for (int i = 0; i < num1; i++)
	{
		cout << "Enter marks of class 1 student " << i + 1 << ":";
		cin >> student1[i];
	}
	cout << endl;
	cout << "Enter number of students of class 2 :";
	cin >> num2;
	for (int i = 0; i < num2 ; i++)
	{
		cout << "Enter marks of class 2 student " << i + 1 << ":";
		cin >> student2[i];
	}
	mini_c1 = min(student1, num1);
	avg_c1 = avg(student1, num1);
	max_c1 = max(student1, num1);
	grade(student1, num1, count_c1, grader_c1);
	cout << "\t\tCLASS DETAILS" << endl;
	for (int i = 0; i <= 60; i++)
	{
		cout << "_";
	}
	cout << endl;
	cout << "CLASS 1" << endl;
	for (int i = 0; i < num1; i++)
	{
		cout << "Student " << i + 1 << " got : " << student1[i] << " marks and go grade : " << grader_c1[i] << endl;
	}
	cout << "Highest Marks= " << max_c1 << endl;
	cout << "Lowest Marks= " << mini_c1 << endl;
	cout << "Average Marks= " << avg_c1 << endl;
	cout << "Number of A grade obtained: " << count_c1[0] << endl;
	cout << "Number of B grade obtained: " << count_c1[1] << endl;
	cout << "Number of C grade obtained: " << count_c1[2] << endl;
	cout << "Number of D grade obtained: " << count_c1[3] << endl;
	cout << "Number of F grade obtained: " << count_c1[4] << endl;
	cout << endl;
	for (int i = 0; i <= 60; i++)
	{
		cout << "_";
	}
	cout << endl;
	mini_c2 = min(student2, num2);
	max_c2 = max(student2, num2);
	avg_c2 = avg(student2, num2);
	grade(student2, num2, count_c2, grader_c2);
	cout << "CLASS 2" << endl;
	for (int i = 0; i < num2; i++)
	{
		cout << "Student " << i + 1 << "  got : " << student2[i] << " marks and got grade : " << grader_c2[i] << endl;
	}
	cout << "Highest Marks= " << max_c2 << endl;
	cout << "Lowest Marks= " << mini_c2 << endl;
	cout << "Average Marks= " << avg_c2 << endl;
	cout << "Number of A grade obtained: " << count_c2[0] << endl;
	cout << "Number of B grade obtained: " << count_c2[1] << endl;
	cout << "Number of C grade obtained: " << count_c2[2] << endl;
	cout << "Number of D grade obtained: " << count_c2[3] << endl;
	cout << "Number of F grade obtained: " << count_c2[4] << endl;
	cout << "\t\t\t\t\t\t\t\t\tCreated By:\n\t\t\t\t\t\t\t\t\t\tYousafKamran" << endl;
	return 0;
}
