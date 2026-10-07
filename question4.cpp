#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
    double wallwidth;
    double wallheight;
    double coats;
    double coverage;
  cout << "Enter Wall width:";
  cin >> wallwidth;
  cout << "Enter Wall height:";
  cin >> wallheight;
  cout << "Enter Coats:";
  cin >> coats;
  cout << "Enter coverage:";
  cin >> coverage;
  
  // computations 
  
  double wallarea = (wallwidth*wallheight);
  double totalpaintarea = (wallarea*coats);
  double numcans = (totalpaintarea/coverage);
  
  cout << fixed << setprecision(2) << "Wall area:"<< wallarea << endl;
  cout << fixed << setprecision(2)<<"Total Paint area:"<< totalpaintarea << endl;
  cout << fixed << setprecision(2)<<"Exact Number of cans:" << numcans << endl;
  cout << fixed << setprecision(0) << "Available Cans:" <<ceil(numcans) << endl;
  
  
  
     return 0;
}
