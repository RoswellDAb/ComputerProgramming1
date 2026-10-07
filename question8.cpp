#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
  //input three decimal temp
  
  double temp_one;
  double temp_two;
  double temp_three;
  
  cout << "Enter the following:" << endl;
  cout << "Temperature 1:";
  cin >> temp_one;
  cout << "Temperature 2:";
  cin >> temp_two;
  cout << "Temperature 3:";
  cin >> temp_three;
  
  double average= (temp_one+temp_two+temp_three)/3;
  double absolute_diff = fabs(temp_one-temp_three);
  
  //outputs
  cout << fixed << setprecision(3)<< "Average:" << average << endl;
  cout << fixed << setprecision(3)<< "Absolute difference:" << absolute_diff << endl; 
  cout << fixed << setprecision(0) << "Floor:" << floor(average) << endl;
  cout << fixed << setprecision(0) <<"Ceiling:" << ceil(average) << endl;
  cout << fixed << setprecision(0) <<"Trunc:" << trunc(average) << endl;
  cout << fixed << setprecision(0) <<"Round:"<< round(average) << endl;
  
      return 0;
}

