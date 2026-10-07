#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int main()
{
    double n_attendees;
    double n_seats;
    int totalseats;
  cout << "Enter Number of attendees:";
  cin >> n_attendees;
  cout << "Enter Seats per table:";
  cin >> n_seats;
  float exact_table;
  exact_table = round(((double)n_attendees/n_seats)*100)/100;
  int tablesrequired = ceil(exact_table);
  int total_available_seats = (tablesrequired*n_seats);
  int unusedseats =(total_available_seats- n_attendees);
  cout << "Exact Tables:" << fixed << setprecision(2) << exact_table << endl; 
  cout << setprecision(0) << "Tables Required:" << tablesrequired << endl; 
  cout << "Total Available Seats:" << total_available_seats <<endl;
  cout << "Unused Seats:"<< unusedseats;
  
    return 0;
}
