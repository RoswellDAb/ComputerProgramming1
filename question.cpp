#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  //input
  double mealprice;
  double quantity;
  double service;
  double students; 
  setprecision(2); 
  cout << "enter Meal Price:";
  cin >> mealprice;
  
  cout << "enter Quantity:";
  cin >> quantity;
 
  double subtotal=mealprice*quantity;
  
  // mealprice * quantity 
  cout << fixed << setprecision(2) << "Subtotal:₱" <<subtotal << endl;
  
  cout << "enter service-charge percentage:";
  cin >> service; 
  double servicecharge=subtotal*(service/100);
  cout << "service charge:₱"
  << servicecharge << endl;
  double finalbill=subtotal+servicecharge;
  cout << fixed << setprecision(2) << "final bill:₱"<<finalbill<< endl;
  cout << fixed << setprecision(2) << "enter number students:";
  cin >> students;
  cout << fixed << setprecision(2) << "Share:₱" << (finalbill/students);
  
      return 0;
}
