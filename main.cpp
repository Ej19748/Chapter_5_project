#include <iostream>
using namespace std;
int main() 
{
  float starting_num_of_organisms, average_daily_population_increase = 0.0;
  int num_of_days_to_multiply;
  cout << "Enter the starting number of organisms: ";
  cin >> starting_num_of_organisms;
  while (starting_num_of_organisms < 2)
    {
      cout << "The starting number of       organisms must be at least 2." <<      endl;
      cout << "Enter the starting           number of organisms: ";
      cin >> starting_num_of_organisms;
    }
  cout << "Enter the average daily population increase (as a percentage): ";
  cin >> average_daily_population_increase;
  while (average_daily_population_increase < 0)
    {
      cout << "The average daily population increase must be a positive value." << endl;
      cout << "Enter the average daily population increase (as a percentage): ";
      cin >> average_daily_population_increase;
      
    }
  cout << "Enter the number of days they will multiply: ";
  cin >> num_of_days_to_multiply;
  while (num_of_days_to_multiply < 1)
    {
      cout << "The number of days must be at least 1." << endl; 
      cout << "Enter the number of days they will multiply: ";
      cin >> num_of_days_to_multiply;
    }
  for (int i = 0; i < num_of_days_to_multiply; i++)
    {
      cout << "Size of the population for day " << (i + 1) << ": " << starting_num_of_organisms << endl;
      starting_num_of_organisms += (starting_num_of_organisms * average_daily_population_increase) / 100;
        
        
    }
}