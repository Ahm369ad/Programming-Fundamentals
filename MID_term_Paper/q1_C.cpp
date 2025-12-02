// #include <iostream>
// using namespace std;
// int main(){
//     int a = 0, b = 1;
//     a = b++;
//     cout << a << b;
//     b += a;
//     cout << a << b;
//     return 0;
// }

//Error:
// a = b++
// → a = 1, b = 2
// First print: a b → 12
// b += a → b = 2 + 1 = 3
// Second print: a b → 13

//Corrected Code:

#include <iostream>
using namespace std;
int main(){
    int a = 0, b = 1;
    a = b++;
    cout << a << b;
    b += a;
    cout << a << b;
    return 0;
}