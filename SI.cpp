#include <iostream>
using namespace std;
int main()
{
    int p, r, t;
    int SI;
    cout<< "enter values";
    cin >> p;
    cout << "p = " << p << endl;
    cin >> r;
    cout << "r = " << r << endl;
    cin >> t;
    cout << "t = " << t << endl;

    SI = (p * r * t) / 100;
    cout << "Simple Interest= " << SI << endl;

    return 0;
}