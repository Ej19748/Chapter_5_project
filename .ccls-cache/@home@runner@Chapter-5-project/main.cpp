#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main() 
{
  ifstream input_file;
  string years;
  cout << "population growth" << endl;
  cout << "-----------------" << endl;
  input_file.open ("People.txt");
  if (input_file)
  {
    while (getline(input_file, years))
    {
      cout << years << endl;
    }
    input_file.close();
    return 0;
  }
}