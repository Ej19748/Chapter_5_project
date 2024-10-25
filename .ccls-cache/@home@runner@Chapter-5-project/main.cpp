#include <iostream>
using namespace std;
int main() 
{
  string student, first, last;
  int numStudents;
  cout << "Enter the number of students: ";
  cin >> numStudents;
  cout << "Enter the name of student 1: ";
  cin >> student;
  first = last = student;
  for (int i = 1; i < numStudents; i++)
    {
      cout << "Enter the name of student " << (i + 1) << ": ";
      cin >> student;
      if (student < first)
        first = student;
      if (student > last)
        last = student;
      {
        cout << "First student in line = " << first << endl;
        cout << "Last student in line = " << last << endl;
      return 0;  
      }
      
    }
}