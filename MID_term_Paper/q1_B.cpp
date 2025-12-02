// #include <iostream>
// using namespace std;
// int main(){
//     int num1 = 5, num2 = 10;
//     if(num1 < num2)
//         cout << "num1 is smallest";
//         num1 = num2;
//     else
//         cout << "num2 is smallest";
//     return 0;
// }

// Errors:
// 1) Missing braces {} after if(...).
// Because of this, num1 = num2; always runs else becomes error.

// Corrected Code:

#include <iostream>
using namespace std;
int main(){
    int num1 = 5, num2 = 10;
    if(num1 < num2) {
        cout << "num1 is smallest";
        num1 = num2;
    }
    else
        cout << "num2 is smallest";
    return 0;
}