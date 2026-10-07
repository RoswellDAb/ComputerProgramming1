#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    setprecision(2);
    double basefare;
    double distance;
    double rate;
    double tollfee;
    double bookingfee_percentage;
    int passengers;
 //inputs 
  cout << "Enter the following" << endl;
  cout << "Base Fare:";
  cin >> basefare;
  cout << "Distance(Kilometer):";
  cin >> distance;
  cout << "Rate:";
  cin >> rate;
  cout << "Toll fee:";
  cin >> tollfee;
  cout << "Booking Fee:";
  cin >> bookingfee_percentage;
  cout << "Number of Passengers:";
  cin >> passengers;
  double distancecharge=(distance*rate);
  double prefee=(basefare+distancecharge+tollfee);
  double bookingfeetotal=(prefee*(bookingfee_percentage/100));
  double total=(prefee+bookingfeetotal);
  double perpassenger=(total/passengers);
 
  cout << setprecision(4) <<"Distance Charge:"<< distancecharge << endl;
  cout << setprecision(4) << "Pre-fee:" << prefee << endl;
  cout << setprecision(4) <<"Booking Fee:"<< bookingfeetotal<< endl;
  cout << setprecision(5) <<"Total:"<< total<<endl;
  cout << setprecision(4) <<"Per Passenger:" << perpassenger << endl;
  
 return 0;
}
