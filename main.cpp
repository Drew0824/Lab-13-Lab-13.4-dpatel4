#include <iostream>
#include <iomanip>
using namespace std;

int main() {
char beverage = 0;
int coffee = 0;
int tea = 0;
int soda = 0;
int orangejuice =0;  
int vote = 0;
int people = 1;
int total = 0;

do
{
      cout << endl << endl;
      cout << "1. Coffee" << endl;
      cout << "2. Tea" << endl;
      cout << "3. Soda"  << endl;
      cout << "4. Orange Juice" << endl;



        cout << "Please input the favorite beverage of person #" << people << endl;
        cout << "Choose 1, 2, 3, or 4 from the above menu or -1 to exit the program." << endl;
        cout << "Enter -1 to Quit" << endl;
      cin >> vote;
      

  switch(beverage)
  {
    case '1': coffee++;
              break;
    case '2': tea++;
              break;
    case '3': soda++;
              break;
    case '4': orangejuice++;
              break;  
} 
people++;

}
while (vote != -1);
  {
  cout << "The total number of people surveyed is " << people << endl;
  cout << "The results are as follows:" << endl;
  cout << "Beverage and Number of Votes"<< endl; 
  cout << "Coffee: " << coffee << endl;
  cout << "Tea: " << tea << endl;
  cout << "Soda: " << soda << endl;
  cout << "Orange Juice: " << orangejuice << endl;

      }
  



}