#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    //input
    double quizgrade;
    double labgrade;
    double projectgrade;
    double examgrade;
    double weightedgrade;
    double roundedgrade;
    
    cout << "Enter Quiz Grade:";
    cin >> quizgrade;
    cout << "Enter Lab Grade:";
    cin >> labgrade;
    cout << "Enter Project Grade:";
    cin >> projectgrade;
    cout << "Enter Exam Grade:";
    cin >> examgrade;
    
    //computation
    weightedgrade = (quizgrade * (20/100.0))+(labgrade*(25/100.0))+(projectgrade*(25/100.0))+(examgrade*(30 / 100.0));
    roundedgrade = round(weightedgrade);
    
    //output
    cout << fixed << setprecision(2);
    cout << "\nFinal Grade: " << weightedgrade <<endl;
    
    cout << fixed << setprecision(0);
    cout << "Rounded Grade: " << roundedgrade <<endl;
    
    cout << "Cast to int: " << (int)weightedgrade <<endl;

    return 0;
}

