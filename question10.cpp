#include <iostream>
#include <iomanip>
#include <cmath>
#include <string.h>

using namespace std;
int main()
{
    //inputs
  double unit_price;
  double quantity;
  double discount_percentage; 
  double shipping_fee;
  double units;
  
  
  //getline 
  string name;
  cout << "Enter Product:";
  getline (cin, name);
  cout << "Your Product is " <<name <<endl;
  cout << "Enter the following:" << endl;
  cout << "Unit Price:";
  cin >> unit_price;
  cout << "Quantity:";
  cin >> quantity;
  cout << "Discount Percentage:";
  cin >> discount_percentage;
  cout << "Shipping fee:";
  cin >> shipping_fee;
  cout << "Units:";
  cin >> units;
  
  //comps 
  
  double subtotal=unit_price*quantity;
  double discount_total = subtotal*(discount_percentage/100);
  double merchandise= subtotal- discount_total;
  double exact_boxes = quantity/units;
  double boxes_required = ceil(exact_boxes);
  double shipping_total= boxes_required*shipping_fee;
  double amount_due = (subtotal- discount_total + shipping_total);
  cout << "subtotal:" << subtotal << endl;
  cout << "Discount:" << discount_total << endl;
  cout << "merchandise:" << merchandise << endl;
  cout << "exact boxes:" << exact_boxes << endl;
  cout << "boxes:" << boxes_required << endl;
  cout << "shipping:" << shipping_total << endl;
  cout << "amount due:" << amount_due << endl;
  
     return 0;
}
