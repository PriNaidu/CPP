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

// C++ program to demonstrate the 
// cin object 
// #include <iostream> 
// using namespace std; 
  
// // Driver Code 
// int main() 
// { 
//     int s; 
//     // Take input using cin 
//     cin >> s; 
  
//     // Print output 
//     cout << s; 
  
//     return 0; 
// }

// #include <iostream>
// using namespace std;

// int main() {
//   int x;
//   cout << "Type a number: "; // Type a number and press enter
//   cin >> x; // Get user input from the keyboard
//   cout << "Your number is: " << x;
//   return 0;
// }
