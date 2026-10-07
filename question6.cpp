#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;


int main()
{
    //input
    long long bytes;
    double kb;
    double mb;
    double gb;
    int wholemb;


    cout << "Enter File Size in Bytes:";
    cin >> bytes;

    kb = bytes / 1024.0;
    mb = kb / 1024.0;
    gb = mb / 1024.0;
    wholemb = (int)mb;

    cout << fixed << setprecision(2);
    cout << "Kilobytes: " << kb <<endl;
    cout << "Megabytes: " << mb <<endl;

    cout << fixed << setprecision(4);
    cout << "Gigabytes: " << gb <<endl;

    cout << fixed << setprecision(0);
    cout << "Whole MB: " << wholemb <<endl;

    return 0;
}

