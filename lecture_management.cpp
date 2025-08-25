#include<iostream>
#include<string.h>
using namespace std;

class Lecturer
{	
	private:
		
		string lecturerName;
		string subjectName;
		string courseName;
		int lecturesCount;
		
	public:
		
		Lecturer(string n = "", string s = "", string c = "", int count = 0) 
		{
			lecturerName = n;
			subjectName = s;
			courseName = c;
			lecturesCount = count;
		}
		
		void inputDetails()
		{
			cin.ignore();
			cout << "Enter lecturer name: ";
			getline(cin,lecturerName);	
			cout << "Enter subject name: ";
			getline(cin,subjectName);
			cout << " Enter cource name: ";
			getline (cin,courseName);
			cout << "Enter number of lecture: ";
			cin >> lecturesCount ;
		}
	
		void dispalyDetails()
		{
			cout << "\n---------------------------------";
	        cout << "\n Lecturer Name       : " << lecturerName;
	        cout << "\n Subject Name        : " << subjectName;
	        cout << "\n Course Name         : " << courseName;
	        cout << "\n Number of Lectures  : " << lecturesCount;
	        cout << "\n---------------------------------\n";
    	}
};

int main()
{
	Lecturer lec[5];
	int choice,total=0;
	
	do
	{
		cout << "\n====================================";
        cout << "\n      LECTURE MANAGEMENT SYSTEM";
        cout << "\n====================================";
        cout << "\n 1. Add Lecture Details";
        cout << "\n 2. Show All Lecture Details";
        cout << "\n 3. Exit";
        cout << "\n------------------------------------";
        cout << "\n Enter your choice: ";
		cin >> choice;
		
		if(choice == 1)
		{
			if(total < 5)
			{
				lec[total].inputDetails();
				total++;
				cout << "\nLecture details added successfully!\n";
			}
			else
			{
				cout << "You can store only 5 lecture details ...\n";
			}
		}
		else if(choice == 2)
		{
			if (total == 0)
			{
				cout << "No lecture details available \n";
			}
			else
			{
				cout << "\n===== Showing All Lecture Details =====\n";
				for (int i=0; i < total; i++)
				{	
					cout << "\nLecturer " << i + 1 << ":";
					lec[i].dispalyDetails();
				}
			}
		}
	else if(choice == 3)
	{
		cout << "Exiting Program..\n";
	}
	else
	{
		cout << "Invalid Choice. Please try again.\n";
	}
	
	}while(choice != 3);
	
	return 0;
}

