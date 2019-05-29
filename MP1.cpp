#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
 
int main () // Main
{
  	int student=50; // Initializing variables
  	string name[student];
  	long double exp1[student], exp2[student], exp3[student], exp4[student]; // Initialization for Experiments
  	double st1[student], st2[student], st3[student], st4[student]; // Initialization for Skills Test
  	double mp1[student], mp2[student]; // Initialization for Machine Problems
  	double pwe[student], ppe[student]; // Initialization for Prelims
  	double fwe[student], fpe[student]; // Initialization for Finals
  	double transmuted_grade[student]; // Initialization for Transmuted Grade
	double final_grade[student]; // Initialization for Final Grade
  	
  
  	for (int i=0; i<student; i++)
  	{
	cout << "Enter name of student: "; // Inputting the student's whole name
  	cin >> name[i];
  	cout << "Enter scores for" << endl; // Grade input for experiments
  	cout << "Experiments 1-4 (100): ";
  	cin >> exp1[i] >> exp2[i] >> exp3[i] >> exp4[i]; 
	cout << "Skills Tests 1-4 (100): "; // Grade input for skills tests
  	cin >> st1[i] >> st2[i] >> st3[i] >> st4[i];
	cout << "Machine Problems 1-2 (100): "; // Grade input for machine problems
  	cin >> mp1[i] >> mp2[i];
	cout << "Preliminaries Written(30) Practical(70): "; // Grade input for prelims
  	cin >> pwe[i] >> ppe[i];	
  	cout << "Finals Written(30) Practical(70): "; // Grade input for finals
  	cin >> fwe[i] >> fpe[i];
  	cout << endl;
 	
		final_grade[i] += exp1[i]/100*5; //Calculations for final grade
		final_grade[i] += exp2[i]/100*5;
		final_grade[i] += exp3[i]/100*5;
		final_grade[i] += exp4[i]/100*5;
		final_grade[i] += st1[i]/100*5;
		final_grade[i] += st2[i]/100*5;
		final_grade[i] += st3[i]/100*5;
		final_grade[i] += st4[i]/100*5;
		final_grade[i] += mp1[i]/100*10;
		final_grade[i] += mp2[i]/100*10;
		final_grade[i] += (pwe[i]+ppe[i])/100*20;
		final_grade[i] += (fwe[i]+fpe[i])/100*20;
	}

		
		for(int i=0; i<student; i++) // Loop function to determine the transmutation grade from the raw grade
		{
		if(final_grade[i] >= 60.00 && final_grade[i] <= 64.44 )
		{
			transmuted_grade[i] = 3.00;
		}
		else if(final_grade[i] >= 64.45 && final_grade[i] <= 68.89 )
		{
			transmuted_grade[i] = 2.75;
		}
		else if(final_grade[i] >= 68.90 && final_grade[i] <= 73.33 )
		{
			transmuted_grade[i] = 2.50;
		}
		else if(final_grade[i] >= 73.34 && final_grade[i] <= 77.78 )
		{
			transmuted_grade[i] = 2.25; 
		}
		else if(final_grade[i] >= 77.79 && final_grade[i] <= 82.22 )
		{
			transmuted_grade[i] = 2.00;
		}
		else if(final_grade[i] >= 82.23 && final_grade[i] <= 86.67 
		){
			transmuted_grade[i] = 1.75;
		}
		else if(final_grade[i] >= 86.68 && final_grade[i] <= 91.11 )
		{
			transmuted_grade[i] = 1.50;
		}
		else if(final_grade[i] >= 91.12 && final_grade[i] <= 96.56 )
		{
			transmuted_grade[i] = 1.25;
		}
		else if(final_grade[i] >= 95.57 )
		{
			transmuted_grade[i] = 1.00;
		}
		else
		{
			transmuted_grade[i] = 5.00;
		}
	}
	
	cout<<endl;
	cout<<"NAME"<< "\t\t\t" <<"FINAL GRADE"<< "\t\t" <<"TRANSMUTED GRADE"<< "\t\t"<<"PASS or FAIL"<<endl;
	for(int i=0; i<student; i++) // Sorting the students and their grades
	{
		cout << fixed << setprecision(2) << left;
		cout << name[i]<< "\t\t\t" <<final_grade[i]<< "\t\t" <<transmuted_grade[i]<< "\t\t";
	
		if(transmuted_grade[i] <= 3.00)
		{
			cout <<"PASS"<< endl; // Pass or fail identifier
		}
		else
		{
			cout <<"FAIL"<< endl;
		}
	}
	
		for (int i=0; i<student-1; i++)
	{
		for (int j=i+1; j<student; j++)
		{
			if (final_grade[i] < final_grade[j])
			{
				string temp1 = name[i];
				name[i] = name[j];
				name[j] = temp1;
				
				double temp2 = final_grade[i];
				final_grade[i] = final_grade[j];
				final_grade[j] = temp2;
			}
		}
	}
	for (int i=0; i<10; i++)
	{
		cout << "Top " << i+1 << ": " << name[i] << endl; // Output for the top 10 students
	}
	
   return 0;
}
