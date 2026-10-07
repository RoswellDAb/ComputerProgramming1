#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
    //input
    double x1;
    double y1;
    double x2;
    double y2;
    double DX;
    double DY;
    double distance;
    double rounded_distance;

    cout << "Enter x1:";
    cin >> x1;
    cout << "Enter y1:";
    cin >> y1;
    cout << "Enter x2:";
    cin >> x2;
    cout << "Enter y2:";
    cin >> y2;


    //computations
    DX = x2 - x1;
    DY = y2 - y1;
    distance = sqrt(pow(DX, 2) + pow (DY, 2));
    rounded_distance = round(distance);

    cout << fixed << setprecision(3);
    cout << "dx: " << DX <<endl;
    cout << "dy: " << DY <<endl;
    cout << "Distance: " << distance <<endl;
    cout << fixed << setprecision(0);
    cout << "Rounded Distance: " << rounded_distance << endl;


    return 0;
}
