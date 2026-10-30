#include <iostream>
using namespace std;
int main()
{
   float n;
   cout << "Enter a number (MAX 4 DIGITS:";
   cin >> n;
   if (n <= 0){
       cout << n << " must be a positive number."; 
   }
   else if ( n<=9){
       cout << n << " is a 1 digit positive number."; }
       else if (n<=99){
           cout << n << " is a 2 digit positive number.";}
           else if (n<=999){
               cout << n <<" is a 3 digit positive number.";}
               else if (n<=9999){
                   cout << n <<" is a 4 digit positive number.";
               }
               
               else { cout << "invalid input";}
           
       
    return 0;
}
