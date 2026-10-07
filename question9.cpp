#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
  double base_tuition;
  double process_fee_per;
  double down_payment;
  int months;
  
  cout << "Enter the following:" << endl;
  cout << "Base tuition:";
  cin >> base_tuition;
  cout << "Processing fee pergentage:";
  cin >> process_fee_per;
  cout << "down-payment amount:";
  cin >> down_payment;
  cout << "months:";
  cin >> months;
  
  double processingfee = (base_tuition*(process_fee_per/100));
  double adjusted_tuition = (base_tuition+processingfee);
  double balance = (adjusted_tuition-down_payment);
  double monthly_instal = (balance/months);
  
  cout << fixed << setprecision(2) << "Processing Fee:" << processingfee << endl;
  cout << fixed << setprecision(2) << "Adjusted tuition:" << adjusted_tuition << endl;
  cout << fixed << setprecision(2) << "Remaining balance:" << balance << endl;
  cout << fixed << setprecision(2) << "Monthly:" << monthly_instal << endl; 
  
    return 0;
}
