// #include <iostream>
// using namespace std;
// int main(){
//     cout << "enter values";
//     int a, b, res;
//     cin >> a; cin >> b;
//     a = 20; b = 10;
//     a + b = res;
//     cout << "res = " << res;
//     return 0;
// }

// Errors:
// a + b = res; is invalid. (Should be res = a + b;)
// User input is overwritten by a=20, b=10.
// No newline after text (not error, but bad practice).

// Corrected Code:

#include <iostream>
using namespace std;
int main(){
    cout << "enter values\n";
    int a, b, res;
    cin >> a; cin >> b;
    // a = 20; b = 10;
    res = a + b;
    cout << "res = " << res << "\n";
    return 0;
}