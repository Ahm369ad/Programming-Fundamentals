// Read 10 numbers and display sum, maximum, and minimum.

#include <iostream>
using namespace std;

int main() {
    int num, sum = 0, max, min;

    cout << "Enter 10 numbers:\n";
    for(int i = 1; i <= 10; i++){
        cin >> num;

        if(i == 1){
            max = min = num;
        }

        sum += num;
        if(num > max) max = num;
        if(num < min) min = num;
    }

    cout << "Sum = " << sum << endl;
    cout << "Maximum = " << max << endl;
    cout << "Minimum = " << min << endl;

    return 0;
}
