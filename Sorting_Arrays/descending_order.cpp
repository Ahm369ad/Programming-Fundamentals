//Descending Order

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "How many numbers you want to enter? ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " numbers:\n";

    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout << "\nDescending Order: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }

    return 0;
}
