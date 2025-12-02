// #include <iostream>
// using namespace std;
// int main(){
//     int I, j;
//     for(I = 1; I > 7; I++)
//         cout << I;

//     cout << "End of Program";
//     return 7;
// }

// Errors:
// 1) I > 7 makes loop never run (should be I < 7).
// 2) I and j are declared but j is unused (not error, but unnecessary).
// 3) return 7; unusual but not an error.

// corrected code:

#include <iostream>
using namespace std;
int main(){
    int i;
    for(i = 1; i < 7; i++)
        cout << i;
    cout << "End of Program";
    return 0;
}
